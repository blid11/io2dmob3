using Unity.Netcode;
using UnityEngine;
using Unity.Collections; 
 

namespace HelloWorld
{
    public class HelloWorldPlayer : NetworkBehaviour
    {
        public NetworkVariable<Vector3> Position = new NetworkVariable<Vector3>();
        //set the default spawn direction of the player to be left 
        //public NetworkVariable<FixedString128Bytes> Direction = new NetworkVariable<FixedString128Bytes>();
        public NetworkVariable<Vector3> Velocity = new NetworkVariable<Vector3>();

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

        void GetNewPositionOnPlane()
        {
            Position.Value = Position.Value + Velocity.Value;
        }

        void Update()
        {
            transform.position = Position.Value;
        }
    }
}
