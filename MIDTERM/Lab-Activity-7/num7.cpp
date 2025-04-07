#include <iostream>
using namespace std;

class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

class Rectangle: public Shape {
   public:
      int getArea();
};

int Rectangle::getArea() { 
   return width * height;
}

int main(void) {
   Rectangle Rect;
   Rect.setWidth(5);
   Rect.setHeight(7);
   cout << "Total area: " << Rect.getArea() << endl;
   cin.get(); // Pause the program
   return 0;
}
// // Output:
// // Total area: 35
// // The program demonstrates the use of inheritance in C++.
// // The Rectangle class inherits from the Shape class, which contains the width and height attributes.
// // The Rectangle class has a member function getArea() that calculates the area of the rectangle using the inherited width and height.
// // The program creates a Rectangle object, sets its width and height, and then calculates and prints the area.