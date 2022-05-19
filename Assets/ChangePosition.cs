using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class ChangePosition : MonoBehaviour
{
    public GameObject model;
    public PinchSlider positionSliderX, positionSliderY, positionSliderZ;
    private double newValue, convertedValue;

    // Start is called before the first frame update
    void Start()
    {
        if (model == null)
        {
            model = GetComponent<GameObject>();
        }
    }

    // Update is called once per frame
    public void positionX()
    {
        newValue = positionSliderX.SliderValue / 1000;
        Debug.Log(newValue);

        if (newValue > 0.0005) {
            model.transform.position = model.transform.position + new Vector3((float)newValue, 0, 0);
        }
        else
        {
        model.transform.position = model.transform.position + new Vector3(-(float)newValue, 0, 0);
        }

    }
}
