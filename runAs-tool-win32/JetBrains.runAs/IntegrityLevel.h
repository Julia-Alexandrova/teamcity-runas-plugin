#pragma once

#pragma once
#include <string>
#include <list>

typedef wstring IntegrityLevel;
#define INTEGRITY_LEVEL_AUTO			TEXT("auto")
#define INTEGRITY_LEVEL_UNTRUSTED		TEXT("untrusted")
#define INTEGRITY_LEVEL_LOW				TEXT("low")
#define INTEGRITY_LEVEL_MEDIUM			TEXT("medium")
#define INTEGRITY_LEVEL_MEDIUM_PLUS		TEXT("medium_plus")
#define INTEGRITY_LEVEL_HIGH			TEXT("high")

const list<IntegrityLevel> IntegrityLevels = { INTEGRITY_LEVEL_AUTO, INTEGRITY_LEVEL_UNTRUSTED, INTEGRITY_LEVEL_LOW, INTEGRITY_LEVEL_MEDIUM, INTEGRITY_LEVEL_MEDIUM_PLUS, INTEGRITY_LEVEL_HIGH };