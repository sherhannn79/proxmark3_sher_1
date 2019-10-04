//-----------------------------------------------------------------------------
// Functions for Chip Identification
//-----------------------------------------------------------------------------

#include "taginfo.h"

#include <stdint.h>

// ISO/IEC 7816-6 manufacturer byte decoding

typedef struct {
	uint8_t manufacturer_byte;
	char* desc;
} manufacturerName_t;

// based on ISO/IEC JTC1/SC17 STANDING DOCUMENT 5 (Updated March 2018) Register of IC manufacturers
static const manufacturerName_t manufacturerMapping[] = {
	// ID,  "Vendor Country"
	{ 0x01, "Motorola UK"},
	{ 0x02, "STMicroelectronics SA France"},
	{ 0x03, "Hitachi, Ltd Japan"},
	{ 0x04, "NXP Semiconductors Germany"},
	{ 0x05, "Infineon Technologies AG Germany"},
	{ 0x06, "Cylink USA"},
	{ 0x07, "Texas Instrument France"},
	{ 0x08, "Fujitsu Limited Japan"},
	{ 0x09, "Matsushita Electronics Corporation, Semiconductor Company Japan"},
	{ 0x0A, "NEC Japan"},
	{ 0x0B, "Oki Electric Industry Co. Ltd Japan"},
	{ 0x0C, "Toshiba Corp. Japan"},
	{ 0x0D, "Mitsubishi Electric Corp. Japan"},
	{ 0x0E, "Samsung Electronics Co. Ltd Korea"},
	{ 0x0F, "Hynix Korea"},
	{ 0x10, "LG-Semiconductors Co. Ltd Korea"},
	{ 0x11, "Emosyn-EM Microelectronics USA"},
	{ 0x12, "INSIDE Technology France"},
	{ 0x13, "ORGA Kartensysteme GmbH Germany"},
	{ 0x14, "SHARP Corporation Japan"},
	{ 0x15, "ATMEL France"},
	{ 0x16, "EM Microelectronic-Marin SA Switzerland"},
	{ 0x17, "SMARTRAC TECHNOLOGY GmbH Germany"},
	{ 0x18, "ZMD AG Germany"},
	{ 0x19, "XICOR, Inc. USA"},
	{ 0x1A, "Sony Corporation Japan"},
	{ 0x1B, "Malaysia Microelectronic Solutions Sdn. Bhd Malaysia"},
	{ 0x1C, "Emosyn USA"},
	{ 0x1D, "Shanghai Fudan Microelectronics Co. Ltd. P.R. China"},
	{ 0x1E, "Magellan Technology Pty Limited Australia"},
	{ 0x1F, "Melexis NV BO Switzerland"},
	{ 0x20, "Renesas Technology Corp. Japan"},
	{ 0x21, "TAGSYS France"},
	{ 0x22, "Transcore USA"},
	{ 0x23, "Shanghai belling corp., ltd. China"},
	{ 0x24, "Masktech Germany Gmbh Germany"},
	{ 0x25, "Innovision Research and Technology Plc UK"},
	{ 0x26, "Hitachi ULSI Systems Co., Ltd. Japan"},
	{ 0x27, "Yubico AB Sweden"},
	{ 0x28, "Ricoh Japan"},
	{ 0x29, "ASK France"},
	{ 0x2A, "Unicore Microsystems, LLC Russian Federation"},
	{ 0x2B, "Dallas Semiconductor/Maxim USA"},
	{ 0x2C, "Impinj, Inc. USA"},
	{ 0x2D, "RightPlug Alliance USA"},
	{ 0x2E, "Broadcom Corporation USA"},
	{ 0x2F, "MStar Semiconductor, Inc Taiwan, ROC"},
	{ 0x30, "BeeDar Technology Inc. USA"},
	{ 0x31, "RFIDsec Denmark"},
	{ 0x32, "Schweizer Electronic AG Germany"},
	{ 0x33, "AMIC Technology Corp Taiwan"},
	{ 0x34, "Mikron JSC Russia"},
	{ 0x35, "Fraunhofer Institute for Photonic Microsystems Germany"},
	{ 0x36, "IDS Microchip AG Switzerland"},
	{ 0x37, "Kovio USA"},
	{ 0x38, "HMT Microelectronic Ltd Switzerland"},
	{ 0x39, "Silicon Craft Technology Thailand"},
	{ 0x3A, "Advanced Film Device Inc. Japan"},
	{ 0x3B, "Nitecrest Ltd UK"},
	{ 0x3C, "Verayo Inc. USA"},
	{ 0x3D, "HID Global USA"},
	{ 0x3E, "Productivity Engineering Gmbh Germany"},
	{ 0x3F, "Austriamicrosystems AG (reserved) Austria"},
	{ 0x40, "Gemalto SA France"},
	{ 0x41, "Renesas Electronics Corporation Japan"},
	{ 0x42, "3Alogics Inc Korea"},
	{ 0x43, "Top TroniQ Asia Limited Hong Kong"},
	{ 0x44, "Gentag Inc (USA) USA"},
	{ 0x45, "Invengo Information Technology Co.Ltd China"},
	{ 0x46, "Guangzhou Sysur Microelectronics, Inc China"},
	{ 0x47, "CEITEC S.A. Brazil"},
	{ 0x48, "Shanghai Quanray Electronics Co. Ltd. China"},
	{ 0x49, "MediaTek Inc Taiwan"},
	{ 0x4A, "Angstrem PJSC Russia"},
	{ 0x4B, "Celisic Semiconductor (Hong Kong) Limited China"},
	{ 0x4C, "LEGIC Identsystems AG Switzerland"},
	{ 0x4D, "Balluff GmbH Germany"},
	{ 0x4E, "Oberthur Technologies France"},
	{ 0x4F, "Silterra Malaysia Sdn. Bhd. Malaysia"},
	{ 0x50, "DELTA Danish Electronics, Light & Acoustics Denmark"},
	{ 0x51, "Giesecke & Devrient GmbH Germany"},
	{ 0x52, "Shenzhen China Vision Microelectronics Co., Ltd. China"},
	{ 0x53, "Shanghai Feiju Microelectronics Co. Ltd. China"},
	{ 0x54, "Intel Corporation USA"},
	{ 0x55, "Microsensys GmbH Germany"},
	{ 0x56, "Sonix Technology Co., Ltd. Taiwan"},
	{ 0x57, "Qualcomm Technologies Inc USA"},
	{ 0x58, "Realtek Semiconductor Corp Taiwan"},
	{ 0x59, "Freevision Technologies Co. Ltd China"},
	{ 0x5A, "Giantec Semiconductor Inc. China"},
	{ 0x5B, "JSC Angstrem-T Russia"},
	{ 0x5C, "STARCHIP France"},
	{ 0x5D, "SPIRTECH France"},
	{ 0x5E, "GANTNER Electronic GmbH Austria"},
	{ 0x5F, "Nordic Semiconductor Norway"},
	{ 0x60, "Verisiti Inc USA"},
	{ 0x61, "Wearlinks Technology Inc. China"},
	{ 0x62, "Userstar Information Systems Co., Ltd Taiwan"},
	{ 0x63, "Pragmatic Printing Ltd. UK"},
	{ 0x64, "Associacao do Laboratorio de Sistemas Integraveis Tecnologico – LSI-TEC Brazil"},
	{ 0x65, "Tendyron Corporation China"},
	{ 0x66, "MUTO Smart Co., Ltd. Korea"},
	{ 0x67, "ON Semiconductor USA"},
	{ 0x68, "TÜBİTAK BİLGEM Turkey"},
	{ 0x69, "Huada Semiconductor Co., Ltd China"},
	{ 0x6A, "SEVENEY France"},
	{ 0x6B, "ISSM France"},
	{ 0x6C, "Wisesec Ltd Israel"},
	{ 0x7E, "Holtek Taiwan"},
	{ 0x00, "Unknown" } // must be the last entry
};

