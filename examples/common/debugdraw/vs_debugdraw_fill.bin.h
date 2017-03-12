static const uint8_t vs_debugdraw_fill_glsl[329] =
{
	0x56, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, // wProj.......u_mo
	0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x1b, 0x01, 0x00, 0x00, 0x61, 0x74, 0x74, // del. .. .....att
	0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // ribute highp vec
	0x34, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x3b, 0x0a, 0x61, 0x74, 0x74, // 4 a_indices;.att
	0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // ribute highp vec
	0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x75, 0x6e, // 3 a_position;.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, // iform highp mat4
	0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, //  u_viewProj;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // form mat4 u_mode
	0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // l[32];.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, //  ().{.  highp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_1;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_1.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_1.xyz 
	0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, // = a_position;.  
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, // gl_Position = (u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x75, 0x5f, 0x6d, // _viewProj * (u_m
	0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, 0x6e, 0x74, 0x28, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, // odel[int(a_indic
	0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // es.x)] * tmpvar_
	0x31, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                           // 1));.}...
};
static const uint8_t vs_debugdraw_fill_spv[1201] =
{
	0x56, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x04, 0x03, 0x02, 0x23, 0x07, // VSH...........#.
	0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0xe8, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........>......
	0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, // GLSL.std.450....
	0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, // ....B...........
	0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, // B...........`...
	0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, // $Global.....`...
	0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, // ....u_viewRect..
	0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, // ....`.......u_vi
	0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // ewTexel.....`...
	0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, // ....u_view......
	0x60, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, // `.......u_invVie
	0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // w.......`.......
	0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, // u_proj......`...
	0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, // ....u_invProj...
	0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, // ....`.......u_vi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x60, 0x01, 0x00, 0x00, // ewProj......`...
	0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, // ....u_invViewPro
	0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // j.......`.......
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, // u_model.....`...
	0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, // ....u_modelView.
	0x06, 0x00, 0x07, 0x00, 0x60, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, // ....`.......u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, // delViewProj.....
	0x60, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, // `.......u_alphaR
	0x65, 0x66, 0x34, 0x00, 0x47, 0x00, 0x04, 0x00, 0x9f, 0x05, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // ef4.G...........
	0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // @...H...`.......
	0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #.......H...`...
	0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ....#.......H...
	0x60, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // `.......#... ...
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....H...`.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #...`...H...`...
	0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x60, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, // `.......#.......
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...`.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #.......H...`...
	0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x60, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, // `.......#... ...
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ....H...`.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #...`...H...`...
	0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x60, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, // `.......#.......
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...`.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #.......H...`...
	0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x60, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, // `.......#.......
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x60, 0x01, 0x00, 0x00, // #... ...G...`...
	0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, // ............!...
	0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, //  ...............
	0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // ........e.......
	0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ............ ...
	0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, // ....+.......j...
	0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x9f, 0x05, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, //  ...........e...
	0x6a, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x60, 0x01, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // j.......`.......
	0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, // ....e...e...e...
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x9f, 0x05, 0x00, 0x00, // e...e...e.......
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, // e...e.......6...
	0x08, 0x00, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, // ....B...........
	0xf8, 0x00, 0x02, 0x00, 0xe7, 0x3e, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, // .....>......8...
	0x00,                                                                                           // .
};
static const uint8_t vs_debugdraw_fill_dx9[480] =
{
	0x56, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x80, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // el. .....u_viewP
	0x72, 0x6f, 0x6a, 0x04, 0x01, 0x80, 0x00, 0x04, 0x00, 0xb4, 0x01, 0x00, 0x03, 0xfe, 0xff, 0xfe, // roj.............
	0xff, 0x2b, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, // .+.CTAB.........
	0x03, 0xfe, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x78, // ...............x
	0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x4c, // ...D...........L
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x80, 0x00, 0x04, // ................
	0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // ...h.......u_mod
	0x65, 0x6c, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, // el......... ....
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0xab, 0x03, // ...u_viewProj...
	0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, // ...............v
	0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, // s_3_0.Microsoft 
	0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, // (R) HLSL Shader 
	0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, // Compiler 10.1..Q
	0x00, 0x00, 0x05, 0x84, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........@.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x80, 0x00, // ................
	0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x01, 0x80, 0x84, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x90, 0x2e, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x01, 0xb0, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, // ................
	0x00, 0x55, 0x90, 0x01, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x04, 0x00, 0x00, 0x05, 0x00, // .U.. ...........
	0x00, 0x0f, 0x80, 0x00, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x90, 0x00, // .... ...........
	0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0x80, 0x02, 0x20, 0xe4, 0xa0, 0x00, // ............ ...
	0x00, 0x00, 0xb0, 0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x05, // ........ .......
	0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x55, 0x80, 0x81, 0x00, 0xe4, 0xa0, 0x04, // .........U......
	0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x80, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x01, // ................
	0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x82, 0x00, 0xe4, 0xa0, 0x00, // ................
	0x00, 0xaa, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0xe0, 0x83, // ................
	0x00, 0xe4, 0xa0, 0x00, 0x00, 0xff, 0x80, 0x01, 0x00, 0xe4, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00, // ................
};
static const uint8_t vs_debugdraw_fill_dx11[675] =
{
	0x56, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, // wProj.......u_mo
	0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, 0x00, 0x70, 0x02, 0x44, 0x58, 0x42, 0x43, 0x21, // del. @...p.DXBC!
	0x99, 0xbc, 0x62, 0x67, 0xb7, 0x95, 0xd6, 0x90, 0x9d, 0x96, 0xc0, 0x0e, 0x98, 0x00, 0xf9, 0x01, // ..bg............
	0x00, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, // ...p.......,....
	0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, // .......ISGNP....
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .......8........
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x45, // ...............E
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x42, 0x4c, 0x45, 0x4e, 0x44, 0x49, 0x4e, 0x44, 0x49, // .......BLENDINDI
	0x43, 0x45, 0x53, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, 0xab, 0x4f, // CES.POSITION...O
	0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, // SGN,........... 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, // .......SV_POSITI
	0x4f, 0x4e, 0x00, 0x53, 0x48, 0x44, 0x52, 0xb0, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x6c, // ON.SHDR....@...l
	0x00, 0x00, 0x00, 0x59, 0x08, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, // ...Y...F. ......
	0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x12, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, // ..._..........._
	0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, // ...r.......g....
	0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, //  ..........h....
	0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, // ...)............
	0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, // ........@......8
	0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, // ...........V....
	0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0a, // ...F. ..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x01, // .......2........
	0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0a, // ...F. ..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, // ...............F
	0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x01, // .......2........
	0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0a, // ...F. ..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, // ...............F
	0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, // ...F.......F. ..
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, // ...............8
	0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, // ...........V....
	0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, // ...F. .........2
	0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, // ...........F. ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, // ...............F
	0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, // .......2........
	0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, // ...F. ..........
	0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, // .......F.......2
	0x00, 0x00, 0x0a, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, // .... ......F. ..
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, // ...............F
	0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x0e, 0x00, 0x01, // .......>........
	0x00, 0x40, 0x08,                                                                               // .@.
};
static const uint8_t vs_debugdraw_fill_mtl[685] =
{
	0x56, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, // wProj.......u_mo
	0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x7f, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, // del. .. .....usi
	0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, // ng namespace met
	0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // al;.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, // tlShaderInput {.
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, //   float4 a_indic
	0x65, 0x73, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, // es [[attribute(0
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, // )]];.  float3 a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, // position [[attri
	0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, // bute(1)]];.};.st
	0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // ruct xlatMtlShad
	0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // erOutput {.  flo
	0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, // at4 gl_Position 
	0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, // [[position]];.};
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, // .struct xlatMtlS
	0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, // haderUniform {. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, //  float4x4 u_view
	0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, // Proj;.  float4x4
	0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, //  u_model[32];.};
	0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, // .vertex xlatMtlS
	0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // haderOutput xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // MtlMain (xlatMtl
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // ShaderInput _mtl
	0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, // _i [[stage_in]],
	0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, //  constant xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, // lShaderUniform& 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, // _mtl_u [[buffer(
	0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // 0)]]).{.  xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, // lShaderOutput _m
	0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, // tl_o;.  float4 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, // mpvar_1 = 0;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_1.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_1.xyz 
	0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, // = _mtl_i.a_posit
	0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, // ion;.  _mtl_o.gl
	0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, // _Position = (_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, // l_u.u_viewProj *
	0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, //  (_mtl_u.u_model
	0x5b, 0x69, 0x6e, 0x74, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x69, 0x6e, // [int(_mtl_i.a_in
	0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // dices.x)] * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, // ar_1));.  return
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                   //  _mtl_o;.}...
};
extern const uint8_t* vs_debugdraw_fill_pssl;
extern const uint32_t vs_debugdraw_fill_pssl_size;
