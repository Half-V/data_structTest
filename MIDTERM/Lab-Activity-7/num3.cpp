#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    int area () {
        return (width*height);
    }
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rectA (3,4);
  Rectangle rectB;
  cout << "Area of Rectangle A: " << rectA.area() << endl;
  cout << "Area of Rectangle B: " << rectB.area() << endl;
  system("pause");
}
// Output:
// Area of Rectangle A: 12
// Area of Rectangle B: 25
// The program demonstrates the use of a default constructor to initialize the width and height of a rectangle object.
// The area of each rectangle is calculated using the area() member function, which returns the product of width and height.
// The default constructor initializes the width and height to 5, while the parameterized constructor initializes them to the values passed as arguments.