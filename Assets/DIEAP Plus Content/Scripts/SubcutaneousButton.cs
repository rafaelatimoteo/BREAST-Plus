using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubcutaneousButton : MonoBehaviour
{
    static GameObject subcutaneous;

    // Start is called before the first frame update
    void Start()
    {
        if (subcutaneous == null)
        {
            subcutaneous = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    void ShowOrHide()
    {
        if (subcutaneous.activeSelf == true) { subcutaneous.SetActive(false); }
        if (subcutaneous.activeSelf == false) { subcutaneous.SetActive(true); }
    }
}
