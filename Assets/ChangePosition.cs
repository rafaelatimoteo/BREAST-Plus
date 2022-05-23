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
        newValue = positionSliderX.SliderValue / 50;
        Debug.Log(newValue);

        if (newValue > 0.0005) {
            model.transform.position = new Vector3((float)newValue, model.transform.position.y, model.transform.position.z);
        }
        else if (newValue == 0 || newValue > 0.0009)
        {
            model.transform.position = model.transform.position;
        }
        else
        {
            model.transform.position = model.transform.position + new Vector3(-(float)newValue, 0, 0);
        }

    }
}
