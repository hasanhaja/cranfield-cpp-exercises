#include <iostream>

using namespace std;

class Box {
    private:
    double length, width, height;

    public:
    Box();
    Box(double, double, double);
    double calVolume();
    double calArea();
    void display();
};

Box::Box() {
    // TODO implement
}

Box::Box(double length, double width, double height) {
    this->length = length;
    this->width = width;
    this->height = height;
}

double Box::calVolume() {
    return length*width*height;
}

double Box::calArea() {
    double a = length*width;
    double b = width*height;
    double c = length*height;

    return (2.0*(a+b+c));
}

void Box::display() {
    cout << "Length: " << length << ", Width: " << width << ", Height: " << height << ", Volume: " << this->calVolume() << ", Area: " << this->calArea() << endl;
}