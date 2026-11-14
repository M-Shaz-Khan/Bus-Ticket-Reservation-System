# include <iostream>
using namespace std;


// constants for the Bus Seats and Types
const int ROWS = 10;
const int COLS = 4;
const int ECONOMY = 1000;
const int EXECUTIVE = 2000;
const int BUSINESS = 3000;
const int BUS_CAPACITY = ROWS * COLS;

// Fixed Fare rates for different routes in Rupees.
const int ISLAMABAD = 500;
const int RAWALPINDI = 550;
const int ABBOTTABAD = 750;
const int PESHAWAR = 600;
const int HASANABDAL = 250;
const int REFUND_PERCENT = 80;   // % returned on cancellation 5 hours before departure

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


void printHeading(string title) {
    cout << "=============================================================\n";
    cout << "  " << title << endl;
    cout << "=============================================================\n";
}

string toLower(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

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


void PassengerMenu() {
    printHeading("Passenger Menu");
    int choice;
    do {
        cout << "\n1. Book Ticket\n2. View Bookings\n3. Cancel Booking\n0. Logout\n";
        choice = readInt("Enter your choice: ", 0, 3);
        switch (choice) {
            case 1: {bookTicket(); break;}
            case 2: {viewBookings(); break;}
            case 3: {cancelBooking(); break;}
            case 0: {cout << "Logging out...\n\n"; break;}
            default: {cout << "Invalid choice. Please try again.\n\n";}
        }
    } while (choice != 0);
}

void adminMenu() {
    printHeading("Admin Menu");
    int choice;
    do {
        cout << "\n1. View Users\n2. Cancel a Booking\n3. Cancel a Bus\n0. Logout\n";
        choice = readInt("Enter your choice: ", 0, 3);
        switch (choice) {
            case 1: {viewUsers(); break;}
            case 2: {cancelBooking(); break;}
            case 3: {cancelBus(); break;}
            case 0: {cout << "Logging out...\n\n"; break;}
            default: {cout << "Invalid choice. Please try again.\n\n";}
        }
    } while (choice != 0);
}

int main() {
    printHeading("Bus Ticket Reservation System");
    cout << "\n1. Login\n2. Register\n3. Recover Password\n0. Exit\n"; 
    int choice;
    do {
        choice = readInt("Enter your choice: ", 0, 3);
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