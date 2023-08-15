#pragma once

#ifndef SEVERITY_H
#define SEVERITY_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>

using namespace std;

class Severity;

class Severity {

public:
    enum class SeverityValues {
        CRITICAL = 3,
        MAJOR = 2,
        MINOR = 1
    };

private:
    SeverityValues val;
    string strVal;

public:
    Severity();
    Severity(int val);

public:
    inline string getStrVal();
}; 
#endif

