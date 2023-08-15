#pragma once
#ifndef STORYI_H
#define STORYI_H
#include <Status.h>
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <ctime>
#include <WorkItem.h>
#include <Assignable.h>
#include <Size.h>

using namespace std;

class StoryI: virtual public WorkItemI, virtual public AssignableI {

public:
    virtual Size getSize() = 0;
    virtual PriorityType getPriorityType() = 0;
    virtual void setPriorityType(PriorityType priorityType) = 0;
    virtual void setSize(Size size) = 0;
};
#endif