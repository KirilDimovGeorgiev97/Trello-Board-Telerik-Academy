#pragma once
#ifndef FEEDBACKI_H
#define FEEDBACKI_H
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

class FeedbackI : virtual public WorkItemI {

public:
    virtual int getRating() = 0;
    virtual void setRating(int rating) = 0;
};
#endif
