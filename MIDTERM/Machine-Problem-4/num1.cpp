#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    char choice;
    int data;

    do {
        cout << "\n[A] Push Data\n[B] Pop Data\n[C] Show Top\n[D] Show Size\n[E] Quit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        choice = toupper(choice);

        switch(choice) {
            case 'A':
                cout << "Enter data to push: ";
                cin >> data;
                s.push(data);
                cout << data << " pushed to stack.\n";
                break;
            case 'B':
                if (!s.empty()) {
                    cout << s.top() << " popped from stack.\n";
                    s.pop();
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 'C':
                if (!s.empty()) {
                    cout << "Top element: " << s.top() << "\n";
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 'D':
                cout << "Stack size: " << s.size() << "\n";
                break;
            case 'E':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    } while (choice != 'E');

    return 0;
}
