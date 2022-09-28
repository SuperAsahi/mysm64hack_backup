Lights1 rr_dl_floor_lights = gdSPDefLights1(
	0x21, 0x21, 0x21,
	0x42, 0x42, 0x42, 0x28, 0x28, 0x28);

Lights1 rr_dl_walls_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx rr_dl_castle_grounds_textures_01000_rgba16_ci8_aligner[] = {gsSPEndDisplayList()};
u8 rr_dl_castle_grounds_textures_01000_rgba16_ci8[] = {
	0x00, 0x01, 0x02, 0x02, 0x03, 0x04, 0x05, 0x06, 
	0x07, 0x08, 0x09, 0x0a, 0x01, 0x0b, 0x07, 0x0c, 
	0x00, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 
	0x14, 0x02, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
	0x1b, 0x02, 0x03, 0x03, 0x03, 0x1c, 0x05, 0x06, 
	0x1d, 0x1e, 0x09, 0x0a, 0x01, 0x0b, 0x1f, 0x0c, 
	0x00, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
	0x14, 0x01, 0x05, 0x27, 0x16, 0x28, 0x29, 0x1a, 
	0x0f, 0x2a, 0x16, 0x2b, 0x2c, 0x2d, 0x2e, 0x0d, 
	0x20, 0x1f, 0x1e, 0x2f, 0x08, 0x30, 0x31, 0x02, 
	0x32, 0x33, 0x34, 0x35, 0x36, 0x35, 0x35, 0x37, 
	0x35, 0x38, 0x35, 0x39, 0x39, 0x3a, 0x3b, 0x35, 
	0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x35, 0x37, 0x3e, 
	0x41, 0x42, 0x35, 0x40, 0x35, 0x35, 0x43, 0x02, 
	0x44, 0x45, 0x46, 0x2d, 0x47, 0x14, 0x2d, 0x2e, 
	0x14, 0x16, 0x03, 0x1f, 0x1e, 0x48, 0x2e, 0x30, 
	0x2e, 0x49, 0x16, 0x0f, 0x1f, 0x4a, 0x42, 0x35, 
	0x47, 0x47, 0x4b, 0x4a, 0x11, 0x0a, 0x4c, 0x14, 
	0x4d, 0x4e, 0x4f, 0x3e, 0x38, 0x35, 0x50, 0x41, 
	0x41, 0x51, 0x3e, 0x41, 0x3c, 0x41, 0x3a, 0x3a, 
	0x3b, 0x52, 0x3e, 0x3e, 0x39, 0x3e, 0x53, 0x53, 
	0x36, 0x36, 0x54, 0x3e, 0x3e, 0x35, 0x55, 0x14, 
	0x56, 0x57, 0x55, 0x4a, 0x0f, 0x2d, 0x1d, 0x0f, 
	0x58, 0x11, 0x0d, 0x30, 0x59, 0x0d, 0x49, 0x48, 
	0x57, 0x5a, 0x1d, 0x16, 0x5b, 0x5c, 0x40, 0x5d, 
	0x4a, 0x58, 0x4b, 0x5c, 0x5e, 0x5f, 0x60, 0x60, 
	0x61, 0x62, 0x3e, 0x63, 0x64, 0x41, 0x64, 0x3e, 
	0x54, 0x64, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x4e, 0x41, 0x50, 0x38, 0x3e, 0x65, 0x56, 0x36, 
	0x3e, 0x44, 0x54, 0x62, 0x64, 0x66, 0x67, 0x60, 
	0x4d, 0x5c, 0x0d, 0x13, 0x5e, 0x68, 0x5e, 0x4a, 
	0x4b, 0x5e, 0x4a, 0x0d, 0x4a, 0x16, 0x4a, 0x16, 
	0x69, 0x0a, 0x2d, 0x0d, 0x6a, 0x6a, 0x46, 0x0d, 
	0x1e, 0x2d, 0x16, 0x4a, 0x4a, 0x07, 0x02, 0x03, 
	0x6b, 0x62, 0x6c, 0x3e, 0x3e, 0x65, 0x34, 0x6d, 
	0x6e, 0x6f, 0x65, 0x3e, 0x51, 0x3e, 0x36, 0x34, 
	0x64, 0x35, 0x39, 0x3e, 0x65, 0x65, 0x34, 0x41, 
	0x3a, 0x39, 0x3e, 0x3e, 0x3e, 0x66, 0x70, 0x03, 
	0x71, 0x5c, 0x68, 0x0f, 0x16, 0x6a, 0x72, 0x3f, 
	0x38, 0x66, 0x6a, 0x4a, 0x73, 0x4a, 0x74, 0x67, 
	0x2d, 0x75, 0x5f, 0x16, 0x5d, 0x76, 0x4b, 0x20, 
	0x0d, 0x1e, 0x14, 0x1e, 0x2d, 0x02, 0x0c, 0x60, 
	0x77, 0x78, 0x3e, 0x3b, 0x3d, 0x34, 0x79, 0x7a, 
	0x7a, 0x32, 0x62, 0x36, 0x36, 0x3e, 0x62, 0x7b, 
	0x37, 0x3c, 0x66, 0x3e, 0x7c, 0x34, 0x54, 0x41, 
	0x41, 0x3a, 0x35, 0x39, 0x38, 0x7d, 0x5c, 0x60, 
	0x7e, 0x55, 0x4a, 0x2e, 0x27, 0x46, 0x3e, 0x62, 
	0x3e, 0x3c, 0x70, 0x47, 0x47, 0x4a, 0x5c, 0x7f, 
	0x14, 0x1a, 0x2c, 0x11, 0x4a, 0x6a, 0x5c, 0x20, 
	0x20, 0x75, 0x0a, 0x1c, 0x80, 0x1a, 0x02, 0x60, 
	0x81, 0x64, 0x37, 0x3e, 0x62, 0x6d, 0x82, 0x6e, 
	0x7a, 0x79, 0x56, 0x62, 0x34, 0x62, 0x64, 0x41, 
	0x3b, 0x83, 0x40, 0x37, 0x3e, 0x65, 0x62, 0x37, 
	0x39, 0x3c, 0x35, 0x35, 0x66, 0x5c, 0x70, 0x60, 
	0x84, 0x5e, 0x5b, 0x0d, 0x5c, 0x76, 0x41, 0x64, 
	0x62, 0x54, 0x35, 0x35, 0x46, 0x5c, 0x5e, 0x0d, 
	0x27, 0x49, 0x1c, 0x5b, 0x80, 0x2d, 0x0d, 0x5b, 
	0x47, 0x4a, 0x17, 0x27, 0x15, 0x09, 0x1a, 0x03, 
	0x85, 0x62, 0x62, 0x62, 0x86, 0x82, 0x82, 0x87, 
	0x7a, 0x7a, 0x82, 0x56, 0x88, 0x65, 0x65, 0x36, 
	0x3b, 0x39, 0x35, 0x37, 0x35, 0x3c, 0x41, 0x37, 
	0x36, 0x3e, 0x89, 0x8a, 0x3b, 0x83, 0x76, 0x03, 
	0x8b, 0x45, 0x5c, 0x5c, 0x43, 0x8c, 0x6c, 0x41, 
	0x62, 0x65, 0x37, 0x39, 0x35, 0x5c, 0x6a, 0x47, 
	0x4a, 0x8d, 0x60, 0x1c, 0x14, 0x2d, 0x08, 0x16, 
	0x4b, 0x4a, 0x8e, 0x17, 0x4a, 0x28, 0x80, 0x60, 
	0x8f, 0x90, 0x7a, 0x91, 0x56, 0x6f, 0x82, 0x82, 
	0x6e, 0x92, 0x6e, 0x87, 0x93, 0x88, 0x79, 0x91, 
	0x3e, 0x41, 0x76, 0x35, 0x35, 0x39, 0x39, 0x38, 
	0x54, 0x3e, 0x94, 0x89, 0x3e, 0x95, 0x35, 0x60, 
	0x79, 0x62, 0x54, 0x3c, 0x39, 0x42, 0x6c, 0x8c, 
	0x37, 0x34, 0x64, 0x3e, 0x3c, 0x39, 0x38, 0x83, 
	0x70, 0x0d, 0x0b, 0x80, 0x2d, 0x14, 0x15, 0x2d, 
	0x5b, 0x4a, 0x47, 0x96, 0x67, 0x2e, 0x0a, 0x60, 
	0x97, 0x8f, 0x6e, 0x6f, 0x65, 0x62, 0x8b, 0x6f, 
	0x33, 0x6e, 0x82, 0x98, 0x82, 0x99, 0x6e, 0x82, 
	0x53, 0x3e, 0x40, 0x35, 0x35, 0x35, 0x3b, 0x41, 
	0x3e, 0x3e, 0x36, 0x84, 0x34, 0x3b, 0x35, 0x60, 
	0x9a, 0x32, 0x64, 0x66, 0x57, 0x70, 0x9b, 0x66, 
	0x35, 0x38, 0x39, 0x37, 0x36, 0x7c, 0x3e, 0x8c, 
	0x7c, 0x66, 0x6a, 0x4a, 0x0f, 0x1f, 0x1f, 0x0f, 
	0x11, 0x5b, 0x5d, 0x43, 0x45, 0x4a, 0x30, 0x02, 
	0x9c, 0x79, 0x79, 0x91, 0x9d, 0x65, 0x64, 0x3e, 
	0x54, 0x62, 0x56, 0x6f, 0x6f, 0x6e, 0x6e, 0x7a, 
	0x87, 0x6f, 0x65, 0x3e, 0x3c, 0x42, 0x42, 0x3c, 
	0x37, 0x3e, 0x7c, 0x6d, 0x33, 0x3e, 0x40, 0x02, 
	0x8f, 0x54, 0x3e, 0x83, 0x7d, 0x47, 0x5e, 0x5b, 
	0x4b, 0x5c, 0x35, 0x42, 0x37, 0x94, 0x3e, 0x65, 
	0x53, 0x36, 0x70, 0x95, 0x70, 0x5e, 0x16, 0x16, 
	0x5a, 0x4a, 0x70, 0x3c, 0x39, 0x5d, 0x30, 0x60, 
	0x9e, 0x7a, 0x9f, 0x88, 0x78, 0x62, 0x34, 0x3e, 
	0x41, 0x3e, 0x7c, 0x7c, 0xa0, 0x6f, 0x6e, 0x90, 
	0xa1, 0x82, 0x53, 0x33, 0x62, 0x64, 0x3e, 0x3e, 
	0x44, 0x3e, 0x53, 0x56, 0x82, 0x7c, 0x35, 0x60, 
	0xa1, 0x7c, 0x3b, 0x37, 0x76, 0x5c, 0x72, 0x5b, 
	0x0d, 0x4a, 0x5d, 0x5c, 0x45, 0x35, 0x94, 0x6f, 
	0x33, 0x3e, 0x3b, 0x37, 0x42, 0x5c, 0x4a, 0x16, 
	0x4b, 0x70, 0x35, 0x35, 0x37, 0x83, 0x2e, 0x03, 
	0xa2, 0xa3, 0x92, 0x7a, 0x7a, 0x87, 0x91, 0x3e, 
	0x3e, 0x65, 0x78, 0x6f, 0x88, 0x88, 0x56, 0x87, 
	0xa4, 0x79, 0x6f, 0x6e, 0xa5, 0x62, 0x3e, 0x3e, 
	0x54, 0xa6, 0x6f, 0x56, 0x6e, 0x91, 0x38, 0x03, 
	0x85, 0x64, 0x64, 0x54, 0x34, 0x7c, 0x83, 0x5b, 
	0x4a, 0x6a, 0x83, 0x35, 0x35, 0x35, 0x35, 0x36, 
	0x54, 0x3e, 0x3e, 0x7c, 0x41, 0x76, 0x4a, 0x68, 
	0x6a, 0x35, 0x41, 0x64, 0x33, 0xa7, 0xa8, 0x80, 
	0xa9, 0xa1, 0x8f, 0xaa, 0xaa, 0x8f, 0x92, 0x53, 
	0x62, 0xab, 0x56, 0xac, 0x87, 0x82, 0x88, 0x87, 
	0x81, 0x88, 0x87, 0x99, 0x82, 0x6d, 0x3e, 0x6c, 
	0x65, 0x33, 0x82, 0x6e, 0xa4, 0xad, 0x4f, 0x80, 
	0xae, 0x6f, 0x32, 0x4d, 0x4d, 0x32, 0x64, 0x70, 
	0x5c, 0x40, 0x35, 0x36, 0x7c, 0x41, 0x3b, 0x41, 
	0x7b, 0x64, 0x62, 0x56, 0x6e, 0x54, 0x35, 0x70, 
	0x41, 0x54, 0xaf, 0x79, 0x7a, 0xb0, 0x3b, 0x60, 
	0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb3, 0xa1, 0x92, 
	0x6e, 0x56, 0x82, 0xb6, 0x8f, 0xb7, 0xa1, 0x4d, 
	0x92, 0x6e, 0x7a, 0xa1, 0xb8, 0x79, 0x6f, 0x53, 
	0x88, 0x79, 0xa4, 0x8f, 0xb9, 0xba, 0x91, 0x60, 
	0xbb, 0xac, 0xbc, 0xbd, 0x61, 0x90, 0x88, 0x54, 
	0x38, 0x35, 0x37, 0x91, 0x79, 0x62, 0x6f, 0x53, 
	0xa3, 0xbe, 0xb0, 0x7a, 0x7a, 0x7a, 0x62, 0x65, 
	0x62, 0x6d, 0x32, 0xa4, 0xa1, 0x7a, 0x62, 0xbf, 
	0xc0, 0xc1, 0xc2, 0xb4, 0xb5, 0xc3, 0xc4, 0xb9, 
	0xc4, 0x90, 0xa4, 0xa1, 0xb8, 0xc5, 0xa9, 0xc6, 
	0xa2, 0xc7, 0xb8, 0x6b, 0xa2, 0xb9, 0xc8, 0xa3, 
	0x7a, 0xb7, 0x8f, 0xc9, 0xaa, 0x6b, 0x7a, 0xbf, 
	0xca, 0xcb, 0xb9, 0x9e, 0x9e, 0xc4, 0x6e, 0x6e, 
	0x88, 0x6f, 0x33, 0x91, 0xcc, 0x99, 0xae, 0xc4, 
	0x2f, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x2f, 0x4a, 0x2d, 0x2d, 0x2d, 0x2d, 0x4a, 0x2d, 
	0x4a, 0x4a, 0x4a, 0x2d, 0x2d, 0x2d, 0x2d, 0x4a, 
	0x2d, 0x2d, 0x2d, 0x4a, 0x2d, 0x2d, 0x4a, 0x2d, 
	0x2d, 0x4a, 0x2d, 0x2d, 0x4a, 0x4a, 0x4a, 0x4a, 
	0x0c, 0x54, 0x67, 0x1f, 0x03, 0xcd, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x08, 
	0x0c, 0x81, 0x34, 0x42, 0x4a, 0xce, 0x22, 0x0f, 
	0x47, 0x57, 0x0d, 0x4a, 0x16, 0x20, 0x0d, 0x1e, 
	0x5c, 0x5d, 0x13, 0x2d, 0x13, 0x16, 0x0d, 0x0d, 
	0x6a, 0x5d, 0x4a, 0xcf, 0x0f, 0x4a, 0x8e, 0xd0, 
	0x03, 0x6e, 0x5d, 0x5e, 0x4a, 0x4a, 0x2d, 0x03, 
	0x1c, 0x4a, 0x8e, 0x20, 0x5b, 0x2e, 0x14, 0x0a, 
	0x2d, 0x2d, 0x2d, 0x0d, 0x30, 0x2d, 0x5d, 0x35, 
	0x5c, 0x5d, 0x4a, 0x0d, 0x4a, 0x6a, 0x2e, 0x0f, 
	0x03, 0xb9, 0x7c, 0x3e, 0x37, 0x39, 0x66, 0x6a, 
	0x5c, 0x35, 0x94, 0x35, 0x37, 0x95, 0x66, 0x72, 
	0x45, 0x45, 0x5c, 0x35, 0x40, 0x40, 0x54, 0x91, 
	0x7c, 0x54, 0x41, 0x3c, 0x3b, 0x36, 0x3d, 0x83, 
	0x03, 0xac, 0x7d, 0x47, 0x4a, 0x47, 0x4b, 0x4b, 
	0x4a, 0x5e, 0x70, 0x6a, 0x5d, 0x47, 0x5d, 0x0f, 
	0x0d, 0x47, 0x4b, 0x2d, 0x20, 0x2d, 0x40, 0x38, 
	0x45, 0x4a, 0x4b, 0x5c, 0x35, 0x5c, 0x80, 0x03, 
	0x03, 0xd1, 0x36, 0x37, 0x39, 0x3e, 0x3e, 0x54, 
	0x38, 0x3e, 0x65, 0x36, 0x3e, 0x36, 0x54, 0x43, 
	0x41, 0x3e, 0x44, 0x35, 0x35, 0x66, 0xa6, 0x93, 
	0xaf, 0x41, 0x3e, 0x34, 0x88, 0x62, 0x45, 0x6a, 
	0x03, 0x7c, 0x5c, 0x5b, 0x0d, 0x4a, 0x76, 0x76, 
	0x3b, 0x35, 0x35, 0x66, 0x4a, 0x47, 0x66, 0x76, 
	0x40, 0x76, 0x0d, 0x20, 0x5e, 0x66, 0x5c, 0x35, 
	0x4a, 0x0f, 0x4a, 0x46, 0x5c, 0x2e, 0x03, 0x03, 
	0x03, 0xc8, 0x65, 0x35, 0x39, 0x41, 0x62, 0x34, 
	0x88, 0x6f, 0x6f, 0x65, 0x41, 0x3e, 0x33, 0x7c, 
	0x53, 0x7c, 0x41, 0x35, 0x3e, 0x53, 0x34, 0x33, 
	0x3c, 0x40, 0x38, 0x38, 0x34, 0x35, 0x5e, 0x4b, 
	0x02, 0x38, 0x6a, 0x4a, 0x2d, 0x4a, 0x5c, 0x41, 
	0x54, 0x34, 0x3e, 0x66, 0x47, 0x47, 0x5c, 0x5c, 
	0x4a, 0x20, 0x2d, 0x30, 0x5c, 0x5c, 0x37, 0x45, 
	0x5e, 0x16, 0x2d, 0x2d, 0x2e, 0x08, 0x03, 0x0a, 
	0x02, 0x79, 0x3e, 0x3b, 0x35, 0x3c, 0x7c, 0x56, 
	0xb7, 0xa4, 0xa3, 0x53, 0x39, 0x39, 0x7c, 0x62, 
	0x3e, 0x35, 0x35, 0x76, 0x36, 0x7c, 0x88, 0x34, 
	0x3e, 0x8a, 0x83, 0x83, 0x35, 0x70, 0x17, 0x5c, 
	0x03, 0x45, 0x5c, 0x4a, 0x4a, 0x5d, 0x35, 0x3e, 
	0x62, 0x62, 0x3e, 0x35, 0x40, 0x5c, 0x5c, 0x4a, 
	0x16, 0x20, 0x14, 0x03, 0x47, 0x76, 0x35, 0x76, 
	0x5c, 0x46, 0x2d, 0x2e, 0x14, 0x03, 0x03, 0x03, 
	0x03, 0x34, 0x54, 0x3e, 0x3c, 0x3e, 0x91, 0x88, 
	0x90, 0xb7, 0x7a, 0x91, 0x53, 0x64, 0x34, 0x3e, 
	0x8a, 0x35, 0x45, 0x4a, 0x51, 0x7c, 0x62, 0x7c, 
	0x3e, 0x89, 0x35, 0x66, 0x9b, 0x6a, 0x7f, 0x55, 
	0x60, 0x40, 0x35, 0x5c, 0x5c, 0x83, 0x3e, 0x36, 
	0x3e, 0x34, 0x36, 0x3e, 0x37, 0x35, 0x35, 0x5c, 
	0x4a, 0x16, 0x2d, 0x80, 0x2d, 0x2d, 0x4a, 0x2d, 
	0x4a, 0x46, 0x5c, 0x47, 0x5b, 0x08, 0x03, 0x1c, 
	0x60, 0x6d, 0x91, 0x34, 0x54, 0x34, 0x79, 0x7a, 
	0x82, 0xb6, 0xc8, 0x82, 0x82, 0x6f, 0x91, 0x34, 
	0x38, 0x3d, 0x66, 0x72, 0x83, 0x35, 0x37, 0x35, 
	0x38, 0x64, 0x34, 0x37, 0x37, 0x70, 0x68, 0xd2, 
	0xd3, 0x34, 0x62, 0x3e, 0x35, 0x3c, 0x35, 0x41, 
	0x3e, 0x64, 0x62, 0x65, 0x65, 0x62, 0x3e, 0x3e, 
	0x35, 0x45, 0x80, 0x1c, 0x03, 0x0f, 0x2e, 0x2e, 
	0x0f, 0x4b, 0x5d, 0x4a, 0x5d, 0x0d, 0x1c, 0x0f, 
	0xd3, 0x92, 0xb6, 0x7a, 0x88, 0x91, 0x91, 0x82, 
	0x82, 0xa4, 0xb6, 0x90, 0xa3, 0x7a, 0x7a, 0x92, 
	0x91, 0x62, 0x5c, 0x5c, 0x5c, 0x35, 0x95, 0x35, 
	0x35, 0xa7, 0x44, 0x3e, 0x36, 0x35, 0x5c, 0x43, 
	0x03, 0x62, 0x88, 0x62, 0x3e, 0x46, 0x76, 0x5c, 
	0x35, 0x3e, 0x54, 0x7c, 0x36, 0x3e, 0x62, 0x62, 
	0x62, 0x3e, 0x4a, 0x30, 0x1c, 0x08, 0x14, 0x2d, 
	0x2d, 0x16, 0x0d, 0x4a, 0x66, 0x5c, 0x16, 0x20, 
	0x03, 0xa1, 0xb9, 0x7a, 0x6e, 0x3e, 0x62, 0x62, 
	0x53, 0x87, 0x92, 0xc8, 0x7a, 0x7a, 0xb6, 0xb6, 
	0xa4, 0x6e, 0x3e, 0x70, 0x67, 0x70, 0x66, 0x70, 
	0x83, 0x35, 0x35, 0x37, 0x65, 0x34, 0x3c, 0x40, 
	0xd4, 0x62, 0x53, 0x3e, 0x37, 0x35, 0x5c, 0x5c, 
	0x4a, 0x5c, 0x5c, 0x38, 0x3b, 0x3e, 0x34, 0x56, 
	0x88, 0x88, 0x37, 0x76, 0x46, 0x2d, 0x14, 0x2d, 
	0x2d, 0x0f, 0x4a, 0x5c, 0x35, 0x83, 0x5e, 0x20, 
	0xd4, 0xa4, 0x4d, 0x7a, 0x88, 0x33, 0x65, 0x65, 
	0x3e, 0x62, 0x7c, 0x88, 0x88, 0x88, 0x7a, 0xa1, 
	0xb9, 0xb8, 0x88, 0x62, 0x34, 0x35, 0x66, 0x83, 
	0x40, 0x35, 0x37, 0x65, 0x88, 0x91, 0x3e, 0x42, 
	0x2b, 0x62, 0x34, 0x3e, 0x3e, 0x3c, 0x35, 0x5c, 
	0x4a, 0x4a, 0x5c, 0x45, 0x5c, 0x83, 0x41, 0x7c, 
	0x88, 0x88, 0x53, 0x3b, 0x37, 0x45, 0x16, 0x2d, 
	0x4a, 0x0f, 0x4a, 0x5c, 0x35, 0x3e, 0x47, 0x2d, 
	0x2b, 0xa4, 0xb6, 0x88, 0x79, 0x88, 0x53, 0x62, 
	0x3e, 0x41, 0x7c, 0x33, 0x65, 0x33, 0x88, 0x7a, 
	0x8f, 0xa2, 0x90, 0x88, 0x88, 0x65, 0x35, 0x35, 
	0x3c, 0x35, 0x3b, 0x62, 0x91, 0x88, 0x36, 0x40, 
	0x20, 0x62, 0x34, 0x62, 0x62, 0x53, 0x36, 0x35, 
	0x5d, 0x4b, 0x5c, 0x5c, 0x5c, 0x35, 0x37, 0x37, 
	0x62, 0x33, 0x34, 0x3e, 0x3e, 0x35, 0x76, 0x4a, 
	0x5c, 0x5d, 0x5c, 0x35, 0x3e, 0x3e, 0x35, 0x2e, 
	0x20, 0x7a, 0x7a, 0x90, 0xa1, 0xa1, 0xa3, 0x91, 
	0x3e, 0x44, 0x54, 0x62, 0x62, 0x88, 0x82, 0x88, 
	0x90, 0xa1, 0xb6, 0x7a, 0x7a, 0x91, 0x62, 0x3e, 
	0x54, 0x3e, 0x7c, 0x56, 0x7a, 0x7a, 0x88, 0x3b, 
	0x2f, 0x6d, 0x6e, 0xa4, 0xa1, 0xa1, 0x88, 0x3e, 
	0x40, 0x40, 0x35, 0x35, 0x3e, 0x65, 0x64, 0x3e, 
	0x53, 0x6f, 0x62, 0x62, 0x7c, 0x7c, 0x39, 0x5d, 
	0x5c, 0x70, 0x35, 0x64, 0x62, 0x33, 0x62, 0x35, 
	0x2f, 0xb6, 0xb9, 0xc3, 0xc3, 0xd5, 0xb9, 0x87, 
	0x6d, 0x6d, 0x6d, 0x6d, 0x92, 0x90, 0x7a, 0x7a, 
	0xa1, 0xa1, 0x4d, 0x4d, 0xb7, 0xb7, 0x88, 0x54, 
	0x7c, 0x62, 0x6f, 0x7a, 0x7a, 0xa1, 0xa4, 0x33, 
	0xcf, 0x92, 0xc4, 0xb9, 0x9e, 0xb9, 0x8f, 0x79, 
	0x36, 0x3e, 0x3e, 0x3e, 0x33, 0xa3, 0x88, 0x88, 
	0x7a, 0x56, 0x33, 0x88, 0x82, 0x7a, 0x56, 0x39, 
	0x35, 0x35, 0x3e, 0x33, 0x88, 0x88, 0x82, 0x62, 
	0xcf, 0xc9, 0xd6, 0xb5, 0xd7, 0xd7, 0xb5, 0x8f, 
	0x87, 0x7a, 0x79, 0x92, 0xd8, 0xc9, 0xc4, 0xa2, 
	0x61, 0xd9, 0xa1, 0x8f, 0xb9, 0xaa, 0xa1, 0x56, 
	0x56, 0x56, 0x7a, 0xa1, 0xc4, 0xb9, 0xa2, 0x4d, 
	0x18, 0xa3, 0xb9, 0xd6, 0xca, 0xb4, 0xb9, 0xd9, 
	0xa3, 0x82, 0x88, 0x91, 0x7a, 0xa4, 0xa1, 0xb8, 
	0xb9, 0x7a, 0x79, 0x7a, 0xc8, 0xa1, 0xa3, 0x88, 
	0x88, 0x33, 0x62, 0x88, 0x7a, 0x7a, 0x7a, 0x6d, 
	0x18, 0x61, 0xc1, 0xc0, 0xda, 0xdb, 0xc1, 0xb5, 
	0x61, 0xb9, 0xb9, 0xc4, 0xc9, 0xc3, 0xc3, 0xb5, 
	0xdc, 0xb3, 0xb9, 0x9e, 0xc3, 0xd5, 0xb3, 0xb8, 
	0xa1, 0x90, 0x90, 0xb9, 0xb3, 0x61, 0x61, 0xb7, 
	
};

