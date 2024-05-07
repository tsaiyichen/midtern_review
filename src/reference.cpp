#include "reference.h"

using namespace std;

int main() {
    int a = 100;
    int& refA = a; //refA is another name of a
    cout << "a: " << a << endl;
    cout << "refA: " << refA << endl;
    int b = 200;
    int& refB = b;
    int value = sum(a, b);
    int refV = sum(refA, refB);
    cout << "use value: " << value << endl;
    cout << "use ref: " << refV << endl;

    int num1 = 100;
    int& ref1 = num1;
    int num2 = 200;
    int& ref2 = num2;
    printf("before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(ref1, ref2);
    printf("after swap: num1 = %d, num2 = %d\n", num1, num2);
    cout << "call by reference can successfully swap two numbers";
}


void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}