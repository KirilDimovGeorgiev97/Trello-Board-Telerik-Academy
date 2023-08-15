#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include <Status.h>
#include "FeedBackStatus.h"

using namespace std;

class FeedBackStatus;

FeedBackStatus::FeedBackStatus() {
	this->val = FeedBackStatus::Values::NEW;
	this->strVal = "NEW";
};

void FeedBackStatus::getPrevious() {
	switch (this->val) {
	    case FeedBackStatus::Values::DONE:
			this->val = FeedBackStatus::Values::SCHEDULED;
			this->strVal = "SCHEDULED";
	    case FeedBackStatus::Values::SCHEDULED:
			this->val = FeedBackStatus::Values::UNSCHEDULED;
			this->strVal = "UNSCHEDULED";
	    case FeedBackStatus::Values::UNSCHEDULED:
			throw std::invalid_argument("You cannot revert status from Unscheduled to New.");
		case FeedBackStatus::Values::NEW:
			throw std::invalid_argument("Status is already New");
		default:
			throw std::invalid_argument("");
	}	
};

void FeedBackStatus::getNext() {
	switch (this->val) {
	    case FeedBackStatus::Values::NEW:
			this->val = FeedBackStatus::Values::UNSCHEDULED;
			this->strVal = "UNSCHEDULED";
		case FeedBackStatus::Values::UNSCHEDULED:
			this->val = FeedBackStatus::Values::SCHEDULED;
			this->strVal = "SCHEDULED";
		case FeedBackStatus::Values::SCHEDULED:
			this->val = FeedBackStatus::Values::DONE;
			this->strVal = "DONE";
		case FeedBackStatus::Values::DONE:
			throw std::invalid_argument("Status is already Done.");
		default:
			throw std::invalid_argument("");
	}
}

inline string FeedBackStatus::getStrVal() {return this->strVal;};
