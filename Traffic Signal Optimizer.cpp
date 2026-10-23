
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int north, south, east, west;
    int emergency = -1;

    cout << "Enter vehicles in North lane: ";
    cin >> north;

    cout << "Enter vehicles in South lane: ";
    cin >> south;

    cout << "Enter vehicles in East lane: ";
    cin >> east;

    cout << "Enter vehicles in West lane: ";
    cin >> west;

    cout << "\nEnter emergency lane (1=North, 2=South, 3=East, 4=West, -1=None): ";
    cin >> emergency;

    if (north < 0 || south < 0 || east < 0 || west < 0)
    {
        cout << "Invalid vehicle count!";
        return 0;
    }

    if (emergency < -1 || emergency > 4)
    {
        cout << "Invalid emergency lane!";
        return 0;
    }

    string name[4] = {"North", "South", "East", "West"};

    int lane[4] = {north, south, east, west};

    cout << "\n--- Traffic Signal Simulation Using Greedy ---\n";

    while (lane[0] + lane[1] + lane[2] + lane[3] > 0)
    {
        int pick = -1;

        if (emergency != -1 && lane[emergency - 1] > 0)
        {
            pick = emergency - 1;
            emergency = -1;

            cout << "\nEmergency detected! Giving priority to "
                 << name[pick] << " lane.\n";
        }
        else
        {
            int maxCars = -1;

            for (int i = 0; i < 4; i++)
            {
                if (lane[i] > maxCars)
                {
                    maxCars = lane[i];
                    pick = i;
                }
            }
        }

        cout << "\nGreen Signal -> " << name[pick] << " lane";

        cout << "\nVehicles before: " << lane[pick] << endl;

        lane[pick] = 0;

        cout << "Lane Cleared!" << endl;

        cout << "\nRemaining vehicles: ";

        cout << "N=" << lane[0] << " ";
        cout << "S=" << lane[1] << " ";
        cout << "E=" << lane[2] << " ";
        cout << "W=" << lane[3] << endl;
    }

    cout << "\nAll lanes cleared. Traffic Flow Smooth!\n";

    return 0;
}
