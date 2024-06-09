#include <iostream>

using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    Person(string name, int age);
    ~Person();
    string getName();
    int getAge();
    void setName(string);
    void setAge(int);
    void show();
};
Person::Person(string name = "Andy", int age = 18){
    cout << "Person constructor." << endl;
    this->name = name;
    this->age = age;
}
Person::~Person(){
    cout << "calling Person destructor.";
}
string Person::getName(){
    return this->name;
}
int Person::getAge() {
    return this->age;
}
void Person::setName(string name){
    this->name = name;
}
void Person::setAge(int age){
    this->age = age;
}
void Person::show(){
    cout << "Person information: " << endl;
    cout << "person name: " << name << endl;
    cout << "person age: " << age << endl;
    cout << "\n" << endl;
}

class Student: public Person{
private:
    double GPA;
public:
    Student(string, int, double);
    ~Student();
    double getGPA();
    void setGPA(double);
    void show();
};
Student::Student(string name = "Andy", int age = 18, double GPA = 3.0): Person(name, age){
    cout << "Calling Student Constructor." << endl;
    this->GPA = GPA;
}
Student::~Student(){
    cout << "student destructor" << endl;
}
double Student::getGPA(){
    return this->GPA;
}
void Student::setGPA(double GPA){
    this->GPA = GPA;
}
void Student::show(){
    cout << "student information." << endl;
    cout << "student name: " << name << endl;
    cout << "student age: " << age << endl;
    cout << "student GPA: " << GPA << endl;
    cout << "\n\n";
}

void tryTwoShow(Person &p){
    cout << "early binding" << endl;
    p.show();
}


int main(){
    Person p1;
    p1.show();
    Student s1("Amy", 20, 4.0);
    s1.show();

    tryTwoShow(p1);
    tryTwoShow(s1);
}