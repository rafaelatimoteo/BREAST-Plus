using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelPosition : MonoBehaviour
{
    public GameObject model;

    // Start is called before the first frame update
    void Start()
    {
        if (model == null)
        {
            model = GetComponent<GameObject>();
        }

    }

    // Update is called once per frame
    public void moveLeft()
    {
        model.transform.position = model.transform.position + new Vector3(-0.001f, 0, 0);
          
    }

    public void moveRight()
    {
        model.transform.position = model.transform.position + new Vector3(0.001f, 0, 0);

    }

    public void moveUp()
    {
        model.transform.position = model.transform.position + new Vector3(0, -0.001f, 0);

    }

    public void moveDown()
    {
        model.transform.position = model.transform.position + new Vector3(0, 0.001f, 0);

    }

    public void moveBack()
    {
        model.transform.position = model.transform.position + new Vector3(0, 0, -0.001f);

    }

    public void moveForward()
    {
        model.transform.position = model.transform.position + new Vector3(0, 0, 0.001f);

    }

}
