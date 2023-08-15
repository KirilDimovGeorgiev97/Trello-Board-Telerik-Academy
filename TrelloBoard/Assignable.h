#pragma once
#ifndef ASSIGNABLEI_H
#define ASSIGNABLEI_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <ctime>
#include <WorkItem.h>
#include <PriorityType.h>

using namespace std;

class AssignableI : virtual public WorkItemI {

public:
   // virtual MemberI getAssignee() = 0;
   // virtual void setAssignee(MemberI member) = 0;
    virtual PriorityType getPriorityType() = 0;
    virtual void setPriorityType(PriorityType priorityType) = 0;
    virtual string toString() = 0;
};
#endif

