/* Copyright (c) 2014, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_JDI_R63419_WQHD_DUALDSI_CMD_H_

#define _PANEL_JDI_R63419_WQHD_DUALDSI_CMD_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config jdi_r63419_wqhd_cmd_panel_data = {
	"qcom,mdss_dsi_jdi_r63419_wqhd_dualmipi0_cmd", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 1, "DISPLAY_1", 0, 0, 60, 0, 0, 1, 0, 0, 0, 0, 0, 11, 0, 0,
	"qcom,mdss_dsi_jdi_r63419_wqhd_dualmipi1_cmd"
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution jdi_r63419_wqhd_cmd_panel_res = {
	2560, 1440, 120, 44, 16, 0, 8, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info jdi_r63419_wqhd_cmd_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/

static char jdi_r63419_wqhd_cmd_on_cmd0[] = {
	0xb0, 0x00, 0x23, 0x80 
};

static char jdi_r63419_wqhd_cmd_on_cmd1[] = {
	0xd6, 0x01, 0x23, 0x80
};

static char jdi_r63419_wqhd_cmd_on_cmd2[] = {
	0x51, 0xff, 0x39, 0x80
};

static char jdi_r63419_wqhd_cmd_on_cmd3[] = {
	0x53, 0x0c, 0x39, 0x80
};

static char jdi_r63419_wqhd_cmd_on_cmd3_1[] = {
	0x55, 0x03, 0x39, 0x80
};

static char jdi_r63419_wqhd_cmd_on_cmd4[] = {
	0x35, 0x00, 0x39, 0x80
};

static char jdi_r63419_wqhd_cmd_on_cmd5[] = {
	0x05, 0x00, 0x39, 0xc0,
	0x2a, 0x00, 0x00, 0x05,
	0x9f, 0xff, 0xff, 0xff
};

static char jdi_r63419_wqhd_cmd_on_cmd6[] = {
	0x29, 0x00, 0x39, 0x80
};

static char jdi_r63419_wqhd_cmd_on_cmd7[] = {
	0x11, 0x00, 0x39, 0x80
};

static struct mipi_dsi_cmd jdi_r63419_wqhd_cmd_on_command[] = {
	{ 0x4 , jdi_r63419_wqhd_cmd_on_cmd0},
	{ 0x4 , jdi_r63419_wqhd_cmd_on_cmd1},
	{ 0x4 , jdi_r63419_wqhd_cmd_on_cmd2},
	{ 0x4 , jdi_r63419_wqhd_cmd_on_cmd3},
	{ 0x4 , jdi_r63419_wqhd_cmd_on_cmd3_1},
	{ 0x4 , jdi_r63419_wqhd_cmd_on_cmd4},
	{ 0xc , jdi_r63419_wqhd_cmd_on_cmd5},
	{ 0x4 , jdi_r63419_wqhd_cmd_on_cmd6,20},
	{ 0x4 , jdi_r63419_wqhd_cmd_on_cmd7,120},
};
#define JDI_R63419_WQHD_CMD_ON_COMMAND (sizeof(jdi_r63419_wqhd_cmd_on_command)/ sizeof(jdi_r63419_wqhd_cmd_on_command[0]))


static char jdi_r63419_wqhd_cmdoff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char jdi_r63419_wqhd_cmdoff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd jdi_r63419_wqhd_cmd_off_command[] = {
{ 0x4 , jdi_r63419_wqhd_cmdoff_cmd0},
{ 0x4 , jdi_r63419_wqhd_cmdoff_cmd1}
};
#define R63419_WQHD_CMD_OFF_COMMAND 2


static struct command_state jdi_r63419_wqhd_cmd_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info jdi_r63419_wqhd_cmd_command_panel = {
	1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info jdi_r63419_wqhd_cmd_video_panel = {
	0, 0, 0, 0, 1, 1, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration jdi_r63419_wqhd_cmd_lane_config = {
  4, 0, 1, 1, 1, 1
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t jdi_r63419_wqhd_cmd_timings[] = {
	0xcd, 0x32, 0x22, 0x00, 0x60, 0x64, 0x26, 0x34, 0x29, 0x03, 0x04, 0x00
};

static struct panel_timing jdi_r63419_wqhd_cmd_timing_info = {
	0x0, 0x04, 0x03, 0x27
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence jdi_r63419_wqhd_dualdsi_cmd_reset_seq = {
	{1, 0, 1, }, {20, 200, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight jdi_r63419_wqhd_cmd_backlight = {
  1, 1, 255, 100, 1, "PMIC_8941"
};

#define JDI_R63419_CMD_SIGNATURE 0xF96D28C
#endif /*_PANEL_R63419_WQHD_CMD_H_*/