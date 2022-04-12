using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class SliderChangeTransparency : MonoBehaviour
{
    public Renderer rend;
    public PinchSlider transparencySlider;

    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<Renderer>();
        rend.material.shader = Shader.Find("Standard");
    }

    // Update is called once per frame
    public void UpdateTransparencyValue()
    {
        for (int i = 0; i < 3; i++) {
            rend.materials[i].SetVector("_Color", new Vector4(1, 1, 1, transparencySlider.SliderValue));
        }
    }
}
