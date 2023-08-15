#pragma once

#ifndef STORYSTATUS_H
#define STORYSTATUS_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>

using namespace std;

class StoryStatus;

class StoryStatus {

private:
    enum class StoryStatusValues {
        LARGE = 3,
        MEDIUM = 2,
        SMALL = 1

    };

private:
    StoryStatusValues val;
    string strVal;

public:
    StoryStatus();
    StoryStatus(int val);

public:
    inline string getStrVal();
};
#endif
