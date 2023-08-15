#pragma once
#ifndef WORKITEMI_H
#define WORKITEMI_H
#include <Status.h>
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <ctime>
#include <Member.h>
#include <ActivityHistory.h>
#include <map>

using namespace std;

class WorkItemI;

class WorkItemI {

public:
    virtual int getId() = 0;
    virtual string getTitle() = 0;
    virtual string getDescription() = 0;
    //virtual map<MemberI, list<string>> getComments() = 0;
    //virtual list<ActivityHistoryI> getActivityHistory() = 0;
    //virtual void addComment(MemberI author, string message) = 0;
    //virtual void removeComment(MemberI author, string message) = 0;
    virtual StatusI* getStatus() = 0;
    virtual time_t getDueDate() = 0;
    virtual void revertStatus() = 0;
    virtual void advanceStatus() = 0;
    virtual string toString() = 0;
};
#endif
