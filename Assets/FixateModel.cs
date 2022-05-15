using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FixateModel : MonoBehaviour
{
    public GameObject model;

    void Start()
    {
        if (model == null)
        {
            model = GetComponent<GameObject>();
        }

    }

    // Update is called once per frame
    public void FixateOrFree()
    {
        enabled = model.GetComponent<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator>().isActiveAndEnabled;
        model.GetComponent<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator>().enabled = !enabled;
    }
}
