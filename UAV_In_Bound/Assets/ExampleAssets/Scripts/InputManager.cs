using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.ARFoundation;
//using UnityEngine.XR.ARSubsystems;

public class InputManager : MonoBehaviour
/**
 * Author: Betzaida Ortiz Rivas
 * Description: Manage Input from User
 * Updated: 2/21/23
 **/
{
    [SerializeField] private Camera arCam;
    [SerializeField] private ARRaycastManager _raycastManager;

    private List<ARRaycastHit> _hits = new List<ARRaycastHit>();

    private Touch touch;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        touch = Input.GetTouch(0);

        if(Input.touchCount < 0 || touch.phase != TouchPhase.Began)
        {
            return;
        }

        if (IsPointerOverUI(touch)) return;

            Ray ray = arCam.ScreenPointToRay(touch.position); //reads "mouse" position
            if(_raycastManager.Raycast(ray, _hits))
            {
                Pose pose = _hits[0].pose;
                Instantiate(DataHandler.Instance.objects, pose.position, DataHandler.Instance.objects.transform.rotation);
            }
    }

    bool IsPointerOverUI(Touch touch)
    {
        PointerEventData eventData = new PointerEventData(EventSystem.current);
        eventData.position = new Vector2(touch.position.x, touch.position.y);
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventData, results);
        return results.Count > 0;
    }

}
