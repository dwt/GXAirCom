/*!
 * @file gxtools.h
 *
 *
 */

#ifndef __GXTOOLS_H__
#define __GXTOOLS_H__

#include <inttypes.h>
#include <Arduino.h>

bool timeOver(uint32_t tAct,uint32_t timestamp,uint32_t tTime);
uint32_t gettimeElapsed(uint32_t tAct,uint32_t timestamp);
int32_t scale(int32_t value,int32_t inLow, int32_t inHigh, int32_t outLow, int32_t outHigh);
int32_t getStringValue(String s,String begin,String end,int32_t fromIndex,String *sRet);
String urldecode(String str);
String urlencode(String str);
unsigned char h2int(char c);
String getWDir(float dir);
float kmh2mph(float f);
float deg2f(float f);
double dewPointFast(double celsius, double humidity);
#endif