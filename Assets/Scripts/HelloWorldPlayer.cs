using Unity.Netcode;
using UnityEngine;
using Unity.Collections; 
 

namespace HelloWorld
{
    public class HelloWorldPlayer : NetworkBehaviour
    {
        public NetworkVariable<Vector3> Position = new NetworkVariable<Vector3>();
        //set the default spawn direction of the player to be left 
        public NetworkVariable<FixedString128Bytes> Direction = new NetworkVariable<FixedString128Bytes>(); 
        //Direction = "left";
        //try different speeds which will be the number of pixels moved 
        //in each frame
        //private float velocity = 3.0; 
        //private string left = "left"; 
        //private FixedString32Bytes left32 = FixedString32Bytes(left);
        private NetworkVariable<FixedString128Bytes> mode = new NetworkVariable<FixedString128Bytes>(); 


        public override void OnNetworkSpawn()
        {
            if (IsOwner)
            {
                RandomMove();
            }
        }

        public void setRock() {

            if (NetworkManager.Singleton.IsServer)
            {
                mode.Value = "rock"; 
                Debug.Log("Mode set to rock");
            }
            else
            {
                SubmitModeRequestServerRpc();
            }

        }

        public void RandomMove()
        {
            if (NetworkManager.Singleton.IsServer)
            {
                var randomPosition = GetRandomPositionOnPlane();
                transform.position = randomPosition;
                Position.Value = randomPosition;
            }
            else
            {
                SubmitPositionRequestServerRpc();
            }
        }

        [ServerRpc]
        void SubmitPositionRequestServerRpc(ServerRpcParams rpcParams = default)
        {
            Position.Value = GetRandomPositionOnPlane();
        }

        [ClientRpc]
        void TestClientRpc(ClientRpcParams rpcParams = default) {
            Debug.Log("Client test");
        }

        [ServerRpc]
        void SubmitModeRequestServerRpc(ServerRpcParams rpcParams = default) {
            mode.Value = "rock"; 
            Debug.Log("Mode set to rock");
            TestClientRpc();
        }


        static Vector3 GetRandomPositionOnPlane()
        {
            return new Vector3(Random.Range(-3f, 3f), 1f, Random.Range(-3f, 3f));
        }

        void Update()
        {
            transform.position = Position.Value;
        }
    }
}
