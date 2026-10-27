#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string location;
    string destination;

    cout << "Enter your name: " << endl;
    getline(cin, name);

    cout << "Welcome to New York City, " << name
         << "! This is the N train running through Manhattan!"
         << endl;

    cout << "Please enter your location: " << endl;
    getline(cin >> ws, location);

    int locationIndex = 0;

    if (location == "Lexington Av/59 St") locationIndex = 1;
    else if (location == "5Av/59 St") locationIndex = 2;
    else if (location == "57 St") locationIndex = 3;
    else if (location == "49 St") locationIndex = 4;
    else if (location == "Times Sq-42 St") locationIndex = 5;
    else if (location == "34 St-Herald Sq") locationIndex = 6;
    else if (location == "28 St") locationIndex = 7;
    else if (location == "23 St") locationIndex = 8;
    else if (location == "14 St-Union Sq") locationIndex = 9;
    else if (location == "8 St-NYU") locationIndex = 10;
    else if (location == "Prince St") locationIndex = 11;
    else if (location == "Canal St") locationIndex = 12;

    if (locationIndex == 0) {
        cout << "Please check your location. "
             << "You may be in a different borough." << endl;
    }
    else {
        cout << "You are at a station on the listed route!"
             << endl;

        cout << "Please enter your destination: " << endl;
        getline(cin >> ws, destination);

        int destinationIndex = 0;

        if (destination == "Lexington Av/59 St") destinationIndex = 1;
        else if (destination == "5Av/59 St") destinationIndex = 2;
        else if (destination == "57 St") destinationIndex = 3;
        else if (destination == "49 St") destinationIndex = 4;
        else if (destination == "Times Sq-42 St") destinationIndex = 5;
        else if (destination == "34 St-Herald Sq") destinationIndex = 6;
        else if (destination == "28 St") destinationIndex = 7;
        else if (destination == "23 St") destinationIndex = 8;
        else if (destination == "14 St-Union Sq") destinationIndex = 9;
        else if (destination == "8 St-NYU") destinationIndex = 10;
        else if (destination == "Prince St") destinationIndex = 11;
        else if (destination == "Canal St") destinationIndex = 12;

        if (destinationIndex == 0) {
            cout << "Please check your destination name." << endl;
        }
        else {
            int stops = 0;
            int currentlocation = locationIndex;

            while (currentlocation != destinationIndex) {
                if (currentlocation < destinationIndex) {
                    currentlocation++;
                }
                else {
                    currentlocation--;
                }

                stops++;
            }

            cout << "You have " << stops
                 << " stops to ride to get to your destination."
                 << endl;

            if (locationIndex < destinationIndex) {
                cout << "Travel downtown toward the direction of Canal St."
                     << endl;
            }
            else if (locationIndex > destinationIndex) {
                cout << "Travel uptown toward the direction of "
                     << "Lexington Av/59 St." << endl;
            }
            else {
                cout << "You are already at your destination!"
                     << endl;
            }
        }
    }

    return 0;
}