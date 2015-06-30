#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#   include <windows.h>
#   include <wincrypt.h>
#else
#   include <CSP_WinDef.h>
#   include <CSP_WinCrypt.h>
#endif
#endif