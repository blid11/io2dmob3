
using UnityEngine;
using UnityEngine.SceneManagement; 

//T is a generic class 
//will only pass in classes that derive from components
//components are attached to game objects
public class Singleton<T> : MonoBehaviour where T : Component
{
    private static T _instance; 
    
    public static T Instance {
        get {
            if (_instance == null) {
                GameObject obj = new GameObject(); 
                obj.name = typeof(T).Name; 
                obj.hideFlags = HideFlags.HideAndDontSave; 
                _instance = obj.AddComponent<T>(); 
            }
            return _instance; 
        }
    }

    private void OnDestroy() {
        if (_instance == this) {
            _instance = null; 
        }

    }
}
