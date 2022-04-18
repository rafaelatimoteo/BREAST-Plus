using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubcutaneousButton : MonoBehaviour
{
    public GameObject subcutaneous;

    // Start is called before the first frame update
    void Start()
    {
        if (subcutaneous == null)
        {
            subcutaneous = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    public void ShowOrHide()
    {
        subcutaneous.SetActive(!subcutaneous.activeSelf);
    }
}
