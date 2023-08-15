#pragma once
#ifndef BOARDI_H
#define BOARDI_H
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

using namespace std;

class BoardI {

public:
    virtual list<WorkItemI> getWorkItems() = 0;
    virtual string getName() = 0;
    virtual void setName(string name) = 0;
    virtual void addWorkItem(WorkItemI workItem) = 0;
    virtual void removeWorkItem(string workItemsTitle) = 0;
    virtual void removeWorkItem(int id) = 0;
    virtual WorkItemI findWorkItem(string name) = 0;
    virtual WorkItemI findWorkItem(int id) = 0;
    virtual string toString() = 0;
    virtual string viewInfo()= 0;
};
#endif
