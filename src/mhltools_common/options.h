/*
 The MIT License (MIT)
 
 Copyright (c) 2016 Pomfort GmbH
 https://github.com/pomfort/mhl-tool
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#ifndef _MHL_TOOLS_MHLTOOLS_COMMON_OPTIONS_H_
#define _MHL_TOOLS_MHLTOOLS_COMMON_OPTIONS_H_

#include <mhltools_common/logging.h>

typedef enum _en_opts
{
  NULL_OPT = 0,
  OPT_E,
  OPT_F,
  OPT_V,
  OPT_VV,
  OPT_H,
  OPT_S,
  OPT_SEQ,
  OPT_T,
  OPT_O,
  OPT_MD5,
  OPT_SHA1,
  OPT_XXHASH,
  OPT_XXHASH64,
  OPT_XXHASH64BE,
  OPT_Y,
  OPT_HELP,
  OPT_VER,
  OPT_M,
  OPT_C,
  NOT_OPT,
  OPT_NL
} en_opts;

en_opts 
recognise_option(const char* option_nm);

#endif //_MHL_TOOLS_MHLTOOLS_COMMON_OPTIONS_H_
