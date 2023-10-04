{
    "Source" : "./ray_gun_energy_ball_anim_Depth.azsl",

    "RasterState": { "CullMode": "None" },

    "DepthStencilState" : { 
        "Depth" : { "Enable" : true, "CompareFunc" : "GreaterEqual" }
    },

    "ProgramSettings" : 
    {
        "EntryPoints":
        [
            {
                "name": "MainVS",
                "type" : "Vertex"
            }
        ] 
    },

    "DrawList" : "depthTransparentMin"
}