// get manufacturer's name and country based on the manufacturer byte
char *getManufacturerName(uint8_t vendorID)
{
	int i;
	int len = sizeof(manufacturerMapping) / sizeof(manufacturerName_t);

	for (i = 0; i < len; ++i)
		if (vendorID == manufacturerMapping[i].manufacturer_byte)
			return manufacturerMapping[i].desc;

	//No match, return default
	return manufacturerMapping[len-1].desc;
}


// Chip ID encoding

typedef struct {
	uint8_t manufacturer; // chip info is manufacturer specific
	uint8_t chipID;
	uint8_t mask;         // relevant bits
	char* desc;
} chipinfo_t;


const chipinfo_t chipIDmapping[] = {
	// manufacturer_byte, chip_id, bitmask for chip_id, Text

	// 0x02 = ST Microelectronics
	{ 0x02, 0x05, 0xFF, "LRI64 [IC id = 05]"},
	{ 0x02, 0x08, 0xFF, "LRI2K [IC id = 08]"},
	{ 0x02, 0x0A, 0xFF, "LRIS2K [IC id = 10]"},
	{ 0x02, 0x44, 0xFF, "LRIS64K [IC id = 68]"},
	{ 0x02, 0x00, 0xFC, "SRIX4K (Special)"},
	{ 0x02, 0x08, 0xFC, "SR176"},
	{ 0x02, 0x0C, 0xFC, "SRIX4K"},
	{ 0x02, 0x10, 0xFC, "SRIX512"},
	{ 0x02, 0x18, 0xFC, "SRI512"},
	{ 0x02, 0x1C, 0xFC, "SRI4K"},
	{ 0x02, 0x30, 0xFC, "SRT512"},

	// 0x04 = Philips/NXP
	//I-Code SLI SL2 ICS20 [IC id = 01]
	//I-Code SLI-S         [IC id = 02]
	//I-Code SLI-L         [IC id = 03]
	//I-Code SLIX          [IC id = 01 + bit36 set to 1 (starting from bit0 - different from normal SLI)]
	//I-Code SLIX-S        [IC id = 02 + bit36 set to 1]
	//I-Code SLIX-L        [IC id = 03 + bit36 set to 1]
	{ 0x04, 0x01, 0xFF, "IC SL2 ICS20/ICS21(SLI) ICS2002/ICS2102(SLIX)" },
	{ 0x04, 0x02, 0xFF, "IC SL2 ICS53/ICS54(SLI-S) ICS5302/ICS5402(SLIX-S)" },
	{ 0x04, 0x03, 0xFF, "IC SL2 ICS50/ICS51(SLI-L) ICS5002/ICS5102(SLIX-L)" },

	// 0x05 = Infineon
	{ 0x05, 0xA1, 0xFF, "SRF55V01P [IC id = 161] plain mode 1kBit"},
	{ 0x05, 0xA8, 0xFF, "SRF55V01P [IC id = 168] pilot series 1kBit"},
	{ 0x05, 0x40, 0xFF, "SRF55V02P [IC id = 64]  plain mode 2kBit"},
	{ 0x05, 0x00, 0xFF, "SRF55V10P [IC id = 00]  plain mode 10KBit"},
	{ 0x05, 0x50, 0xFF, "SRF55V02S [IC id = 80]  secure mode 2kBit"},
	{ 0x05, 0x10, 0xFF, "SRF55V10S [IC id = 16]  secure mode 10KBit"},
	{ 0x05, 0x1E, 0xFE, "SLE66r01P [IC id = 3x = My-d Move or My-d move NFC]"},
	{ 0x05, 0x20, 0xF8, "SLE66r01P [IC id = 3x = My-d Move or My-d move NFC]"},

	// 0x07 = Texas Instruments
	//   XX = from bit 41 to bit 43 = product configuration - from bit 44 to bit 47 IC id (Chip ID Family)
	//Tag IT RFIDType-I Plus, 2kBit, TI Inlay
	//Tag-it HF-I Plus Inlay             [IC id = 00] -> b'0000 000 2kBit
	//Tag-it HF-I Plus Chip              [IC id = 64] -> b'1000 000 2kBit
	//Tag-it HF-I Standard Chip / Inlays [IC id = 96] -> b'1100 000 256Bit
	//Tag-it HF-I Pro Chip / Inlays      [IC id = 98] -> b'1100 010 256Bit, Password protection
	{ 0x07, 0x00, 0xF0, "Tag-it HF-I Plus Inlay; 64x32bit" },
	{ 0x07, 0x10, 0xF0, "Tag-it HF-I Plus Chip; 64x32bit" },
	{ 0x07, 0x80, 0xFE, "Tag-it HF-I Plus (RF-HDT-DVBB tag or Third Party Products)" },
	{ 0x07, 0xC0, 0xFE, "Tag-it HF-I Standard; 8x32bit" },
	{ 0x07, 0xC4, 0xFE, "Tag-it HF-I Pro; 8x23bit; password" },


	// 0x16 = EM Microelectronic-Marin SA Switzerland (Skidata)
	{ 0x16, 0x04, 0xFF, "EM4034 [IC id = 01] (Read/Write - no AFI)"},
	{ 0x16, 0x0C, 0xFF, "EM4035 [IC id = 03] (Read/Write - replaced by 4233)"},
	{ 0x16, 0x10, 0xFF, "EM4135 [IC id = 04] (Read/Write - replaced by 4233) 36x64bit start page 13"},
	{ 0x16, 0x14, 0xFF, "EM4036 [IC id = 05] 28pF"},
	{ 0x16, 0x18, 0xFF, "EM4006 [IC id = 06] (Read Only)"},
	{ 0x16, 0x1C, 0xFF, "EM4133 [IC id = 07] 23,5pF (Read/Write)"},
	{ 0x16, 0x20, 0xFF, "EM4033 [IC id = 08] 23,5pF (Read Only - no AFI / no DSFID / no security blocks)"},
	{ 0x16, 0x24, 0xFF, "EM4233 [IC id = 09] 23,5pF CustomerID-102"},
	{ 0x16, 0x28, 0xFF, "EM4233 SLIC [IC id = 10] 23,5pF (1Kb flash memory - not provide High Security mode and QuietStorage feature)" },
	{ 0x16, 0x3C, 0xFF, "EM4237 [IC id = 15] 23,5pF"},
	{ 0x16, 0x7C, 0xFF, "EM4233 [IC id = 31] 95pF"},
	{ 0x16, 0x94, 0xFF, "EM4036 [IC id = 37] 95pF  51x64bit "},
	{ 0x16, 0x9c, 0xFF, "EM4133 [IC id = 39] 95pF (Read/Write)" },
	{ 0x16, 0xA8, 0xFF, "EM4233 SLIC [IC id = 42] 97pF" },
	{ 0x16, 0xBC, 0xFF, "EM4237 [IC id = 47] 97pF" },

	{ 0x00, 0x00, 0x00, "no tag-info available" } // must be the last entry
};


// get a product description based on the UID
//      uid[8]  tag uid
// returns description of the best match
char *getChipInfo(uint8_t vendorID, uint8_t chipID) {
	int i = 0;
	int best = -1;
	while (chipIDmapping[i].mask > 0) {
		if (vendorID == chipIDmapping[i].manufacturer
		    && (chipID & chipIDmapping[i].mask) == chipIDmapping[i].chipID) {
			if (best == -1) {
				best = i;
			} else {
				if (chipIDmapping[i].mask > chipIDmapping[best].mask) {
					best = i;
				}
			}
		}
		i++;
	}

	if (best >= 0) return chipIDmapping[best].desc;

	return chipIDmapping[i].desc;
}
