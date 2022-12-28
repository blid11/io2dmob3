using UnityEngine;
using UnityEngine.InputSystem; 

[DefaultExecutionOrder(-1)] 
public class InputManager : Singleton<InputManager>
{
    #region Events
    public delegate void StartTouch(Vector2 position, float time);
    public event StartTouch OnStartTouch;
    public delegate void EndTouch(Vector2 position, float time);
    public event StartTouch OnEndTouch; 
    #endregion

    private TouchControls touchControls; 
    private Camera mainCamera; 

    private void Awake(){
        touchControls = new TouchControls(); 
        mainCamera = Camera.main; 
    }

    private void OnEnable() {
        touchControls.Enable();

    }

    private void OnDisable() {
        touchControls.Disable();
    }

    private void Start() {
        //Subscribe to event and pass in the info 
        //from an event to a function 
        touchControls.Touch.PrimaryContact.started += ctx => StartTouchPrimary(ctx); 
        touchControls.Touch.PrimaryContact.canceled += ctx => EndTouchPrimary(ctx); 
    }

    private void StartTouchPrimary(InputAction.CallbackContext context) {
        if (OnStartTouch != null) OnStartTouch(Utils.ScreenToWorld(mainCamera, touchControls.Touch.PrimaryPosition.ReadValue<Vector2>()), (float)context.startTime);

    }

    private void EndTouchPrimary(InputAction.CallbackContext context) {
        if (OnEndTouch != null) OnEndTouch(Utils.ScreenToWorld(mainCamera, touchControls.Touch.PrimaryPosition.ReadValue<Vector2>()), (float)context.time);
    }

    public Vector2 PrimaryPosition() {
        return Utils.ScreenToWorld(mainCamera, touchControls.Touch.PrimaryPosition.ReadValue<Vector2>());
    }

}



/*     public delegate void StartTouchEvent(Vector2 position, float time); 
    public event StartTouchEvent OnStartTouch;
    public delegate void EndTouchEvent(Vector2 position, float time); 
    public event EndTouchEvent OnEndTouch;

    public TouchControls touchControls;

    private void Awake() {
        touchControls = new TouchControls(); 
    }

    private void OnEnable() {
        touchControls.Enable();

    }

    private void OnDisable() {
        touchControls.Disable();
    }

    private void Start() {
        //Subscribe to event and pass in the info 
        //from an event to a function 
        touchControls.Touch.TouchPress.started += ctx => StartTouch(ctx); 
        touchControls.Touch.TouchPress.canceled  += ctx => EndTouch(ctx); 


    }

    private void StartTouch(InputAction.CallbackContext context) {
        Debug.Log("Touch started " + touchControls.Touch.TouchPosition.ReadValue<Vector2>());
        if (OnStartTouch != null) OnStartTouch(touchControls.Touch.TouchPosition.ReadValue<Vector2>(), (float)context.startTime);
    }
    
    private void EndTouch(InputAction.CallbackContext context) {
        Debug.Log("Touch ended " );
        if (OnEndTouch != null) OnEndTouch(touchControls.Touch.TouchPosition.ReadValue<Vector2>(), (float)context.time);
    }


} */