Gfx rr_dl_castle_grounds_textures_01000_rgba16_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 rr_dl_castle_grounds_textures_01000_rgba16_ci8_pal_rgba16[] = {
	0xe7, 0x3f, 0xff, 0xf9, 0xff, 0xfb, 0xf7, 0xbd, 
	0xff, 0x7d, 0xe7, 0xfd, 0xff, 0x3f, 0xef, 0xf9, 
	0xf7, 0xbb, 0xe7, 0x7f, 0xef, 0x7d, 0xff, 0x39, 
	0xef, 0xff, 0xef, 0x39, 0xf6, 0xf5, 0xef, 0x3b, 
	0xdf, 0xb7, 0xe7, 0x77, 0xdf, 0xfd, 0xdf, 0x7b, 
	0xef, 0xbb, 0xe7, 0xbd, 0xe7, 0x3b, 0xdf, 0x3b, 
	0xdf, 0xbb, 0xff, 0x37, 0xf7, 0x7f, 0xe7, 0x3d, 
	0xf7, 0x7d, 0xe7, 0xb9, 0xf7, 0x79, 0xef, 0xb9, 
	0xef, 0x79, 0xf7, 0x35, 0xf7, 0x3d, 0xe7, 0xb7, 
	0xef, 0xb7, 0xdf, 0xff, 0xdf, 0x7d, 0xe7, 0x7d, 
	0xe7, 0xbb, 0xff, 0x77, 0xdf, 0x7f, 0xef, 0x3f, 
	0xff, 0x7b, 0xef, 0x7b, 0xe7, 0x7b, 0xff, 0xbb, 
	0xf7, 0x7b, 0xff, 0x3d, 0xc5, 0xaf, 0xbe, 0x31, 
	0xc6, 0x33, 0xd6, 0xb5, 0xce, 0x71, 0xce, 0xb3, 
	0xce, 0x75, 0xd6, 0xb3, 0xde, 0xb3, 0xce, 0xb5, 
	0xd6, 0x75, 0xce, 0xb7, 0xce, 0x73, 0xd6, 0x77, 
	0xde, 0xb5, 0xd6, 0x73, 0xd6, 0xf3, 0xde, 0x75, 
	0xd6, 0x33, 0xd6, 0xf7, 0xde, 0xf9, 0xe7, 0x37, 
	0xff, 0xb9, 0xf7, 0xb9, 0xe7, 0x39, 0xe6, 0xf9, 
	0xef, 0x7f, 0xb5, 0x6b, 0xbe, 0x73, 0xbd, 0xf3, 
	0xce, 0xf3, 0xce, 0xb1, 0xde, 0xf3, 0xc6, 0x2f, 
	0xce, 0x33, 0xd6, 0xb9, 0xc5, 0xef, 0xd7, 0x39, 
	0xee, 0xf9, 0xef, 0x3d, 0xee, 0xfb, 0xe7, 0x79, 
	0xde, 0xf7, 0xe6, 0xf7, 0xdf, 0x39, 0xef, 0xfb, 
	0xff, 0x7f, 0xa5, 0x27, 0xc6, 0x31, 0xc6, 0xb5, 
	0xc6, 0x73, 0xc6, 0x71, 0xd6, 0xf5, 0xde, 0xb9, 
	0xef, 0x37, 0xd7, 0x37, 0xdf, 0x37, 0xad, 0x29, 
	0xd6, 0x71, 0xc5, 0xf1, 0xb5, 0xef, 0xbe, 0x2f, 
	0xde, 0xf5, 0xc5, 0xad, 0xd6, 0xf9, 0xdf, 0x77, 
	0xe7, 0x35, 0xf7, 0x3b, 0xde, 0xb7, 0x9d, 0x6b, 
	0xc5, 0xf3, 0xbd, 0xaf, 0xb5, 0xad, 0xc6, 0x35, 
	0xce, 0x31, 0xdf, 0x35, 0xad, 0xef, 0xde, 0xfb, 
	0xef, 0xbd, 0xbd, 0x6d, 0xbd, 0xed, 0xd6, 0xb7, 
	0xcd, 0xf1, 0xb5, 0xeb, 0xc5, 0xb1, 0xbd, 0xad, 
	0xbd, 0xef, 0xc6, 0x75, 0xce, 0x77, 0xc6, 0x6f, 
	0xd6, 0xb1, 0xf7, 0x39, 0xdf, 0x79, 0xad, 0x2b, 
	0xad, 0xab, 0xbd, 0xf1, 0xb5, 0xaf, 0xbd, 0xb1, 
	0xc6, 0xb3, 0xce, 0xf5, 0xe6, 0xb7, 0xa4, 0xe5, 
	0xb6, 0x2d, 0xbd, 0xab, 0xb5, 0x69, 0xd7, 0x35, 
	0xa4, 0xa7, 0xce, 0x6f, 0xa4, 0xe9, 0xb5, 0xf1, 
	0xbe, 0x71, 0xad, 0x6b, 0xa5, 0x69, 0xb5, 0xed, 
	0xad, 0xad, 0xbe, 0x2d, 0xce, 0x2f, 0xce, 0x35, 
	0xce, 0xb9, 0x95, 0x29, 0xa4, 0xe7, 0xcd, 0xef, 
	0xbd, 0xeb, 0xbd, 0x6f, 0xa5, 0x6d, 0xbe, 0x33, 
	0xb5, 0xb1, 0x94, 0x67, 0xad, 0x67, 0x9d, 0x27, 
	0x9c, 0xa7, 0x94, 0xa5, 0xad, 0x6d, 0xb5, 0x6d, 
	0xa5, 0x2b, 0xa5, 0x29, 0xa5, 0x2d, 0xa4, 0xa9, 
	0xad, 0xa9, 0xa4, 0xeb, 0xc6, 0x2d, 0xef, 0xbf, 
	0x84, 0x21, 0x8c, 0xa3, 0x9c, 0xa5, 0x9c, 0xe7, 
	0xa5, 0x6b, 0xad, 0x27, 0x95, 0x27, 0xb5, 0xa9, 
	0xb5, 0xab, 0x9d, 0x29, 0x94, 0x65, 0x9d, 0x25, 
	0xb5, 0x6f, 0xff, 0xbf, 0xee, 0xf7, 0xee, 0xfd, 
	0xe6, 0xf5, 0xa5, 0x67, 0xe6, 0xb9, 0xf7, 0xfb, 
	0xef, 0xfd, 0x9c, 0xe5, 0x94, 0xe5, 0x8c, 0x63, 
	0xa5, 0xab, 0xad, 0x69, 0x7b, 0xdf, 0x8c, 0x21, 
	0x94, 0xa3, 
};

