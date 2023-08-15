#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include "StoryStatus.h"


StoryStatus::StoryStatus() {};

StoryStatus::StoryStatus(int a) { this->val = static_cast<StoryStatusValues>(a); };

inline string StoryStatus::getStrVal() { return this->strVal; };