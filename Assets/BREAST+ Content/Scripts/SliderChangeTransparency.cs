using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class SliderChangeTransparency : MonoBehaviour
{
    public Renderer rend;
    private double newValue, convertedValue;

    [SerializeField] private Material material;
    [SerializeField] private Renderer modelo;
    [SerializeField] public PinchSlider slider;


    // Start is called before the first frame update
    void Start()
    {
        if (rend == null)
        {
            rend = GetComponent<MeshRenderer>();
        }
    }

    // Update is called once per frame
    //public void UpdateTransparencyValue()
    //{
    //    //Debug.Log(transparencySlider.SliderValue);

    //    newValue = slider.SliderValue / 255;

    //    convertedValue = (newValue * 30) / 255;

    //    //Debug.Log("NEW: " + convertedValue);

    //    rend.material.SetVector("_Color", new Vector4(1, 1, 1, (float)newValue));
        
    //}


    public void UpdateTransparencyValue(float sliderValues)
    {
        Color color = modelo.material.color;
        sliderValues = slider.SliderValue;
        color.a = sliderValues;
        modelo.material.color = color;

    }
}
