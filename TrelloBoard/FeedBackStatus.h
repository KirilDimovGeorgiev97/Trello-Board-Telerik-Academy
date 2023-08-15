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

class FeedBackStatus;

class FeedBackStatus : virtual public StatusI {

private:
    enum class Values {
        NEW,
        SCHEDULED,
        UNSCHEDULED,
        DONE
    };

private:
    Values val;
    string strVal;

public:
    FeedBackStatus();

public:
    virtual void getPrevious();
    virtual void getNext();
    inline string getStrVal();
};
#endif
