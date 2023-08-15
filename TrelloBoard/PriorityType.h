#pragma once

#ifndef PRIORITY_H
#define PRIORITY_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>

using namespace std;

class PriorityType;

class PriorityType {

public:
    enum class PriorityTypeValues {
    HIGH = 3,
    MEDIUM = 2,
    LOW = 1
};

private:
    PriorityTypeValues val;
    string strVal;

public:
    PriorityType();
    PriorityType(int a);

public:
    void changeStatus(int val);
    inline string getStrVal();
}; 
#endif

