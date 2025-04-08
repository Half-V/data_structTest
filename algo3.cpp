#include <iostream>
#include <stack>
using namespace std;

int main () {
    
    stack <long int> id;
    id.push (10245);
    id.push (20255);
    id.push (30356);
    id.push (12347);
    id.push (77878);
    id.push (10255);
    id.push (12032);
    id.push (11234);
    
    cout << "Size of Product ID: " << id.size() << endl;
    cout << "Contents of Product ID: " << endl;
    
    while (!id.empty()) {
        cout << id.top() << endl;
        id.pop();
    }
    
    cout << endl;
    
    
    return 0;
}
