using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

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

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = arCam.ScreenPointToRay(Input.mousePosition); //reads "mouse" position
            if(_raycastManager.Raycast(ray, _hits))
            {
                Pose pose = _hits[0].pose;
                Instantiate(DataHandler.Instance.objects, pose.position, pose.rotation);
            }
        }
    }
}
