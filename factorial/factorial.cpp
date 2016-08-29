//
// Created by Omar Shaikh on 2/8/16.
//
//factorial.cpp
#include "factorial.h"

int factorial(int n) {
    int result = 1;
    for (int i = n; i > 0; i--) {
        result *= i;
    }
    return result;
}