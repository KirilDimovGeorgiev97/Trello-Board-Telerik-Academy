#pragma once

#ifndef BUGSTATUS_H
#define BUGSTATUS_H
#include <Status.h>
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>

using namespace std;

class BugStatus;

class BugStatus : virtual public StatusI {

private:
    enum class Values {
        ACTIVE,
        FIXED
    };

private:
    Values val;
    string strVal;

public:
    BugStatus();

public:
    virtual void getPrevious();
    virtual void getNext();
    string getStrVal();
};
#endif
