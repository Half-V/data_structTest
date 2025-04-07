#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    char choice;
    int data;

    do {
        cout << "\n[A] Push Data\n[B] Pop Data\n[C] Show Front\n[D] Show Back\n[E] Show Size\n[F] Quit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        choice = toupper(choice);

        switch(choice) {
            case 'A':
                cout << "Enter data to push: ";
                cin >> data;
                q.push(data);
                cout << data << " pushed to queue.\n";
                break;
            case 'B':
                if (!q.empty()) {
                    cout << q.front() << " popped from queue.\n";
                    q.pop();
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 'C':
                if (!q.empty()) {
                    cout << "Front element: " << q.front() << "\n";
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 'D':
                if (!q.empty()) {
                    cout << "Back element: " << q.back() << "\n";
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 'E':
                cout << "Queue size: " << q.size() << "\n";
                break;
            case 'F':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    } while (choice != 'F');

    return 0;
}
