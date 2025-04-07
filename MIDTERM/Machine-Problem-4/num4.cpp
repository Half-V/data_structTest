#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> movieQueue;
    char choice;
    string person;

    do {
        cout << "\n[A] Add Person to Queue\n[B] Serve Person\n[C] Show First Person\n[D] Show Last Person\n[E] Show Queue Size\n[F] Quit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        choice = toupper(choice);

        switch(choice) {
            case 'A':
                cout << "Enter person's name: ";
                cin.ignore(); // Ignore any leftover newline characters
                getline(cin, person);
                movieQueue.push(person);
                cout << person << " added to the queue.\n";
                break;
            case 'B':
                if (!movieQueue.empty()) {
                    cout << movieQueue.front() << " served and removed from the queue.\n";
                    movieQueue.pop();
                } else {
                    cout << "The queue is empty.\n";
                }
                break;
            case 'C':
                if (!movieQueue.empty()) {
                    cout << "First person in line: " << movieQueue.front() << "\n";
                } else {
                    cout << "The queue is empty.\n";
                }
                break;
            case 'D':
                if (!movieQueue.empty()) {
                    cout << "Last person in line: " << movieQueue.back() << "\n";
                } else {
                    cout << "The queue is empty.\n";
                }
                break;
            case 'E':
                cout << "Number of people in queue: " << movieQueue.size() << "\n";
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

