using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangeColorButton : MonoBehaviour
{
    public GameObject quad;
    public Material material;

    // Start is called before the first frame update
    void Start()
    {
        if (quad == null)
        {
            quad = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    public void ChangeColorOff()
    {
        quad.GetComponent<Renderer>().material.color = Color.black;
    }

    public void ChangeColorOn()
    {
        quad.GetComponent<Renderer>().material.color = Color.blue;
    }

}
