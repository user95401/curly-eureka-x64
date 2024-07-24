#pragma once

#include <cocos2d.h>
#include <cocos-ext.h>
#include <patterns.hpp>

inline auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(0));
inline auto libcocos2d = reinterpret_cast<uintptr_t>(GetModuleHandleA("libcocos2d.dll"));

//hi
#define TodoReturn void
#define r_cast(type, call, value_types, values, addr) reinterpret_cast<type(call)value_types>(addr)values;
#define addrViaPattern(tar) \
auto addr = patterns::find_pattern(tar, ""); \
if (!addr) cocos2d::CCMessageBox("find_pattern failed", __FUNCTION__);

#define MBO(type, class, offset) *reinterpret_cast<type*>(reinterpret_cast<uintptr_t>(class) + offset) 

#include "seed_value.h"
#include "classes_predcl.h"

#include "types.h"
#include "objects.h"
#include "layers.h"