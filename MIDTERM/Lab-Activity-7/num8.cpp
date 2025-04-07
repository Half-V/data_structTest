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

class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   area = Rect.getArea();
   cout << "Total area: " << Rect.getArea() << endl;
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;
   system("pause");
}
// // Output:
// // Total area: 35
// // Total paint cost: $2450
// // The program demonstrates multiple inheritance in C++.
// // The Rectangle class inherits from both the Shape class (which contains width and height attributes) and the PaintCost class (which calculates paint cost).
// // The getArea() member function calculates the area of the rectangle using the inherited width and height.
// // The program creates a Rectangle object, sets its width and height, calculates the area, and then calculates and prints the total paint cost based on the area.
// // The PaintCost class has a member function getCost() that calculates the cost based on the area and a fixed rate of $70 per unit area.
// // The program demonstrates the use of multiple inheritance to combine functionality from different classes.