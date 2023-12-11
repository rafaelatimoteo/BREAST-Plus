using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideShowPerf : MonoBehaviour
{
    public List<GameObject> perforators;

    public GameObject buttonOff;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void hideorshow()
    {
        buttonOff.SetActive(!buttonOff.activeSelf);

        if (buttonOff.activeSelf)
        {
            foreach (var p in perforators)
            {
                p.SetActive(false);
            }

        }
        else
        {
            foreach (var p in perforators)
            {
                p.SetActive(true);
            }
        }

    }
}
