#pragma once

#ifndef ENUMTEMPLATE_H
#define ENUMTEMPLATE_H
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>


template <class T, typename V>
class EnumTemplate {
private:
    T val_T;
    V val_V;

public:
    EnumTemplate(T* A, V B)
    {
        this->val_T = *A;
        this->val_V = B;
    }

    EnumTemplate(const T& A, V B) {
        // Constructor implementation here
        this->val_T = A;
        this->val_V = B;
    }

public:
    inline T getT() { return this->val_T; }
    inline V getV() { return this->val_V; }
    void changeStatus(int val) { this->val_V = static_cast<V>(val); };
    template <typename Enumeration>
    auto as_integer(Enumeration const value)
        -> typename std::underlying_type<Enumeration>::type
    {
        return static_cast<typename std::underlying_type<Enumeration>::type>(value);
    }
};
#endif