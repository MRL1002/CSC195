#include <iostream>
#include "Database.h"
#include "Car.h"
#include "Bike.h"

using namespace std;

int main()
{
	Database database;

    bool quit = false;
    while (!quit)
    {
        cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1: // Create object by type

            cout << "Enter type (0 for CAR, 1 for BIKE): ";
            int t;
            cin >> t;
            try {
                Vehicle::eType type = static_cast<Vehicle::eType>(t);

                database.Create(type);
                break;
            }
            catch (exception e) {
                cout << "invalid input";
                break;
            }

        case 2:

            database.DisplayAll();

            break;

        case 3:
        {
            cout << "Enter a name: ";
            string name;
            cin >> name;
            database.DisplayName(name);

            break;
        }
        case 4:
        {
            cout << "Enter type (0 for CAR, 1 for BIKE): ";
            int t;
            cin >> t;
            database.DisplayType(static_cast<Vehicle::eType>(t));
            
            break;
        }
        case 5:

            quit = true;
            break;

        }
    }

}
