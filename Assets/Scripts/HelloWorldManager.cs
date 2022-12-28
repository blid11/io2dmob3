
using Unity.Netcode;
using UnityEngine;

namespace HelloWorld
{
    public class HelloWorldManager : MonoBehaviour
    {
        private Camera cameraMain; 
        //private Vector3 velocity = new Vector3(); 
        /* public static NetworkVariable<Vector3> lvelocity = new NetworkVariable<Vector3>(); 
        public static NetworkVariable<Vector3> rvelocity = new NetworkVariable<Vector3>(); 
        public static NetworkVariable<Vector3> uvelocity = new NetworkVariable<Vector3>(); 
        public static NetworkVariable<Vector3> dvelocity = new NetworkVariable<Vector3>(); 

        private void setVectors() {
            lvelocity.Value = new Vector3(-3f, 1f, 0f);
            rvelocity.Value = new Vector3(3f, 1f, 0f); 
            uvelocity.Value = new Vector3(0f, 1f, 3f); 
            dvelocity.Value = new Vector3(0f, 1f, -3f); 
        } */

        public static Vector3 lvelocity = new Vector3(); 
        public static Vector3 rvelocity = new Vector3(); 
        public static Vector3 uvelocity = new Vector3();
        public static Vector3 dvelocity = new Vector3();

        [SerializeField]
        private float minimumDistance = .2f;
        [SerializeField]
        private float maximumTime = 1f; 

        private InputManager inputManager;
        private Vector2 startPosition; 
        private float startTime;
        private Vector2 endPosition; 
        private float endTime; 

        private void Awake() {
            inputManager = InputManager.Instance; 
        }

        private void OnEnable() {
            inputManager.OnStartTouch += SwipeStart;
            inputManager.OnEndTouch += SwipeEnd; 
        }

        private void OnDisable() {
            inputManager.OnStartTouch -= SwipeStart;
            inputManager.OnEndTouch -= SwipeEnd;
        }

        private void SwipeStart(Vector2 position, float time) {
            startPosition = position; 
            startTime = time; 
        }

        private void SwipeEnd(Vector2 position, float time) {
            endPosition = position; 
            endTime = time;
            DetectSwipe(); 
        }

        private void DetectSwipe() {
            //measure the distance between our ending and start position 
            //make sure distance and time are sufficient for a swipe
            if (Vector3.Distance(startPosition, endPosition) >= minimumDistance &&
                (endTime - startTime) <= maximumTime) {
                    Debug.DrawLine(startPosition, endPosition, Color.red, 5f);
            }

        }

        private void setVectors() {
            lvelocity = new Vector3(-3f, 1f, 0f);
            rvelocity = new Vector3(3f, 1f, 0f); 
            uvelocity = new Vector3(0f, 1f, 3f); 
            dvelocity = new Vector3(0f, 1f, -3f); 
        }

        void OnGUI()
        {
            setVectors();
            GUILayout.BeginArea(new Rect(10, 10, 300, 300));
            if (!NetworkManager.Singleton.IsClient && !NetworkManager.Singleton.IsServer)
            {
                StartButtons();
            }
            else
            {
                StatusLabels();

                SubmitNewPosition();
            }

            GUILayout.EndArea();
        }

        static void StartButtons()
        {
            if (GUILayout.Button("Host")) NetworkManager.Singleton.StartHost();
            if (GUILayout.Button("Client")) NetworkManager.Singleton.StartClient();
            if (GUILayout.Button("Server")) NetworkManager.Singleton.StartServer();
        }

        static void StatusLabels()
        {
            var mode = NetworkManager.Singleton.IsHost ?
                "Host" : NetworkManager.Singleton.IsServer ? "Server" : "Client";

            GUILayout.Label("Transport: " +
                NetworkManager.Singleton.NetworkConfig.NetworkTransport.GetType().Name);
            GUILayout.Label("Mode: " + mode);
        }

        static void SubmitNewPosition()
        {   
            if (GUILayout.Button(NetworkManager.Singleton.IsServer ? "Rock" : "Rock")) 
            {
                if (NetworkManager.Singleton.IsServer && !NetworkManager.Singleton.IsClient )
                {
                    Debug.Log("Server setRock"); 
                    foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
                        NetworkManager.Singleton.SpawnManager.GetPlayerNetworkObject(uid).GetComponent<HelloWorldPlayer>().setRock();

                    foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)    
                        NetworkManager.Singleton.SpawnManager.GetPlayerNetworkObject(uid).GetComponent<HelloWorldPlayer>().ControlMove(rvelocity);
                        
                }
                else {
                    var playerObject = NetworkManager.Singleton.SpawnManager.GetLocalPlayerObject();
                    Debug.Log("Client setRock"); 
                    var player = playerObject.GetComponent<HelloWorldPlayer>();
                    player.setRock();
                    player.ControlMove(lvelocity);
                }
            }
            /* if (GUILayout.Button(NetworkManager.Singleton.IsServer ? "Move" : "Request Position Change"))
            {
                if (NetworkManager.Singleton.IsServer && !NetworkManager.Singleton.IsClient )
                {
                    foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
                        NetworkManager.Singleton.SpawnManager.GetPlayerNetworkObject(uid).GetComponent<HelloWorldPlayer>().RandomMove();
                }
                else
                {
                    var playerObject = NetworkManager.Singleton.SpawnManager.GetLocalPlayerObject();
                    var player = playerObject.GetComponent<HelloWorldPlayer>();
                    player.RandomMove();
                }
            } */
        }
    }
}
