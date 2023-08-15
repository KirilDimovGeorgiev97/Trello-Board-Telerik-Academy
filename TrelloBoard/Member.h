#pragma once
#ifndef MEMBERI_H
#define MEMBERI_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <ctime>
#include <Size.h>

using namespace std;

class WorkItemI;
class AssignableI;
class ActivityHistoryI;

class MemberI {

public:
    virtual string getName() = 0;
    virtual void setName(string name) = 0;
    virtual list<WorkItemI*> getCreatedWorkItems() = 0;
    virtual list<AssignableI*> getAssignedWorkItems() = 0;
    virtual list<ActivityHistoryI*> getActivityHistory() = 0;
    virtual void addCreatedItem(WorkItemI* item) = 0;
    virtual void addAssignedItem(AssignableI* item) = 0;
    virtual void removeCreatedItem(WorkItemI* item) = 0;
    virtual void removeAssignedItem(AssignableI* item) = 0;
    virtual WorkItemI* findCreatedWorkItem(int id) = 0;
    virtual AssignableI* findAssignedWorkItem(int id) = 0;
    virtual string viewInfo() = 0;
    //virtual string toString() = 0;
};
#endif
