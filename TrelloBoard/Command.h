#pragma once

#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>

class Command;

class Command {

public:
    virtual char* execute(std::list<char*> parameters) = 0;
};
#endif
