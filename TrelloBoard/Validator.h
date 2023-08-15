#pragma once


#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <Status.h>
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>

using namespace std;

class Validator {


private:
    Validator();
    static Validator* inst_;
    void checkStringLength(string s, int min, int max, string message);

public:
    static Validator* getInstance();
    //template <class T> void checkIfNull(T obj, string message);
    void validateString(string s, int min, int max, string message);
    void validateDecimalArguments(double value, string message);
    //void validateStatus(string className, Status status) {
    //    if (!(className.replace("Impl", "")
    //        .equals(status.getClass().getSimpleName().replace("Status", "")))) {
    //        throw new InvalidInputException("Wrong status is entered");
    //    }
    //}


};

void Validator::checkStringLength(string s, int min, int max, string message) {
    if (s.length() < min || s.length() > max)
        throw std::invalid_argument(message);
}

Validator* Validator::inst_ = NULL;

Validator* Validator::getInstance() {
    if (inst_ == NULL) {
        inst_ = new Validator();
    }
    return inst_;
};

//template <class T> void Validator::checkIfNull(T obj, string message)
//{
//    if (obj == NULL || obj == nullptr) {
//        throw std::invalid_argument(message);
//    }
//}

//void Validator::validateString(string s, int min, int max, string message) {
//    checkIfNull(s, message);
//    checkStringLength(s, min, max, message);
//}


void Validator::validateDecimalArguments(double value, string message) {
    if (value < 0) {
        throw std::invalid_argument(message);
    }
}

#endif
