#include <iostream>

using namespace std;

class Shape {
public:
    virtual double getArea() const;

};

double Shape::getArea() const {
    return 0;
}
class Rectangle : public Shape {

    double getArea() const;
};

double Rectangle::getArea() const {
    return 1;
}

class TestRectangle : public Rectangle {

    double getArea() const;
};

double TestRectangle::getArea() const{

    return 2;
}

int main() {
    Shape shape;
    Rectangle rec;
    TestRectangle test;
    Shape *t = &test;
   
    cout << t->getArea() << endl;

}