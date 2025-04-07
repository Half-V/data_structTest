#include <iostream>
#include <stdlib.h>
using namespace std;
char x[5];
char y;
int z;

int main() {
    cout<<"Enter a name: "; cin>>x;
    cout<<"You entered: "<<x<<endl;
    cout<<endl<<"Enter letter to search: "; cin>>y;
    
    for(z=0;z<5;z++) // Changed the condition to z<5 to correctly iterate through the array
        if (y==x[z])
            cout<<y<<" is located at "<<"array["<<z<<"]"<<endl;
}