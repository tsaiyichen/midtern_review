#include <iostream>

using namespace std;

class A_base{
protected:
    string name;
public:
    A_base(string name);
    ~A_base();
    string getName();
};
A_base::A_base(std::string name) {
    cout << "calling A constructor." << endl;
    this->name = name;
}
A_base::~A_base(){
    cout << "calling A destructor." << endl;
}
string A_base::getName() {
    return name;
}
class B_derived: virtual protected A_base{ //virtual inheritance
protected:
    int B_data;
public:
    B_derived(string name, int data);
    ~B_derived();
    int getData();
    void show();
};
B_derived::B_derived(string name, int data): A_base(name) {
    cout << "calling B constructor." << endl;
    B_data = data;
}
B_derived::~B_derived(){
    cout << "calling B destructor." << endl;
}
int B_derived::getData(){
    return B_data;
}
void B_derived::show(){
    cout << "B: " << endl;
    cout << "name: " << name << endl;
    cout << "data: " << B_data << endl;
}

class C_derived: virtual protected A_base{ //virtual inheritance
protected:
    int C_data;
public:
    C_derived(string name, int data);
    ~C_derived();
    int getData();
    void show();
};
C_derived::C_derived(string name, int data): A_base(name) {
    cout << "calling C constructor." << endl;
    C_data = data;
}
C_derived::~C_derived(){
    cout << "calling C destructor." << endl;
}
int C_derived::getData(){
    return C_data;
}
void C_derived::show(){
    cout << "C: " << endl;
    cout << "name: " << name << endl;
    cout << "data: " << C_data << endl;
}

class D_derived: private B_derived, private C_derived{
private:
    int D_data;
public:
    D_derived(string, int ,int , int);
    ~D_derived();
    int getData();
    void show();
};
D_derived::D_derived(string name, int b, int c, int d): A_base(name), B_derived(name, b), C_derived(name, c) {
    cout << "calling D constructor." << endl;
    D_data = d;
}
D_derived::~D_derived(){
    cout << "calling D destructor." << endl;
}
int D_derived::getData(){
    return D_data;
}
void D_derived::show() {
    cout << "D: " << endl;
    cout << "name: " << name << endl;
    cout << "B data: " << B_data << endl;
    cout << "C data: " << C_data << endl;
    cout << "D data: " << D_data << endl;
}

int main(){
    A_base A("A Class");
    cout << "A: " << A.getName() << endl;
    B_derived B("B Class", 100);
    B.show();
    C_derived C("C Class", 200);
    C.show();
    D_derived D("D class", 10, 20, 30);
    D.show();
}