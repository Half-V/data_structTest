#include <iostream>
#include <string>
using namespace std;

class sariSari {
public:
    string id;
    string name;
    double price;
    int shelfLife;
    int pieces;

    void setData(string i, string n, double p, int sl, int pcs) {
        id = i;
        name = n;
        price = p;
        shelfLife = sl;
        pieces = pcs;
    }

    void displayInfo() {
        cout << "Item ID: " << id << endl;
        cout << "Item Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Shelf Life: " << shelfLife << " days" << endl;
        cout << "Pieces: " << pieces << endl;
    }
};

int main() {
    sariSari prod[8];
    prod[0].setData("10245","Mangoes" , 20, 60, 100);
    prod[1].setData("20255","Apple" , 15, 38, 50);
    prod[2].setData("30356","C2_Red" , 30, 360, 200);
    prod[3].setData("12347","Bukopie" , 40, 120, 150);
    prod[4].setData("77878","Magic_Sarap" , 10, 520, 1000);
    prod[5].setData("10255","C2_Green" , 25, 360, 300);
    prod[6].setData("12032","Boy_Bawang" , 18, 400, 140);
    prod[7].setData("11234","Banana" , 7, 24, 30);

    string search;
    int quantity;

    cout << "Enter the product ID: ";
    cin >> search;

    for (int i = 0; i < 8; i++) {
        if (prod[i].id == search) {
            cout << "Enter Quantity: ";
            cin >> quantity;

            if (quantity > prod[i].pieces) {
                cout << "NO" << endl;
            } else {
                double totalPrice = quantity * prod[i].price;
                cout << "Total price for " << quantity << " pieces of " << prod[i].name << " is $" << totalPrice << endl;
                prod[i].pieces -= quantity;
            }
            break;
        }
    }

    return 0;
}
