using UnityEngine;
using UnityEngine.InputSystem; 

public class InputManager : Singleton<InputManager>
{
    public delegate void StartTouchEvent(Vector2 position, float time); 
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


}
