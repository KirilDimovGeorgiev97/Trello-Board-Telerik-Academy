#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include "Size.h"


Size::Size() {};

Size::Size(int a) { this->val = static_cast<SizeValues>(a); };

inline string Size::getStrVal() { return this->strVal; };