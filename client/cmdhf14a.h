//-----------------------------------------------------------------------------
// 2011, Merlok
// Copyright (C) 2010 iZsh <izsh at fail0verflow.com>
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// High frequency ISO14443A commands
//-----------------------------------------------------------------------------

#ifndef CMDHF14A_H__
#define CMDHF14A_H__

#include <stdint.h>
#include <stdbool.h>
#include "mifare.h"

extern int CmdHF14A(const char *Cmd);
extern int CmdHF14AMfDbg(const char* cmd);
extern int CmdHF14AList(const char *Cmd);
extern int CmdHF14AMifare(const char *Cmd);
extern int CmdHF14AReader(const char *Cmd);
extern int CmdHF14AInfo(const char *Cmd);
extern int CmdHF14ASim(const char *Cmd);
extern int CmdHF14ASnoop(const char *Cmd);

extern void DropField();

extern int Hf14443_4aGetCardData(iso14a_card_select_t * card);
extern int ExchangeRAW14a(uint8_t *datain, int datainlen, bool activateField, bool leaveSignalON, uint8_t *dataout, int maxdataoutlen, int *dataoutlen);
extern int ExchangeAPDU14a(uint8_t *datain, int datainlen, bool activateField, bool leaveSignalON, uint8_t *dataout, int maxdataoutlen, int *dataoutlen);

#endif
