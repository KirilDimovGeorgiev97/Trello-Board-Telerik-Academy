#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include "Severity.h"


Severity::Severity() {};

Severity::Severity(int a) { this->val = static_cast<SeverityValues>(a); };

inline string Severity::getStrVal() { return this->strVal; };