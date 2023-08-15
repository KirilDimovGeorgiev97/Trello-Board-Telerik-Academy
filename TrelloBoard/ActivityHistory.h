#pragma once
#ifndef ACTIVITYHISTORYI_H
#define ACTIVITYHISTORYI_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <ctime>

using namespace std;

class ActivityHistoryI {

public:
    virtual string getDescription() = 0;
    virtual time_t getMoment() = 0;
};
#endif
