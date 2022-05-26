using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zoom : MonoBehaviour
{
    public GameObject button;
    public Vector3 zoomIn;

    // Start is called before the first frame update
    void Start()
    {
        if (button == null)
        {
            button = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    public void ZoomInOrOut()
    {
        if(button.transform.localScale.x == 1.5f)
        {
            button.transform.localScale += new Vector3(0.5f, 0.5f, 0f);
        }
        else
        {
            button.transform.localScale -= new Vector3(0.5f, 0.5f, 0f);

        }
    }
}
