#pragma once

#include "RE/Skyrim.h"
#include "SKSE/SKSE.h"

#include <json/json.h>

// With UNICODE defined, wingdi.h renames GetObject to GetObjectW, which breaks
// RE::*::GetObject() members. Undo the rename for the whole project.
#ifdef GetObject
#	undef GetObject
#endif

using namespace std::literals;
