#include <iostream>
using namespace std;

int main() {
    int days;
    int choice;
    int rent;

    cout << "===== CAR RENTAL SYSTEM =====" << endl;
    cout << "1. Suzuki Alto (Rs 3000 per day)" << endl;
    cout << "2. Toyota Corolla (Rs 5000 per day)" << endl;
    cout << "3. Honda Civic (Rs 7000 per day)" << endl;

    cout << "\nEnter your choice (1-3): ";
    cin >> choice;

    cout << "Enter number of days: ";
    cin >> days;

    if (choice == 1) {
        rent = 3000 * days;
        cout << "You selected Suzuki Alto" << endl;
    }
    else if (choice == 2) {
        rent = 5000 * days;
        cout << "You selected Toyota Corolla" << endl;
    }
    else if (choice == 3) {
        rent = 7000 * days;
        cout << "You selected Honda Civic" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    cout << "Total Rent: Rs " << rent << endl;
    cout << "Thank you for using Car Rental System!" << endl;
system ("pause");
    return 0;
}
