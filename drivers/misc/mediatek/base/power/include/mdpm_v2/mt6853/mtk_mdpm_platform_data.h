// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2019 MediaTek Inc.
 */


#ifndef _MTK_MDPM_PLATFORM_DATA_H_
#define _MTK_MDPM_PLATFORM_DATA_H_

static struct scenario_power_type_t md_scen_power[SCENARIO_NUM] = {
	[S_STANDBY]		= {    1,    1},
	[S_2G_IDLE]		= {    1,    1},
	[S_2G_NON_IDLE]		= {   72,   72},
	[S_C2K_DATALINK]	= {   98,   98},
	[S_C2K_SHDR]		= {   50,   50},
	[S_C2K_1X_TRAFFIC]	= {   91,   91},
	[S_3G_TDD_PAGING]	= {    7,    7},
	[S_3G_TDD_TALKING]	= {   94,   94},
	[S_3G_TDD_DATALINK]	= {   90,   90},
	[S_3G_IDLE]		= {    7,    7},
	[S_3G_WCDMA_TALKING]	= {   88,   88},
	[S_3G_1C]		= {  138,  138},
	[S_3G_2C]		= {  156,  156},
	[S_4G_0D0U]		= {    6,    6},
	[S_4G_1CC]		= {  159,  159},
	[S_4G_2CC]		= {  227,  227},
	[S_4G_3CC]		= {  567,  567},
	[S_4G_4CC]		= {  529,  529},
	[S_4G_5CC]		= {  574,  574},
	[S_5G_1CC_2CC]		= {  567,  567},
	[S_5G_1CC_2CC_4G_4CC]	= {  1053,  1053},
	[S_5G_1CC_2CC_4G_1CC]	= {  839,  839},
	[S_4G_POS_URGENT]	= {  556,  556}
};

