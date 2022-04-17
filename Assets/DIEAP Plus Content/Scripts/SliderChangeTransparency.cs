using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class SliderChangeTransparency : MonoBehaviour
{
    public Renderer rend;
    public PinchSlider transparencySlider;
    private double newValue, convertedValue;


    // Start is called before the first frame update
    void Start()
    {
        if (rend == null)
        {
            rend = GetComponent<MeshRenderer>();
        }
    }

    // Update is called once per frame
    public void UpdateTransparencyValue()
    {
        //Debug.Log(transparencySlider.SliderValue);

        newValue = transparencySlider.SliderValue / 255;

        convertedValue = (newValue * 20) / 255;

        //Debug.Log("NEW: " + convertedValue);

        rend.material.SetVector("_Color", new Vector4(1, 1, 1, (float)newValue));
        
    }
}
