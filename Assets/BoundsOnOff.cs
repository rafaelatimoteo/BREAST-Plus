using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;

public class BoundsOnOff : MonoBehaviour
{
    public GameObject model;
    public BoundsControl boundsControl;
    public GameObject colorOn;
    public GameObject colorOff;

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

        if (boundsControl.Active)
        {
            colorOn.SetActive(true);
            colorOff.SetActive(false);
        }

        else
        {
            colorOn.SetActive(false);
            colorOff.SetActive(true);
        }

    }
}
