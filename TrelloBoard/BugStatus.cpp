#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include <Status.h>
#include "BugStatus.h"

using namespace std;

class BugStatus;

BugStatus::BugStatus() {
	this->val = BugStatus::Values::ACTIVE;
	this->strVal = "ACTIVE";
};

void BugStatus::getPrevious() {
	switch (this->val) {
	   case BugStatus::Values::FIXED:
		   this->val = BugStatus::Values::ACTIVE;
		   this->strVal = "ACTIVE";
	}
};

void BugStatus::getNext() {
	switch (this->val) {
	case BugStatus::Values::ACTIVE:
		this->val = BugStatus::Values::FIXED;
		this->strVal = "FIXED";
	}
}

string BugStatus::getStrVal()
{
	return this->strVal;
};

