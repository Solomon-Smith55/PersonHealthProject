// Solomon Smith
#include <iostream>
#include <queue>
#include "Person.h"
#include "PersonHealth.h"
#include "PersonHealthUtil.h"

using namespace std;

int main()
{
    // Create a priority_queue with PersonHealth objects using the custom comparator
    priority_queue<PersonHealth, vector<PersonHealth>, FasterHelpComparator> personHealthQueue;

    // Add PersonHealth objects to the priority_queue
    PersonHealth person1(1, "Solomon", "Smith", false, false);
    person1.setBloodPressure(normal);
    personHealthQueue.push(person1);

    PersonHealth person2(2, "Rhiannon", "Smith", true, false);
    person2.setBloodPressure(high);
    personHealthQueue.push(person2);

    PersonHealth person3(3, "Aurora", "Perez", false, true);
    person3.setBloodPressure(normal);
    personHealthQueue.push(person3);

    PersonHealth person4(4, "Isis", "Perez", true, true);
    person4.setBloodPressure(high);
    personHealthQueue.push(person4);

    PersonHealth person5(5, "Solomon", "Smith", false, false);
    person5.setBloodPressure(normal);
    personHealthQueue.push(person5);

    PersonHealth person6(6, "Patrick", "McClain", true, false);
    person6.setBloodPressure(high);
    personHealthQueue.push(person6);

    // Process the queue
    while (!personHealthQueue.empty())
    {
        // Print the maximum element
        personHealthQueue.top().print();
        cout << endl;

        // Remove the maximum element from the queue
        personHealthQueue.pop();
    }

    return 0;
}
