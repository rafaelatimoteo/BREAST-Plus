using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PressedButton : MonoBehaviour
{
    public GameObject button;
    public GameObject colorOn;
    public GameObject colorOff;

    // Start is called before the first frame update
    void Start()
    {
        if (button == null)
        {
            button = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    public void buttonColor()
    {
        if (button.activeSelf)
        {
            colorOn.SetActive(true);
            colorOff.SetActive(false);
        }

        else {
            colorOn.SetActive(false);
            colorOff.SetActive(true);
        }
    }
}
