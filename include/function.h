#ifndef MIDTERM_REVIEW_FUNCTION_H
#define MIDTERM_REVIEW_FUNCTION_H

#include <iostream>
#include <functional>
#include <string_view>

int sumInt(int a, int b = 0);

double sumDouble(double a, double b = 0);

void callByValueSwap(int a, int b);

/**
 * @brief Adds two vars
 * @param b: Has default value:0
 * @return a + b in T
 * @note Type T must support operator+ or it will cause a compile error
 */
template<typename T>
T templateSum(T a, T b = 0);

template<typename T>
T templateSum(T a, T b) {
    return a + b;
}


#define CallAndPrint(prefix, f, ...) std::cout << prefix <<  f(__VA_ARGS__) << std::endl;

#endif //MIDTERM_REVIEW_FUNCTION_H
