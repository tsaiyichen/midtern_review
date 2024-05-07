#include <iostream>

using namespace std;

int sumInt(int a, int b = 0);

double sumDouble(double a, double b = 0);

template<typename T>
T templateSum(T a, T b = 0); // Template Function

void callByValueSwap(int a, int b);

int main() {
    int a = sumInt(5, 8);
    cout << "a: " << a << endl;
    int b = sumInt(7);
    cout << "b: " << b << endl;
    double d = sumDouble(2.3, 2.5);
    cout << "d: " << d << endl;
    double e = sumDouble(5.7);
    cout << "e: " << e << endl;

    int ts1 = templateSum(9, 10);
    cout << "ts1: " << ts1 << endl;
    double ts2 = templateSum(6.5, 8.8);
    cout << "ts2: " << ts2 << endl;
    int ts3 = templateSum(5);
    cout << "ts3: " << ts3 << endl;
    double ts4 = templateSum(2.6);
    cout << "ts4: " << ts4 << endl;

    int num1 = 5;
    int num2 = 8;

    //I want to use printf because it is shorter than cout

    printf("before swap Function (call by value), num1 = %d, num2 = %d.\n", num1, num2);

    callByValueSwap(num1, num2);

    printf("after swap Function (call by value), num1 = %d, num2 = %d.\n", num1, num2);

    cout << "Therefore, call by value cannot swap two numbers.";
}

int sumInt(int a, int b) {
    return a + b;
}

double sumDouble(double a, double b) {
    return a + b;
}

template<typename T>
T templateSum(T a, T b) {
    return a + b;
}

void callByValueSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
