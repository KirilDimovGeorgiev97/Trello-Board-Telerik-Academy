#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include "WorkItemTypes.h"


WorkItemTypes::WorkItemTypes() {};

WorkItemTypes::WorkItemTypes(int a) { this->val = static_cast<WorkItemTypesValues>(a); };

inline string WorkItemTypes::getStrVal() { return this->strVal; };