Vtx rr_dl_floor_mesh_layer_1_vtx_0[4] = {
	{{{-7467, 0, 7467},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7467, 0, 7467},0, {1008, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7467, 0, -7467},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-7467, 0, -7467},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx rr_dl_floor_mesh_layer_1_tri_0[] = {
	gsSPVertex(rr_dl_floor_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx rr_dl_walls_mesh_layer_1_vtx_0[60] = {
	{{{5599, 9295, 0},0, {-16, -20275},{0x84, 0x0, 0x1A, 0xFF}}},
	{{{5115, 9295, -2277},0, {-19591, -20275},{0x84, 0x0, 0x1A, 0xFF}}},
	{{{5115, -9295, -2277},0, {-19591, 22291},{0x84, 0x0, 0x1A, 0xFF}}},
	{{{5599, -9295, 0},0, {-16, 22291},{0x84, 0x0, 0x1A, 0xFF}}},
	{{{5115, 9295, -2277},0, {-11399, -20275},{0x99, 0x0, 0x4B, 0xFF}}},
	{{{3746, 9295, -4161},0, {-27590, -20275},{0x99, 0x0, 0x4B, 0xFF}}},
	{{{3746, -9295, -4161},0, {-27590, 22291},{0x99, 0x0, 0x4B, 0xFF}}},
	{{{5115, -9295, -2277},0, {-11399, 22291},{0x99, 0x0, 0x4B, 0xFF}}},
	{{{3746, 9295, -4161},0, {30140, -20275},{0xC0, 0x0, 0x6E, 0xFF}}},
	{{{1730, 9295, -5325},0, {12808, -20275},{0xC0, 0x0, 0x6E, 0xFF}}},
	{{{1730, -9295, -5325},0, {12808, 22291},{0xC0, 0x0, 0x6E, 0xFF}}},
	{{{3746, -9295, -4161},0, {30140, 22291},{0xC0, 0x0, 0x6E, 0xFF}}},
	{{{1730, 9295, -5325},0, {14856, -20275},{0xF3, 0x0, 0x7E, 0xFF}}},
	{{{-585, 9295, -5568},0, {-5047, -20275},{0xF3, 0x0, 0x7E, 0xFF}}},
	{{{-585, -9295, -5568},0, {-5047, 22291},{0xF3, 0x0, 0x7E, 0xFF}}},
	{{{1730, -9295, -5325},0, {14856, 22291},{0xF3, 0x0, 0x7E, 0xFF}}},
	{{{-585, 9295, -5568},0, {-5047, -20275},{0x27, 0x0, 0x79, 0xFF}}},
	{{{-2799, 9295, -4849},0, {-24080, -20275},{0x27, 0x0, 0x79, 0xFF}}},
	{{{-2799, -9295, -4849},0, {-24080, 22291},{0x27, 0x0, 0x79, 0xFF}}},
	{{{-585, -9295, -5568},0, {-5047, 22291},{0x27, 0x0, 0x79, 0xFF}}},
	{{{-2799, 9295, -4849},0, {-11792, -20275},{0x55, 0x0, 0x5F, 0xFF}}},
	{{{-4529, 9295, -3291},0, {-26664, -20275},{0x55, 0x0, 0x5F, 0xFF}}},
	{{{-4529, -9295, -3291},0, {-26664, 22291},{0x55, 0x0, 0x5F, 0xFF}}},
	{{{-2799, -9295, -4849},0, {-11792, 22291},{0x55, 0x0, 0x5F, 0xFF}}},
	{{{-4529, 9295, -3291},0, {28273, -20275},{0x74, 0x0, 0x34, 0xFF}}},
	{{{-5476, 9295, -1164},0, {9990, -20275},{0x74, 0x0, 0x34, 0xFF}}},
	{{{-5476, -9295, -1164},0, {9990, 22291},{0x74, 0x0, 0x34, 0xFF}}},
	{{{-4529, -9295, -3291},0, {28273, 22291},{0x74, 0x0, 0x34, 0xFF}}},
	{{{-5476, 9295, -1164},0, {9990, -20275},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-5476, 9295, 1164},0, {-10022, -20275},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-5476, -9295, 1164},0, {-10022, 22291},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-5476, -9295, -1164},0, {9990, 22291},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-5476, 9295, 1164},0, {-10022, -20275},{0x74, 0x0, 0xCC, 0xFF}}},
	{{{-4529, 9295, 3291},0, {-28305, -20275},{0x74, 0x0, 0xCC, 0xFF}}},
	{{{-4529, -9295, 3291},0, {-28305, 22291},{0x74, 0x0, 0xCC, 0xFF}}},
	{{{-5476, -9295, 1164},0, {-10022, 22291},{0x74, 0x0, 0xCC, 0xFF}}},
	{{{-4529, 9295, 3291},0, {28680, -20275},{0x55, 0x0, 0xA1, 0xFF}}},
	{{{-2799, 9295, 4849},0, {13808, -20275},{0x55, 0x0, 0xA1, 0xFF}}},
	{{{-2799, -9295, 4849},0, {13808, 22291},{0x55, 0x0, 0xA1, 0xFF}}},
	{{{-4529, -9295, 3291},0, {28680, 22291},{0x55, 0x0, 0xA1, 0xFF}}},
	{{{-2799, 9295, 4849},0, {24048, -20275},{0x27, 0x0, 0x87, 0xFF}}},
	{{{-585, 9295, 5568},0, {5015, -20275},{0x27, 0x0, 0x87, 0xFF}}},
	{{{-585, -9295, 5568},0, {5015, 22291},{0x27, 0x0, 0x87, 0xFF}}},
	{{{-2799, -9295, 4849},0, {24048, 22291},{0x27, 0x0, 0x87, 0xFF}}},
	{{{-585, 9295, 5568},0, {5015, -20275},{0xF3, 0x0, 0x82, 0xFF}}},
	{{{1730, 9295, 5325},0, {-14888, -20275},{0xF3, 0x0, 0x82, 0xFF}}},
	{{{1730, -9295, 5325},0, {-14888, 22291},{0xF3, 0x0, 0x82, 0xFF}}},
	{{{-585, -9295, 5568},0, {5015, 22291},{0xF3, 0x0, 0x82, 0xFF}}},
	{{{1730, 9295, 5325},0, {-10792, -20275},{0xC0, 0x0, 0x92, 0xFF}}},
	{{{3746, 9295, 4161},0, {-28124, -20275},{0xC0, 0x0, 0x92, 0xFF}}},
	{{{3746, -9295, 4161},0, {-28124, 22291},{0xC0, 0x0, 0x92, 0xFF}}},
	{{{1730, -9295, 5325},0, {-10792, 22291},{0xC0, 0x0, 0x92, 0xFF}}},
	{{{3746, 9295, 4161},0, {29606, -20275},{0x99, 0x0, 0xB5, 0xFF}}},
	{{{5115, 9295, 2277},0, {13415, -20275},{0x99, 0x0, 0xB5, 0xFF}}},
	{{{5115, -9295, 2277},0, {13415, 22291},{0x99, 0x0, 0xB5, 0xFF}}},
	{{{3746, -9295, 4161},0, {29606, 22291},{0x99, 0x0, 0xB5, 0xFF}}},
	{{{5115, 9295, 2277},0, {19559, -20275},{0x84, 0x0, 0xE6, 0xFF}}},
	{{{5599, 9295, 0},0, {-16, -20275},{0x84, 0x0, 0xE6, 0xFF}}},
	{{{5599, -9295, 0},0, {-16, 22291},{0x84, 0x0, 0xE6, 0xFF}}},
	{{{5115, -9295, 2277},0, {19559, 22291},{0x84, 0x0, 0xE6, 0xFF}}},
};

Gfx rr_dl_walls_mesh_layer_1_tri_0[] = {
	gsSPVertex(rr_dl_walls_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(rr_dl_walls_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(rr_dl_walls_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(rr_dl_walls_mesh_layer_1_vtx_0 + 48, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSPEndDisplayList(),
};

Gfx mat_rr_dl_floor[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(rr_dl_floor_lights),
	gsSPEndDisplayList(),
};

Gfx mat_rr_dl_walls[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, rr_dl_castle_grounds_textures_01000_rgba16_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 220),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, rr_dl_castle_grounds_textures_01000_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(rr_dl_walls_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_rr_dl_walls[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx rr_dl_floor_mesh_layer_1[] = {
	gsSPDisplayList(mat_rr_dl_floor),
	gsSPDisplayList(rr_dl_floor_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx rr_dl_walls_mesh_layer_1[] = {
	gsSPDisplayList(mat_rr_dl_walls),
	gsSPDisplayList(rr_dl_walls_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_rr_dl_walls),
	gsSPEndDisplayList(),
};

Gfx rr_dl_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
