#include <iostream>

using namespace std;

class Course{
private:
    string name;
    int size;
    string* students;
    int numOfStudents;
public:
    Course(string courseName, int size);
    Course(const Course &c);
    ~Course();
    void setCourseName(string);
    void insertStudent(string);
    void show();
};

Course::Course(string courseName = "", int size = 50){
    cout << "Course constructor is calling." << endl;
    this->name = courseName;
    this->size = size;
    numOfStudents = 0;
    students = new string[size];
}
Course::~Course(){
    cout << "Course destructor!" << endl;
}
Course::Course(const Course &c){
    cout << "Course constructor using another Course object." << endl;
    this->name = "";
    this->size = c.size;
    students = new string[size];
    numOfStudents = 0;
}
void Course::setCourseName(string name) {
    this->name = name;
}
void Course::insertStudent(string student){
    if(numOfStudents < this->size){
        students[numOfStudents] = student;
        numOfStudents++;
        cout << "insert success." << endl;
    }else{
        cout << "error" << endl;
        exit(1);
    }
}
void Course::show(){
    cout << "courseName: " << name << endl;
    cout << "courseSize: " << size << endl;
    cout << "num of student: " << numOfStudents << endl;
    cout << "studentList: " << endl;
    for(int i = 0; i < size; i++){
        cout << "#" << i << ": " << students[i] << endl;
    }
    cout << "\n\n" << endl;
}
int main(){
    Course c1("c++", 8);
    cout << "c1 info: " << endl;
    c1.show();
    Course c2(c1);
    cout << "c2 info: " << endl;
    c2.setCourseName("python");
    c2.show();
    Course c3("english", 4);
    c3.insertStudent("Andy");
    c3.insertStudent("Bill");
    c3.insertStudent("Cameron");
    c3.insertStudent("Danny");
    c3.show();
    c3.insertStudent("Emy");
}