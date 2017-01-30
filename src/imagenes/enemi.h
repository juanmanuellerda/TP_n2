#include "..\lib_draw.h"

const uint8_t enemi_Table[] =    {
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x44,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,
		0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x44,0xB8,0xB8,0x74,0x74,0x74,0x74,0x74,
		0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x44,0x04,0xB8,0x74,0x74,0x74,0x74,0x74,
		0x04,0x44,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x44,0x04,0xB8,0xB8,0x74,0x74,0x74,0x74,
		0x04,0x44,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
		0x44,0x44,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x44,0x04,0x74,0x74,0xB8,0xB8,0x50,0x50,
		0x50,0x50,0x44,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x44,
		0x44,0x74,0x50,0x44,0x44,0x44,0x44,0x44,
		0x50,0x50,0x44,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x04,
		0x04,0x74,0x50,0x44,0xA4,0x44,0x61,0xAA,
		0x44,0x44,0x50,0x44,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x44,0x44,0xBF,
		0x44,0x04,0x74,0x44,0x44,0x44,0xA4,0x44,
		0x44,0xAA,0xAA,0x44,0x44,0x00,0x00,0x00,
		0x00,0x00,0x00,0x44,0x44,0x44,0x04,0xFF,
		0xFF,0xFF,0x44,0x44,0xAA,0x61,0x84,0x44,
		0xA4,0x44,0x44,0xAA,0x61,0x44,0x00,0x00,
		0x00,0x00,0x00,0x44,0xB8,0x50,0x50,0x04,
		0xDF,0xDF,0xDF,0x44,0xFE,0xAA,0xB3,0x61,
		0x84,0x44,0xA4,0xA4,0x84,0x84,0x44,0x00,
		0x00,0x00,0x00,0x00,0x44,0xB8,0x50,0x50,
		0x04,0xBF,0xBF,0xBF,0x44,0xFE,0xAA,0x61,
		0x61,0x84,0x44,0xA4,0xA4,0x84,0x84,0x44,
		0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x44,
		0x44,0x04,0xBF,0xBF,0xBF,0x44,0x44,0xAA,
		0x61,0x84,0x44,0xA4,0x44,0x44,0xAA,0x61,
		0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x44,0x44,0xBF,0x44,0x04,0x74,
		0x44,0x44,0x44,0xA4,0x44,0x44,0xAA,0xAA,
		0x44,0x44,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x44,0x04,0x04,
		0x74,0x50,0x44,0xA4,0x44,0x61,0xAA,0x44,
		0x44,0x50,0x44,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,
		0x44,0x44,0x74,0x50,0x44,0x44,0x44,0x44,
		0x44,0x50,0x50,0x44,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x44,0x04,0x74,0x74,0xB8,
		0xB8,0x50,0x50,0x50,0x50,0x44,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x44,0x44,0x44,
		0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,
		0x04,0xB8,0xB8,0x74,0x74,0x74,0x74,0x04,
		0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x44,0x04,0xB8,0x74,0x74,0x74,0x74,
		0x74,0x04,0x44,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x44,0xB8,0xB8,0x74,0x74,
		0x74,0x74,0x74,0x44,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x44,0xB8,0xB8,
		0xB8,0xB8,0xB8,0xB8,0xB8,0x44,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,
		0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x00,
		};


VGA_Image enemi = { enemi_Table, 25, 24, };
