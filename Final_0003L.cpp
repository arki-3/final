//final
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct Booking {
    string name;
    int pax;
    string checkInDate;
    string checkOutDate;
};

void inputBookingDetails(Booking &booking) {
    cout << setw(48) << "Enter name: ";
    getline(cin, booking.name);

    cout << setw(66) << "Enter number of guests (pax): ";
    cin >> booking.pax;

    cout << setw(57) << "Enter check-in date: ";
    cin >> booking.checkInDate;

    cout << setw(58) << "Enter check-out date: ";
    cin >> booking.checkOutDate;
    cout <<"\n\n";
}

void displayBookingDetails(const Booking &booking) {
    cout << setw(53) << "Booking Details:\n";
    cout << setw(42) << "Name: " << booking.name << endl;
    cout << setw(60) << "Number of Guests (pax): " << booking.pax << endl;
    cout << setw(51) << "Check-in Date: " << booking.checkInDate << endl;
    cout << setw(52) << "Check-out Date: " << booking.checkOutDate << endl;
    cout << "\n\n";
    
}

int main() {
    cout << setw(85) << "=================================================" << endl;
    cout << setw(85) << "=================================================" << endl;
    cout << setw(85) << "=====                                       =====" << endl;
    cout << setw(85) << "=====           Red Diamond Hotel           =====" << endl;
    cout << setw(85) << "=====                                       =====" << endl;
    cout << setw(85) << "=================================================" << endl;
    cout << setw(87) << "=================================================\n\n" << endl;

    cout << setw(86) << "*************************************************\n" << endl;

    Booking booking;

    inputBookingDetails(booking);

	cout << setw(85) << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
    displayBookingDetails(booking);

    int choice;
    int quant;
    int total_room = 0;
    int Qtwinroom = 10, Qdeluxe = 10, Qexecutive = 10, Qjuniorsuite = 10, Qpresidentialsuite = 9, Qvilla = 9;
    int Stwinroom = 0, Sdeluxe = 0, Sexecutive = 0, Sjuniorsuite = 0, Spresidentialsuite = 0, Svilla = 0;

    cout << setw(53) << "Available Rooms: " << endl;
    cout << setw(68) << "[1] - Twin Room (Good for 2 pax)" << endl;
    cout << setw(70) << "[2] - Deluxe Room (Good for 4 pax)" << endl;
    cout << setw(73) << "[3] - Executive Room (Good for 4 pax)" << endl;
    cout << setw(71) << "[4] - Junior Suite (Good for 6 pax)" << endl;
    cout << setw(77) << "[5] - Presidential Suite (Good for 8 pax)" << endl;
    cout << setw(70) << "[6] - Villa Room (Good for 10 pax)" << endl;
    cout << setw(60) << "[7] - Rooms Availability" << endl;
    cout << setw(59) << "[8] - Back to Home Page" << endl;
    cout << "\n\n";

    int room = 0;
    cout << setw(61) << "Enter your desired room: " << endl;
    cout << setw(38) << "> ";
    cin >> room;
    cout << "\n";

    switch (room) {
    case 1:
        cout << setw(81) << "Enter the number of rooms you want to avail: ";
        cout << setw(77) << "> ";
        cin >> quant;
        if (Qtwinroom - Stwinroom >= quant) {
            Stwinroom = Stwinroom + quant;
            total_room = total_room + quant * 1200;
            cout << setw(53) << "You are availing " << quant << " room. " << endl;
            cout << setw(62) << "Your total room charge is " << total_room << endl;
        } else {
            cout << setw(41) << "Only " << Qtwinroom - Stwinroom << " rooms are available.";
        }
        break;
    case 2:
        cout << setw(81) << "Enter the number of rooms you want to avail: ";
   		cout << setw(77) << "> ";   
	    cin >> quant;
        if (Qdeluxe - Sdeluxe >= quant) {
            Sdeluxe = Sdeluxe + quant;
            (total_room = total_room + quant * 1350);
            cout << setw(53) << "You are availing " << quant << " rooms. " << endl;
            cout << setw(62) << "Your total room charge is " << total_room << endl;
        } else {
            cout << setw(41) << "Only " << Qdeluxe - Sdeluxe << " rooms are available.";
        }
        break;
    case 3:
        cout << setw(81) << "Enter the number of rooms you want to avail: ";
        cout << setw(77) << "> "; 
		cin >> quant;
        if (Qexecutive - Sexecutive >= quant) {
            Sexecutive = Sexecutive + quant;
            (total_room = total_room + quant * 1500);
            cout << setw(53) << "You are availing " << quant << " rooms. " << endl;
            cout << setw(62) << "Your total room charge is " << total_room << endl;
        } else {
            cout << setw(41) << "Only " << Qexecutive - Sexecutive << " rooms are available.";
        }
        break;
    case 4:
        cout << setw(81) << "Enter the number of rooms you want to avail: ";
        cout << setw(77) << "> "; 
        cin >> quant;
        if (Qjuniorsuite - Sjuniorsuite >= quant) {
            Sjuniorsuite = Sjuniorsuite + quant;
            (total_room = total_room + quant * 1950);
            cout << setw(53) << "You are availing " << quant << " rooms. " << endl;
            cout << setw(62) << "Your total room charge is " << total_room << endl;
        } else {
            cout << setw(41) << "Only " << Qjuniorsuite - Sjuniorsuite << " rooms are available.";
        }
        break;
    case 5:
        cout << setw(81) << "Enter the number of rooms you want to avail: ";
        cout << setw(77) << "> ";
		cin >> quant;
        if (Qpresidentialsuite - Spresidentialsuite >= quant) {
            Spresidentialsuite = Spresidentialsuite + quant;
            (total_room = total_room + quant * 2300);
            cout << setw(30) << "You are availing " << quant << " rooms. " << endl;
            cout << setw(62) << "Your total room charge is " << total_room << endl;
        } else {
            cout << setw(41) << "Only " << Qpresidentialsuite - Spresidentialsuite << " rooms are available.";
        }
        break;
    case 6:
        cout << setw(30) << "Enter the number of rooms you want to avail: ";
       	cout << setw(77) << "> ";
	    cin >> quant;
        if (Qvilla - Svilla >= quant) {
            Svilla = Svilla + quant;
            (total_room = total_room + quant * 2800);
            cout << setw(30) << "You are availing " << quant << " rooms. " << endl;
             cout << setw(62) << "Your total room charge is " << total_room << endl;
        } else {
            cout << setw(41) <<
        "Only " << Qvilla - Svilla << " rooms are available.";
        }
        break;
    case 7:
        cout << setw(63) << "Number of rooms available: " << Qtwinroom + Qdeluxe + Qexecutive + Qjuniorsuite + Qpresidentialsuite + Qvilla;
        break;
    case 8:
        cout << setw(30) << "Exiting.. Returning to Home Page.";
        break;
    default:
        cout << setw(30) << "Please choose from the numbers above.";
        break;
    }

    cout << "\n\n\n";
    cout << setw(80) << " ****************************************** " << endl;
    cout << setw(77) << "This will serve as your Valid Invoice." << endl;
    cout << setw(80) <<" ****************************************** " << endl;
    return 0;
}

