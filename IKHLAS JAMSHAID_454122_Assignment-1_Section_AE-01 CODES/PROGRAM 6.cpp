#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Aircraft {
    string name;
    double positive_limit;
    double negative_limit;
};

void calculateGForce(double velocity, double g, double radius, int maneuver, const Aircraft& selectedPlane) {
    double n = 0.0;
    switch (maneuver) {
        case 1: // Banked Levelled Maneuver
            n = sqrt((pow(velocity, 4) / pow(radius, 2) * pow(g, 2)) + 1);
            break;
        case 2: // Vertical up Maneuver
            n = (pow(velocity, 2) / (radius * g)) + 1;
            break;
        case 3: // Vertical down Maneuver
            n = (pow(velocity, 2) / (radius * g)) - 1;
            break;
        default:
            cout << "Invalid maneuver choice." << endl;
            return;
    }

    cout << "Calculated G Force: " << n << endl;
    if (n > selectedPlane.positive_limit || n < selectedPlane.negative_limit) {
        cout << "The aircraft " << selectedPlane.name << " will experience structural damage." << endl;
    } else {
        cout << "The aircraft " << selectedPlane.name << " will bear the maneuver." << endl;
    }
}

int main() {
    Aircraft f16 = {"F-16", 9.0, -3.5};
    Aircraft mirage2000 = {"Mirage 2000", 9.0, -3.2};
    Aircraft jf17Thunder = {"JF-17 Thunder", 8.0, -3.0};

    cout << "Choose an aircraft: " << endl;
    cout << "1. F-16" << endl;
    cout << "2. Mirage 2000" << endl;
    cout << "3. JF-17 Thunder" << endl;

    int aircraftChoice;
    cin >> aircraftChoice;

    Aircraft selectedPlane;
    switch (aircraftChoice) {
        case 1:
            selectedPlane = f16;
            break;
        case 2:
            selectedPlane = mirage2000;
            break;
        case 3:
            selectedPlane = jf17Thunder;
            break;
        default:
            cout << "Invalid aircraft choice." << endl;
            return 1;
    }

    cout << "Enter the velocity (m/s): ";
    double velocity;
    cin >> velocity;

    cout << "Enter the value of g at the current altitude (m/s^2): ";
    double g;
    cin >> g;

    cout << "Enter the radius of the turn (m): ";
    double radius;
    cin >> radius;

    cout << "Choose the type of maneuver:" << endl;
    cout << "1. Banked Levelled Maneuver" << endl;
    cout << "2. Vertical up Maneuver" << endl;
    cout << "3. Vertical down Maneuver" << endl;

    int maneuverChoice;
    cin >> maneuverChoice;

    calculateGForce(velocity, g, radius, maneuverChoice, selectedPlane);

    return 0;
}
