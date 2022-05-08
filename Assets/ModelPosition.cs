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
        model.transform.position = model.transform.position + new Vector3(-0.1f, 0, 0);
          
    }

    public void moveRight()
    {
        model.transform.position = model.transform.position + new Vector3(0.1f, 0, 0);

    }
}
