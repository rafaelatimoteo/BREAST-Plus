using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class ChangePosition : MonoBehaviour
{
    public GameObject model;
    public PinchSlider positionSliderX, positionSliderY, positionSliderZ;
    private double newValue, newX, newY, newZ, convertedValue;

    // Start is called before the first frame update
    void Start()
    {
        if (model == null)
        {
            model = GetComponent<GameObject>();
        }
    }


    public void positionX()
    {

        newValue = positionSliderX.SliderValue / 100;
    

        if (newValue > 0.0005) {
            model.transform.localPosition = new Vector3((float)newValue, model.transform.localPosition.y, model.transform.localPosition.z);
        }
        else if (newValue == 0 || newValue > 0.0009)
        {
            model.transform.localPosition = model.transform.localPosition;
        }
        else
        {
            model.transform.localPosition = new Vector3(-(float)newValue, model.transform.localPosition.y, model.transform.localPosition.z);
        }

    }

    public void positionY()
    {
        newValue = positionSliderY.SliderValue / 100;

        if (newValue > 0.0005)
        {
            model.transform.localPosition = new Vector3(model.transform.localPosition.x, (float)newValue, model.transform.localPosition.z);
        }
        else if (newValue == 0 || newValue > 0.0009)
        {
            model.transform.localPosition = model.transform.localPosition;
        }
        else
        {
            model.transform.localPosition = new Vector3(model.transform.localPosition.x, -(float)newValue, model.transform.localPosition.z);
        }

    }

    public void positionZ()
    {
        newValue = positionSliderZ.SliderValue / 100;

        if (newValue > 0.0005)
        {
            model.transform.localPosition = new Vector3(model.transform.localPosition.x, model.transform.localPosition.y, (float)newValue);
        }
        else if (newValue == 0 || newValue > 0.0009)
        {
            model.transform.localPosition = model.transform.localPosition;
        }
        else
        {
            model.transform.localPosition = new Vector3(model.transform.localPosition.x, model.transform.localPosition.y, -(float)newValue);
        }

    }
}
