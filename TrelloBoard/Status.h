#pragma once

#ifndef STATUSI_HPP
#define STATUSI_HPP

#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>

class StatusI {

public:
    virtual void getPrevious() = 0;
    virtual void getNext() = 0;
};
#endif