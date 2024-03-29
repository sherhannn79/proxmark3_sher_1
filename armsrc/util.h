//-----------------------------------------------------------------------------
// Jonathan Westhues, Aug 2005
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Utility functions used in many places, not specific to any piece of code.
//-----------------------------------------------------------------------------

#ifndef __UTIL_H
#define __UTIL_H

#include <stddef.h>
#include <stdint.h>
#include "common.h"

#define BYTEx(x, n) (((x) >> (n * 8)) & 0xff )

#define LED_RED    1
#define LED_ORANGE 2
#define LED_GREEN  4
#define LED_RED2   8

#define BUTTON_HOLD           1
#define BUTTON_NO_CLICK       0
#define BUTTON_SINGLE_CLICK  -1
#define BUTTON_DOUBLE_CLICK  -2
#define BUTTON_ERROR        -99

#define REV8(x)  ((((x)>>7)&1)|((((x)>>6)&1)<<1)|((((x)>>5)&1)<<2)|((((x)>>4)&1)<<3)|((((x)>>3)&1)<<4)|((((x)>>2)&1)<<5)|((((x)>>1)&1)<<6)|(((x)&1)<<7))
#define REV16(x) (REV8(x)  | (REV8 (x >> 8) << 8))
#define REV32(x) (REV16(x) | (REV16(x >> 16) << 16))
#define REV64(x) (REV32(x) | (REV32(x >> 32) << 32))

void print_result(char *name, uint8_t *buf, size_t len);
size_t nbytes(size_t nbits);
uint32_t SwapBits(uint32_t value, int nrbits);
void num_to_bytes(uint64_t n, size_t len, uint8_t* dest);
uint64_t bytes_to_num(uint8_t* src, size_t len);
void rol(uint8_t *data, const size_t len);
void lsl (uint8_t *data, size_t len);

void LED(int led, int ms);
void LEDsoff();
void LEDson();
void LEDsinvert();
int BUTTON_CLICKED(int ms);
int BUTTON_HELD(int ms);
void FormatVersionInformation(char *dst, int len, const char *prefix, void *version_information);

//iceman's ticks.h
#ifndef GET_TICKS
# define GET_TICKS GetTicks()
#endif

void SpinDelay(int ms);
void SpinDelayUs(int us);

void StartTickCount();
uint32_t RAMFUNC GetTickCount();

void StartCountUS();
uint32_t RAMFUNC GetCountUS();
uint32_t RAMFUNC GetDeltaCountUS();

void StartCountSspClk();
void ResetSspClk(void);
uint32_t RAMFUNC GetCountSspClk();

extern void StartTicks(void);
extern uint32_t GetTicks(void);
extern void WaitTicks(uint32_t ticks);
extern void WaitUS(uint16_t us);
extern void WaitMS(uint16_t ms);
extern void ResetTicks();
extern void ResetTimer(AT91PS_TC timer);
extern void StopTicks(void);
// end iceman's ticks.h

uint32_t prand();
bool data_available(void);

#endif
