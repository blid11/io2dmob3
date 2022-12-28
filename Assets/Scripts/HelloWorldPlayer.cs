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
        //public NetworkVariable<Vector3> Velocity = new NetworkVariable<Vector3>();

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

        //public void ControlMove(NetworkVariable<Vector3> newVelocity){
        public void ControlMove(Vector3 newVelocity){
            if (NetworkManager.Singleton.IsServer)
            {
                //var newPosition = Position.Value + newVelocity.Value;
                var newPosition = Position.Value + 0.01f * newVelocity;
                transform.position = newPosition;
                Position.Value = newPosition;
            }
            else
            {
                //SubmitMoveRequestServerRpc(newVelocity.Value);
                SubmitMoveRequestServerRpc(newVelocity);
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

        [ServerRpc]
        void SubmitMoveRequestServerRpc(Vector3 newVelocity, ServerRpcParams rpcParams = default) {
            Position.Value = Position.Value + 0.01f * newVelocity;
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
