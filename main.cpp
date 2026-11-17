# include <iostream>
using namespace std;

// without comments, I was lost the first time i opened the project after a few days of gap between prior coding session
// I wont make the same mistake again, it also makes searching data with naked eye easier...
// ...even if it is obvious from reading the code. I alos make comments longer, hehe-heh :P

// constants for the Bus No. of Seats, Types & Capacity

const int ROWS = 10;
const int COLS = 4;
const int ECONOMY = 1000;
const int EXECUTIVE = 2000;
const int BUSINESS = 3000;
const int BUS_CAPACITY = ROWS * COLS;

// Fixed Fare rates for cities in Rupees, & %age refund on ticket
const int ISLAMABAD = 500;
const int RAWALPINDI = 550;
const int ABBOTTABAD = 750;
const int PESHAWAR = 600;
const int HASANABDAL = 250;
const int REFUND_PERCENT = 80;  // % returned on cancellation 5 hours before departure

// Constants for User Roles
const int ROLE_PASSENGER = 1;
const int ROLE_DRIVER = 2;
const int ROLE_ADMIN = 3;

// Constants for Booking Status, (ST for status)
const int ST_CANCELLED = 0;
const int ST_CONFIRMED = 1;
const int ST_COMPLETED = 2;

// constants for file names
const string USERS_FILE = "users.txt";
const string BOOKING_FILE = "bookings.txt";

// header printer
void printHeading(string title) {
    cout << "=============================================================\n";
    cout << "  " << title << endl;
    cout << "=============================================================\n";
}

//convert input to lower case
string toLower(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

// validates yes / no input and returns boolean
bool yesNo(const string& prompt) {
    string s;
    while (true) {
        cout << prompt + " (y/n): ";
        getline (cin, s);
        s = toLower(s);
        if (s == "y" || s == "yes") return true;
        if (s == "n" || s == "no") return false;
        cout << "  Please type y or n.\n\n";
    }
}

// validates if input is a number, for error handling
int choiceInput(int &choice) {
    cout << "Enter your choice: ";
    while (true) {
        cin >> choice;
        if (cin.fail()) {
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number: ";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard any extra input
            return choice;
        }
    }
}

// empty function placeholders for later
void bookTicket() {
    ;
}

void viewBookings() {
    ;
}

void cancelBooking() {
    ;
}

void cancelBus() {
    ;
}

void viewUsers() {
    ;
}

void registerUser() {
    ;
}

void recoverPassword() {
    ;
}

void login() {
    ;
}

// passender Menu
void PassengerMenu() {
    printHeading("Passenger Menu");
    int choice;
    do {
        cout << "\n1. Book Ticket\n2. View Bookings\n3. Cancel Booking\n0. Logout\n";
        choiceInput(choice);
        switch (choice) {
            case 1: {bookTicket(); break;}
            case 2: {viewBookings(); break;}
            case 3: {cancelBooking(); break;}
            case 0: {cout << "Logging out...\n\n"; break;}
            default: {cout << "Invalid choice. Please try again.\n\n";}
        }
    } while (choice != 0);
}

// Admin Menu
void adminMenu() {
    printHeading("Admin Menu");
    int choice;
    do {
        cout << "\n1. View Users\n2. Cancel a Booking\n3. Cancel a Bus\n0. Logout\n";
        choiceInput(choice);
        switch (choice) {
            case 1: {viewUsers(); break;}
            case 2: {cancelBooking(); break;}
            case 3: {cancelBus(); break;}
            case 0: {cout << "Logging out...\n\n"; break;}
            default: {cout << "Invalid choice. Please try again.\n\n";}
        }
    } while (choice != 0);
}

// main program
int main() {
    printHeading("Bus Ticket Reservation System");
    cout << "\n1. Login\n2. Register\n3. Recover Password\n0. Exit\n"; 
    int choice = -1;
    do {
        choiceInput(choice);
        switch (choice) {
            case 1: {login();}
            case 2: {registerUser();}
            case 3: {recoverPassword();}
            case 0: {cout << "Exiting program...\n\n"; break;}
            default: {cout << "Invalid choice. Please try again.\n\n";}
        }
    } while (choice != 0);
    return 0;
}