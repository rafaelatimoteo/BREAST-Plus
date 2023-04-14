using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinButton : MonoBehaviour
{
    public GameObject skin;
    public GameObject buttonOff;
    public GameObject buttonOn;

    // Start is called before the first frame update
    void Start()
    {
        if (skin == null)
        {
            skin = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    public void ShowOrHide()
    {
        skin.SetActive(!skin.activeSelf);
    }

    public void ShowOrHidePerf()
    {
        if(buttonOn.activeSelf)
        {
            skin.SetActive(true);
        }
        else
        {
            skin.SetActive(false);
        }
    }


}
