using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class ChangeRotation : MonoBehaviour
{
    public GameObject model;
    public PinchSlider rotationSliderX, rotationSliderY, rotationSliderZ;
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
    public void rotationX()
    {
        newValue = rotationSliderX.SliderValue * 0.1;
        Debug.Log(newValue);

        if (newValue > 0.05018)
        {
            model.transform.Rotate((float)newValue, 0, 0, Space.Self);
        }
        else
        {
            model.transform.Rotate(-(float)newValue, 0, 0, Space.Self);
        }

    }
}
