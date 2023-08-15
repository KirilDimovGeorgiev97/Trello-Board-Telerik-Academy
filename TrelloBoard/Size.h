#pragma once

#ifndef SIZE_H
#define SIZE_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>

using namespace std;

class Size;

class Size {

public:
    enum class SizeValues {
        LARGE = 3,
        MEDIUM = 2,
        SMALL = 1
    };

private:
    SizeValues val;
    string strVal;

public:
    Size();
    Size(int val);

public:
    inline string getStrVal();
};
#endif