static struct rfhw_power_t rfhw0[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.pa_power = {
			{  680,  420,  340,  268,  212,  172,
			   144,  120,  100,   86,   73,   60},   /*MAX*/
			{  680,  420,  340,  268,  212,  172,
			   144,  120,  100,   86,   73,   60} }, /*AVG*/
		.rf_power = {
			{  117,  117,  117,  117,  117,  117,
			   117,  117,  117,  117,  117,  117},   /*MAX*/
			{  117,  117,  117,  117,  117,  117,
			   117,  117,  117,  117,  117,  117} }, /*AVG*/
		.section = {
			31, 29, 27, 25, 23, 21, 19, 17, 15, 13,  9,  0}
	},

	[TX_3G_DBM] = {
		.pa_power = {
			{ 3112, 2680, 1670, 1472,  1072,  956,
			   767,  628,  418,  308,  186,  99},   /*MAX*/
			{ 3112, 2680, 1670, 1472,  1072,  956,
			   767,  628,  418,  308,  186,  99} }, /*AVG*/
		.rf_power = {
			{  346,  333,  286,  284,  272,  270,
			   230,  226,  260,  220,  194,  176},   /*MAX*/
			{  346,  333,  286,  284,  272,  270,
			   230,  226,  260,  220,  194,  176} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 16, 15, 12,  9,  3,  0}
	},

	[TX_3GTDD_DBM] = {
		.pa_power = {
			{ 3112, 2680, 1670, 1472,  1072,  956,
			   767,  628,  418,  308,  186,  99},   /*MAX*/
			{ 3112, 2680, 1670, 1472,  1072,  956,
			   767,  628,  418,  308,  186,  99} }, /*AVG*/
		.rf_power = {
			{  346,  333,  286,  284,  272,  270,
			   230,  226,  260,  220,  194,  176},   /*MAX*/
			{  346,  333,  286,  284,  272,  270,
			   230,  226,  260,  220,  194,  176} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 16, 15, 12,  9,  3,  0}
	},

	[TX_4G_CC0_DBM] = {
		.pa_power = {
			{ 1981, 1893, 1689, 1514, 906,  819,
			   745,  564,  396,  281,  214,  140},   /*MAX*/
			{ 1981, 1893, 1689, 1514, 906,  819,
			   745,  564,  396,  281,  214,  140} }, /*AVG*/
		.rf_power = {
			{  382,  379,  364,  364,  347,  346,
			   345,  346,  309,  311,  272,  269},   /*MAX*/
			{  382,  379,  364,  364,  347,  346,
			   345,  346,  309,  311,  272,  269} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 17, 15, 13,  10,  2,  0}
	},

	[TX_4G_CC1_DBM] = {
		.pa_power = {
			{ 1981, 1893, 1689, 1514, 906,  819,
			   745,  564,  396,  281,  214,  140},   /*MAX*/
			{ 1981, 1893, 1689, 1514, 906,  819,
			   745,  564,  396,  281,  214,  140} }, /*AVG*/
		.rf_power = {
			{  382,  379,  364,  364,  347,  346,
			   345,  346,  309,  311,  272,  269},   /*MAX*/
			{  382,  379,  364,  364,  347,  346,
			   345,  346,  309,  311,  272,  269} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 17, 15, 13,  10,  2,  0}
	},

	[TX_C2K_DBM] = {
		.pa_power = {
			{ 2661, 2339, 2098, 1841, 1408, 1229,
			  1045,  893,  651,  403,  250,  152},   /*MAX*/
			{ 2661, 2339, 2098, 1841, 1408, 1229,
			  1045,  893,  651,  403,  250,  152} }, /*AVG*/
		.rf_power = {
			{  250,  247,  240,  236,  223,  221,
			   215,  197,  194,  182,  151,  143},   /*MAX*/
			{  250,  247,  240,  236,  223,  221,
			   215,  197,  194,  182,  151,  143} }, /*AVG*/
		.section = {
			24, 23, 22, 21, 20, 19, 18, 16, 13, 8,  3,  0}
	},

	[TX_NR_CC0_DBM] = {
		.pa_power = {
			{ 4160, 4160, 4160, 4160, 1920, 1886,
			  1856,  994,  784,  450,  286,  174},   /*MAX*/
			{ 4160, 4160, 4160, 4160, 1920, 1886,
			  1856,  994,  784,  450,  286,  174} }, /*AVG*/
		.rf_power = {
			{  304,  304,  304,  304,  296,  295,
			   293,  289,  283,  302,  295,  305},   /*MAX*/
			{  304,  304,  304,  304,  296,  295,
			   293,  289,  283,  302,  295,  305} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 17, 14,  11,  7,  2,  0}
	},

	[TX_NR_CC1_DBM] = {
		.pa_power = {
			{ 4160, 4160, 4160, 4160, 1920, 1886,
			  1856,  994,  784,  450,  286,  174},   /*MAX*/
			{ 4160, 4160, 4160, 4160, 1920, 1886,
			  1856,  994,  784,  450,  286,  174} }, /*AVG*/
		.rf_power = {
			{  304,  304,  304,  304,  296,  295,
			   293,  289,  283,  302,  295,  305},   /*MAX*/
			{  304,  304,  304,  304,  296,  295,
			   293,  289,  283,  302,  295,  305} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 17, 14,  11,  7,  2,  0}
	}
};

