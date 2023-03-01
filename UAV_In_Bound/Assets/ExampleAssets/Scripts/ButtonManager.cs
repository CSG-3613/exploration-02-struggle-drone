using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
/**
* Author: Betzaida Ortiz Rivas
* Description: Manage Input from User
* Updated: 2/23/23
**/
{
    private Button btn;
    public GameObject objects;

    // Start is called before the first frame update
    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(SelectObject);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void SelectObject()
    {
        DataHandler.Instance.objects = objects;
    }
}
