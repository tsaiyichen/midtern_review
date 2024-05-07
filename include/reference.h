#ifndef MIDTERM_REVIEW_REFERENCE_H
#define MIDTERM_REVIEW_REFERENCE_H

#include <iostream>

template<typename T>
T sum(T a, T b);

void swap(int& a, int& b);

template<typename T>
T sum(T a, T b) {
    return a + b;
}

#endif //MIDTERM_REVIEW_REFERENCE_H
