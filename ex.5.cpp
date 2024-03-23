#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;

public:

    RetailItem(string desc, int units, double pr) {
        description = desc;
        unitsOnHand = units;
        price = pr;
    }

    string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }
};

int main() {

    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);


    cout << setw(20) << left << "Description";
    cout << setw(15) << left << "Units On Hand";
    cout << setw(10) << left << "Price" << endl;

    cout << setw(20) << left << item1.getDescription();
    cout << setw(15) << left << item1.getUnitsOnHand();
    cout << setw(10) << left  << item1.getPrice() << endl;

    cout << setw(20) << left << item2.getDescription();
    cout << setw(15) << left << item2.getUnitsOnHand();
    cout << setw(10) << left  << item2.getPrice() << endl;

    cout << setw(20) << left << item3.getDescription();
    cout << setw(15) << left << item3.getUnitsOnHand();
    cout << setw(10) << left << item3.getPrice() << endl;

    return 0;
}

