using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinButton : MonoBehaviour
{
    public static GameObject skin;

    // Start is called before the first frame update
    void Start()
    {
        skin = gameObject;
    }

    // Update is called once per frame
    public void ShowOrHide()
    {
        if (skin.activeSelf == true) { skin.SetActive(false); }
        if (skin.activeSelf == false) { skin.SetActive(true); }
    }
}
