#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include "PriorityType.h"

PriorityType::PriorityType() {};

PriorityType::PriorityType(int a) { this->val = static_cast<PriorityTypeValues>(a); };

inline string PriorityType::getStrVal() { return this->strVal; };