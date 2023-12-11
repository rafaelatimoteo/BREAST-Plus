using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideShowPerf : MonoBehaviour
{
    public GameObject p1, p2, p3, p4, p5, p6;

    public GameObject buttonOff;


    // Start is called before the first frame update
    void Start()
    {
        if (p1 == null)
        {
            p1 = GetComponent<GameObject>();
        }
        if (p2 == null)
        {
            p2 = GetComponent<GameObject>();
        }
        if (p3 == null)
        {
            p3 = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    public void hideorshow()
    {
        if(buttonOff.activeSelf)
        {
            p1.SetActive(false);
            p2.SetActive(false);
            p3.SetActive(false);
            p4.SetActive(false);
            p5.SetActive(false);
            p6.SetActive(false);

        }
        else
        {
            p1.SetActive(true);
            p2.SetActive(true);
            p3.SetActive(true);
            p4.SetActive(true);
            p5.SetActive(true);
            p6.SetActive(true);

        }

    }
}
