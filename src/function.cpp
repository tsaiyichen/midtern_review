#include "function.h"

using namespace std;

int main() {
    CallAndPrint("a: ", sumInt, 5, 8);
    CallAndPrint("b: ", sumInt, 7);
    CallAndPrint("f:", sumDouble, 2.3, 2.5);
    CallAndPrint("e: ", sumDouble, 5.7);
    CallAndPrint("ts1: ", templateSum, 9, 10);
    CallAndPrint("ts2: ", templateSum, 6.5, 8.8);
    CallAndPrint("ts3: ", templateSum, 5);
    CallAndPrint("ts4: ", templateSum, 2.6);

    int num1 = 5;
    int num2 = 8;

    // I want to use printf because it is shorter than cout
    printf("before swap Function (call by value), num1 = %d, num2 = %d.\n", num1, num2);

    callByValueSwap(num1, num2);

    printf("after swap Function (call by value), num1 = %d, num2 = %d.\n", num1, num2);

    cout << "Thus, we can conclude that calling by values does not affect the original variables.";
    // In fact, it's because that by calling by values, we are actually creating new objects by deep copies
    // and do operations to the new ones.
}

int sumInt(const int a, const int b) {
    return a + b;
}

double sumDouble(const double a, const double b) {
    return a + b;
}

void callByValueSwap(int a, int b) {
    a ^= b;
    b ^= a;
    a ^= b;
}