static struct rfhw_power_t rfhw1[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.pa_power = {
			{  680,  420,  340,  268,  212,  172,
			   144,  120,  100,   86,   73,   60},   /*MAX*/
			{  680,  420,  340,  268,  212,  172,
			   144,  120,  100,   86,   73,   60} }, /*AVG*/
		.rf_power = {
			{  117,  117,  117,  117,  117,  117,
			   117,  117,  117,  117,  117,  117},   /*MAX*/
			{  117,  117,  117,  117,  117,  117,
			   117,  117,  117,  117,  117,  117} }, /*AVG*/
		.section = {
			31, 29, 27, 25, 23, 21, 19, 17, 15, 13,  9,  0}
	},

	[TX_3G_DBM] = {
		.pa_power = {
			{ 3112, 2680, 1670, 1472,  1072,  956,
			   767,  628,  418,  308,  186,  99},   /*MAX*/
			{ 3112, 2680, 1670, 1472,  1072,  956,
			   767,  628,  418,  308,  186,  99} }, /*AVG*/
		.rf_power = {
			{  346,  333,  286,  284,  272,  270,
			   230,  226,  260,  220,  194,  176},   /*MAX*/
			{  346,  333,  286,  284,  272,  270,
			   230,  226,  260,  220,  194,  176} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 16, 15, 12,  9,  3,  0}
	},

	[TX_3GTDD_DBM] = {
		.pa_power = {
			{ 3112, 2680, 1670, 1472,  1072,  956,
			   767,  628,  418,  308,  186,  99},   /*MAX*/
			{ 3112, 2680, 1670, 1472,  1072,  956,
			   767,  628,  418,  308,  186,  99} }, /*AVG*/
		.rf_power = {
			{  346,  333,  286,  284,  272,  270,
			   230,  226,  260,  220,  194,  176},   /*MAX*/
			{  346,  333,  286,  284,  272,  270,
			   230,  226,  260,  220,  194,  176} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 16, 15, 12,  9,  3,  0}
	},

	[TX_4G_CC0_DBM] = {
		.pa_power = {
			{ 1981, 1893, 1689, 1514, 906,  819,
			   745,  564,  396,  281,  214,  140},   /*MAX*/
			{ 1981, 1893, 1689, 1514, 906,  819,
			   745,  564,  396,  281,  214,  140} }, /*AVG*/
		.rf_power = {
			{  382,  379,  364,  364,  347,  346,
			   345,  346,  309,  311,  272,  269},   /*MAX*/
			{  382,  379,  364,  364,  347,  346,
			   345,  346,  309,  311,  272,  269} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 17, 15, 13,  10,  2,  0}
	},

	[TX_4G_CC1_DBM] = {
		.pa_power = {
			{ 1981, 1893, 1689, 1514, 906,  819,
			   745,  564,  396,  281,  214,  140},   /*MAX*/
			{ 1981, 1893, 1689, 1514, 906,  819,
			   745,  564,  396,  281,  214,  140} }, /*AVG*/
		.rf_power = {
			{  382,  379,  364,  364,  347,  346,
			   345,  346,  309,  311,  272,  269},   /*MAX*/
			{  382,  379,  364,  364,  347,  346,
			   345,  346,  309,  311,  272,  269} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 17, 15, 13,  10,  2,  0}
	},

	[TX_C2K_DBM] = {
		.pa_power = {
			{ 2661, 2339, 2098, 1841, 1408, 1229,
			  1045,  893,  651,  403,  250,  152},   /*MAX*/
			{ 2661, 2339, 2098, 1841, 1408, 1229,
			  1045,  893,  651,  403,  250,  152} }, /*AVG*/
		.rf_power = {
			{  250,  247,  240,  236,  223,  221,
			   215,  197,  194,  182,  151,  143},   /*MAX*/
			{  250,  247,  240,  236,  223,  221,
			   215,  197,  194,  182,  151,  143} }, /*AVG*/
		.section = {
			24, 23, 22, 21, 20, 19, 18, 16, 13, 8,  3,  0}
	},

	[TX_NR_CC0_DBM] = {
		.pa_power = {
			{ 4160, 4160, 4160, 4160, 1920, 1886,
			  1856,  994,  784,  450,  286,  174},   /*MAX*/
			{ 4160, 4160, 4160, 4160, 1920, 1886,
			  1856,  994,  784,  450,  286,  174} }, /*AVG*/
		.rf_power = {
			{  304,  304,  304,  304,  296,  295,
			   293,  289,  283,  302,  295,  305},   /*MAX*/
			{  304,  304,  304,  304,  296,  295,
			   293,  289,  283,  302,  295,  305} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 17, 14,  11,  7,  2,  0}
	},

	[TX_NR_CC1_DBM] = {
		.pa_power = {
			{ 4160, 4160, 4160, 4160, 1920, 1886,
			  1856,  994,  784,  450,  286,  174},   /*MAX*/
			{ 4160, 4160, 4160, 4160, 1920, 1886,
			  1856,  994,  784,  450,  286,  174} }, /*AVG*/
		.rf_power = {
			{  304,  304,  304,  304,  296,  295,
			   293,  289,  283,  302,  295,  305},   /*MAX*/
			{  304,  304,  304,  304,  296,  295,
			   293,  289,  283,  302,  295,  305} }, /*AVG*/
		.section = {
			23, 22, 21, 20, 19, 18, 17, 14,  11,  7,  2,  0}
	}

};

#endif /* _MTK_MDPM_PLATFORM_DATA_H_ */
