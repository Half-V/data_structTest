#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> books;
    char choice;
    string book;

    do {
        cout << "\n[A] Add Book to Stack\n[B] Remove Top Book\n[C] Show Top Book\n[D] Show Total Books\n[E] Quit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        choice = toupper(choice);

        switch(choice) {
            case 'A':
                cout << "Enter book title: ";
                cin.ignore(); // Ignore any leftover newline characters
                getline(cin, book);
                books.push(book);
                cout << "\"" << book << "\" added to the stack.\n";
                break;
            case 'B':
                if (!books.empty()) {
                    cout << "\"" << books.top() << "\" removed from the stack.\n";
                    books.pop();
                } else {
                    cout << "The stack is empty.\n";
                }
                break;
            case 'C':
                if (!books.empty()) {
                    cout << "Top book: \"" << books.top() << "\"\n";
                } else {
                    cout << "The stack is empty.\n";
                }
                break;
            case 'D':
                cout << "Total books in stack: " << books.size() << "\n";
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
