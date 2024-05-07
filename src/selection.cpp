#include "selection.h"

using namespace std;


int main() {
    menu();
    char ans;
    cin >> ans;
    flush();

    //if-else
    if (ans == 'a') {
        cout << "you choose apple." << endl;
    } else if (ans == 'b') {
        cout << "you choose banana." << endl;
    } else if (ans == 'c') {
        cout << "you choose cat." << endl;
    } else if (ans == 'd') {
        cout << "you choose dog." << endl;
    } else {
        cout << "wrong!" << endl;
    }

    //switch case
    switch (ans) {
        case 'a':
            cout << "you choose apple." << endl;
            break;
        case 'b':
            cout << "you choose banana." << endl;
            break;
        case 'c':
            cout << "you choose cat." << endl;
            break;
        case 'd':
            cout << "you choose dog." << endl;
            break;
        default:
            cout << "wrong!" << endl;
    }

    //?:
    string printout = (ans == 'a') ? "you choose apple." : (ans == 'b') ? "you choose banana." : (ans == 'c')
                                                                                                 ? "you choose cat."
                                                                                                 : (ans == 'd')
                                                                                                   ? "you choose dog."
                                                                                                   : "wrong";
    cout << printout << endl;
}

void menu() {
    cout << "choose: (a)apple, (b)banana, (c)cat, (d)dog: ";
}

void flush() {
    while (cin.get() != '\n') {
        continue;
    }
}