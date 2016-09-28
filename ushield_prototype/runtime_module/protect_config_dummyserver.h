/*
	Hard-coded target addresses in lieu of configuration file parsing
*/

#define PROLOGUE_COUNT 83
#define EPILOGUE_COUNT 83
#define CPTRCALL_COUNT 33

arm_addr prologues[PROLOGUE_COUNT] = {0xd20,0xdd8,0xe98,0x1030,0x10e0,0x1294,0x138c,0x1448,0x1514,0x16f8,0x1910,0x1a64,0x1bc8,0x1d34,0x22b0,0x234c,0x23e0,0x29c4,0x2b1c,0x2bd8,0x4508,0x4688,0x4880,0x49a8,0x4ad0,0x4d00,0x4e14,0x4f18,0x5040,0x50f0,0x518c,0x54b8,0x5704,0x58f0,0x5cf8,0x5ebc,0x5f74,0x6010,0x60a8,0x6138,0x61bc,0x626c,0x6338,0x63e8,0x649c,0x6524,0x65b8,0x6630,0x66a8,0x6738,0x6a34,0x6ae0,0x6bd8,0x6c98,0x6da4,0x6ec4,0x6f4c,0x6fd8,0x7060,0x70f4,0x71b0,0x7344,0x7424,0x749c,0x7534,0x75b8,0x7628,0x76ac,0x7710,0x78d8,0x79bc,0x7bac,0x7d7c,0x8010,0x80a4,0x8154,0x831c,0x86c0,0x87e8,0x88f8,0x8ab4,0x8b20,0x8ce0};
arm_addr epilogues[EPILOGUE_COUNT] = {0xdd0,0xe90,0x1010,0x1070,0x1248,0x1374,0x143c,0x1504,0x16ec,0x18fc,0x1a58,0x1bbc,0x1d28,0x2288,0x2340,0x23d4,0x299c,0x2b10,0x2bcc,0x4504,0x467c,0x4874,0x4990,0x4ab8,0x4ce8,0x4dfc,0x4f00,0x5034,0x50e4,0x5180,0x54a0,0x56ec,0x58e4,0x5cdc,0x5eb0,0x5f64,0x6004,0x609c,0x612c,0x61b0,0x6260,0x6328,0x63dc,0x648c,0x6518,0x65ac,0x6624,0x669c,0x672c,0x6a28,0x6ad4,0x6bcc,0x6c8c,0x6d98,0x6eac,0x6f40,0x6fcc,0x7054,0x70e8,0x71a4,0x7334,0x7418,0x7490,0x7528,0x75ac,0x761c,0x76a0,0x7704,0x78bc,0x79b0,0x7ba0,0x7d6c,0x7ff8,0x8098,0x8148,0x8310,0x8698,0x87d8,0x88e8,0x8aa0,0x8b14,0x8cc4,0x8f60};
arm_addr cptrcalls[CPTRCALL_COUNT] = {0x14a4,0x173c,0x17c4,0x19c8,0x1ecc,0x1fa0,0x225c,0x2314,0x2468,0x2b78,0x2ce8,0x2ec8,0x30cc,0x32d0,0x3520,0x3a3c,0x3d08,0x3d68,0x42f8,0x45cc,0x45f4,0x46e8,0x4b8c,0x4f94,0x5274,0x5590,0x5778,0x5a3c,0x5d7c,0x5fd8,0x6580,0x6600,0x6678};