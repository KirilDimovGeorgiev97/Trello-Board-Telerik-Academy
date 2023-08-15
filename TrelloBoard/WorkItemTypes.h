#pragma once

#ifndef WORKITEMTYPES_H
#define WORKITEMTYPES_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>

using namespace std;

class WorkItemTypes;

class WorkItemTypes {

private:
    enum class WorkItemTypesValues {
        BUG = 3,
        FEEDBACK = 2,
        STORY = 1
    };

private:
    WorkItemTypesValues val;
    string strVal;

public:
    WorkItemTypes();
    WorkItemTypes(int val);

public:
    inline string getStrVal();
};
#endif
