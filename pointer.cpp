#include <iostream>
using namespace std;

int sum(int* a, int* b);
void swap(int* a, int* b);

int main()
{
    int a = 1;
    int* ptrA = &a;

    cout << "a: " << a << endl;
    cout << "ptrA: " << ptrA << endl;
    cout << "use ptr to catch value: " << *ptrA << endl;

    int b = 2;
    int* ptrB = &b;
    int ans = sum(ptrB, ptrA);
    cout << "ans: " << ans << endl;

    int num1 = 100;
    int* ptr1 = &num1;
    int num2 = 200;
    int* ptr2 = &num2;
    printf("before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(ptr1, ptr2);
    printf("after swap: num1 = %d, num2 = %d\n", num1, num2);
    cout << "call by address can successfully swap two numbers";

}

int sum(int* a, int* b)
{
    return *a + *b;
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}