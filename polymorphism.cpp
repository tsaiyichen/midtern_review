#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//abstract class
class Point{
protected:
    int x, y;
    string color;
    bool isFilled;
public:
    Point(int x, int y, string color, bool filled);
    ~Point();
    int getX();
    int getY();
    string getColor();
    bool getFilled();
    void setX(int x);
    void setY(int y);
    void setColor(string color);
    void setFilled(bool filled);

    //pure virtual functions: turn class to abstract and become late binding
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual void show() = 0;
};
Point::Point(int x = 0, int y = 0, string color = "none", bool filled = false){
    cout << "calling Point constructor." << endl;
    this->x = x;
    this->y = y;
    this->color = color;
    this->isFilled = filled;
}
Point::~Point(){
    cout << "calling Point destructor." << endl;
}
int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
string Point::getColor(){
    return color;
}
bool Point::getFilled() {
    return isFilled;
}
void Point::setX(int x){
    this->x = x;
}
void Point::setY(int y){
    this->y = y;
}
void Point::setColor(string color){
    this->color = color;
}
void Point::setFilled(bool filled) {
    isFilled = filled;
}
class Rectangle: public Point{
private:
    int width, length;
public:
    Rectangle(int w, int l, int x, int y, string color, bool isFilled);
    ~Rectangle();
    int getWidth();
    int getLength();
    void setWidth(int w);
    void setLength(int l);
    double getArea() override;
    double getPerimeter() override;
    void show() override;
};
Rectangle::Rectangle(int w = 1, int l = 1, int x = 0, int y = 0, std::string color = "none", bool isFilled = false)
            : Point(w, l, color, isFilled){
    cout << "calling rectangle constructor." << endl;
    width = w;
    length = l;
}
Rectangle::~Rectangle(){
    cout << "calling rectangle destructor." << endl;
}
int Rectangle::getWidth(){
    return width;
}
int Rectangle::getLength() {
    return length;
}
void Rectangle::setWidth(int w) {
    width = w;
}
void Rectangle::setLength(int l) {
    length = l;
}
double Rectangle::getArea() {
    return width * length;
}
double Rectangle::getPerimeter(){
    return 2 * (width + length);
}
void Rectangle::show(){
    cout << "Rectangle info: " << endl;
    cout << "left top coordinate: (" << x << ", " << y << ")" << endl;
    cout << "color: " << color << endl;
    cout << "isFilled: " << isFilled << endl;
    cout << "length: " << length << ", width: " << width << endl;
}
class Circle: public Point{
private:
    int radius;
public:
    Circle(int r, int x, int y, string color, bool f);
    ~Circle();
    int getRadius();
    void setRadius(int r);
    double getArea() override;
    double getPerimeter() override;
    void show() override;
};
Circle::Circle(int r = 1, int x = 0, int y = 0, std::string color = "red", bool f = false)
                : Point(x, y, color, f){

    cout << "calling Circle constructor." << endl;
    radius = r;
}
Circle::~Circle(){
    cout << "calling circle destructor." << endl;
}
int Circle::getRadius() {
    return radius;
}
void Circle::setRadius(int r){
    radius = r;
}
double Circle::getArea(){
    return radius * radius * M_PI;
}
double Circle::getPerimeter() {
    return 2 * radius * M_PI;
}
void Circle::show(){
    cout << "circle info: " << endl;
    cout << "center coordinate: (" << x << ", " << y << ")" << endl;
    cout << "radius: " << radius << endl;
    cout << "color: " << color << endl;
    cout << "isFilled: " << isFilled << endl;
}
void tryShow(Point &p){
    cout << "late binding." << endl;
    p.show();
    cout << fixed << setprecision(2);
    cout << "area: " << p.getArea() << endl;
    cout << "perimeter: " << p.getPerimeter() << endl;
    cout << "\n\n";
}

int main(){
    Rectangle r1(8, 10, 5, 5, "red", true);
    tryShow(r1);
    Circle c1(5, 1, 1, "blue", false);
    tryShow(c1);
}