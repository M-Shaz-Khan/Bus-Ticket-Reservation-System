# include <iostream>
using namespace std;

void printDivider() {
    cout << "=============================================================\n";
}

int main() {
    // constants for the Bus Seats and Types
    const int ROWS = 10;
    const int COLS = 4;
    const int ECONOMY = 1000;
    const int EXECUTIVE = 2000;
    const int BUSINESS = 3000;

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


    printDivider();
    cout << " Bus Ticket Reservation System" << endl;
    printDivider();
    return 0;
}