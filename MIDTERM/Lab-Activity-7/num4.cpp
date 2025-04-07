#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) { 
        radius = r; 
    }
    double circum() {
        return 2*radius*3.14159265;
    }
};

int main () {
  Circle foo (10.0);   // functional form
  Circle bar = 20.0;   // assignment init
  Circle baz (30.0);   
  Circle qux = (40.0); 

  cout << "foo's circumference: " << foo.circum() << endl;
  cout << "bar's circumference: " << bar.circum() << endl;
  cout << "baz's circumference: " << baz.circum() << endl;
  cout << "qux's circumference: " << qux.circum() << endl;
  system("pause");
}
// // Output:
// // foo's circumference: 62.8319
// // bar's circumference: 125.664
// // baz's circumference: 188.496
// // qux's circumference: 251.327
// // The program demonstrates the use of a constructor to initialize the radius of a circle object.
// // The circumference of each circle is calculated using the circum() member function, which returns the product of radius and 2π.
// // The program uses both functional form and assignment initialization to create circle objects.