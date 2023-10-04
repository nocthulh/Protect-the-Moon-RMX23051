{
    "Source": "./ray_gun_energy_ball_anim_Depth.azsl",

    "Definitions" : ["SHADOWMAP=1"] ,

    "DepthStencilState" : {
        "Depth" : { "Enable" : true, "CompareFunc" : "LessEqual" }
    },

    "DrawList" : "shadow",
    
    "RasterState" :
    {
        "depthBias" : "10",
        "depthBiasSlopeScale" : "4"
    },
    
    "ProgramSettings":
    {
      "EntryPoints":
      [
        {
          "name": "MainVS",
          "type": "Vertex"
        }
      ]
    }
}
