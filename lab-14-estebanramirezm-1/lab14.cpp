#include <iostream>
#include <queue>
#include <random>
using namespace std;

int randomNum();

int main()
{
    // Greeting 
    cout << "----- B A N K L I N E  S I M U L A T O R -----" << endl << endl;

    // Variables & Objects
    int arrivalTime = 0, serviceTime = 0, simulationTime = 0, serviced = 0, minutes = 0, maxWait = 0, maxQueue = 0;
    queue<int> bankLine;

    // Set time seed to 0
    srand(time(NULL));

    // Ask the user for the simulation duration
    cout << "How many minutes to simulate? ";
    cin >> simulationTime;
    cout << endl;

    // A. Indicate that the first customer arrived.
    arrivalTime = randomNum();
    cout << "Costumer arrives at minute " << arrivalTime << endl;
    minutes = arrivalTime + 1;

    // B. Determine when the first costumer leaves
    serviceTime = arrivalTime + randomNum();

    // C. Determine when the next costumer arrives
    arrivalTime += randomNum();

    // 2. For each remaining minute of the workday
    for (; minutes <= simulationTime; minutes++)
    {
        // A. If it is time for the current customer being helped to leave
        if (minutes == serviceTime)
        {
            cout << "Costumer leaves at minute " << minutes << endl;
            serviced++;
        }

        // B. If it is time for the next customer to arrive:
        if (minutes == arrivalTime)
        {
            cout << "Costumer arrives at minute " << minutes << endl;
            bankLine.push(minutes);
            arrivalTime = minutes + randomNum();
        }

        // C. If there is no customer being helped (they have left):
        if (serviceTime == minutes)
        {
            if (!bankLine.empty())
            {
                bankLine.pop();
                serviceTime = minutes + randomNum();
            }
        }
        // Check for max costumers in the line
        if (maxQueue < bankLine.size())
        {
            maxQueue++;
        }

        // Check for the costumer waiting the longest in line
        // if()
    }
    // After closing that there are still customers being helped
    cout << endl << "The bank has closed. However, there are still customers inside" << endl;
    for (; minutes <= serviceTime; minutes++)
    {
        if (minutes == serviceTime)
        {
            cout << "Costumer leaves at minute " << minutes << endl;
            serviced++;

            if (!bankLine.empty())
            {
                bankLine.pop();
                serviceTime = minutes + randomNum();
            }
        }
    }

    cout << endl << "Customers serviced: " << serviced << endl;
    cout << "Max number of customers ever in the queue: " << maxQueue;

    return 0;
}

// Function that generates a random number
int randomNum()
{
    // Variable
    int random;

    // Generate a random number 
    random = rand() % (4) + 1;

    // Return random number
    return random;
}