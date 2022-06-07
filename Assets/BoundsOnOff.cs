using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;

public class BoundsOnOff : MonoBehaviour
{
    public GameObject model;
    public BoundsControl boundsControl;

    // Start is called before the first frame update
    void Start()
    {
        if (model == null)
        {
            model = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    public void OnOff()
    {
        boundsControl.Active = !(boundsControl.Active);
    }
}
