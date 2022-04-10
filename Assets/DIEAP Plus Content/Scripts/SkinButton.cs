using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkinButton : MonoBehaviour
{
    static GameObject skin;

    // Start is called before the first frame update
    void Start()
    {
        if (skin == null)
        {
            skin = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    void ShowOrHide()
    {
        if (skin.activeSelf == true) { skin.SetActive(false); }
        if (skin.activeSelf == false) { skin.SetActive(true); }
    }
}
