#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) : radius(r) { }
    double area() {
        return radius*radius*3.14159265;
    }
};

class Cylinder {
    Circle base;
    double height;
  public:
    Cylinder(double r, double h) : base (r), height(h) {}
    double volume() {
        return base.area() * height;
    }
};

int main () {
  Cylinder foo (10,20);

  cout << "foo's volume: " << foo.volume() << '\n';
  return 0;
}
// // Output:
// // foo's volume: 6283.19
// // The program demonstrates the use of a constructor to initialize the radius and height of a cylinder object.
// // The volume of the cylinder is calculated using the volume() member function, which returns the product of the base area and height.
// // The program uses an initializer list to initialize the base circle object and the height of the cylinder.
// // The area() member function of the Circle class is used to calculate the base area of the cylinder.