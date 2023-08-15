#pragma once
#ifndef BUGI_H
#define BUGI_H
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

using namespace std;



class BugI : virtual public WorkItemI, virtual public AssignableI{

public:
    virtual list<WorkItemI*> getWorkItems() = 0;
    virtual string getName() = 0;
    virtual void setName(string name) = 0;
    virtual void addWorkItem(WorkItemI* workItem) = 0;
    virtual void removeWorkItem(string workItemsTitle) = 0;
    virtual void removeWorkItem(int id) = 0 ;
    virtual WorkItemI* findWorkItem(string name) = 0;
    virtual WorkItemI* findWorkItem(int id) = 0;
    virtual string toString() = 0;
    virtual string viewInfo() = 0;
};
#endif
