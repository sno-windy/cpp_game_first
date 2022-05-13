#pragma once

#include "DxLib.h"
#include "Error.h"

#define ERR(str) Error::finish(str, _T(__FUNCTION__), __LINE__)
