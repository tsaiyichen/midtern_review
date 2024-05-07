#include <iostream>

using namespace std;

void flush();

int main() {
    //while loop
    int num = 0;
    int total = 0;
    while (num <= 100) {
        total += num;
        num++;
    }
    cout << "using while loop: " << total << endl;

    //for loop
    total = 0;
    for (int i = 0; i <= 100; i++) {
        total += i;
    }
    cout << "using for loop: " << total << endl;

    //do while loop

    num = 0;
    total = 0;
    do {
        total += num;
        num++;
    } while (num <= 100);

    cout << "using do while loop: " << total << endl;

    int count;
    cout << "Enter the end of the loop: ";
    cin >> count;
    cout << count << endl;
    flush();
    total = 0;
    for (int i = count; i >= 0; i--) {
        total += i;
    }
    cout << "answer: " << total << endl;

}

void flush() {
    while (cin.get() != '\n') {
        continue;
    }
}
