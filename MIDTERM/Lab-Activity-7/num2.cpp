#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int,int);
    int area () {return (width*height);}
};

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rectA (3,4);
  Rectangle rectB (5,6);
  
  cout << "Area of Rectangle A: " << rectA.area() << endl;
  cout << "Area of Rectangle B: " << rectB.area() << endl;
  system("pause");
}
// Output:
// Area of Rectangle A: 12
// Area of Rectangle B: 30
// The program demonstrates the use of a constructor to initialize the width and height of a rectangle object.
// The area of each rectangle is calculated using the area() member function, which returns the product of width and height.