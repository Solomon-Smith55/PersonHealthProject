// Solomon Smith
#ifndef PERSONHEALTHUTIL_H
#define PERSONHEALTHUTIL_H

#include "PersonHealth.h"

// Function to determine if one PersonHealth object needs help faster than another
bool needsFasterHelp(const PersonHealth &person1, const PersonHealth &person2)
{
    if (person1.hasHeartProblems() != person2.hasHeartProblems())
    {
        return person1.hasHeartProblems();
    }
    if (person1.hasBreathingProblems() != person2.hasBreathingProblems())
    {
        return person1.hasBreathingProblems();
    }
    if (person1.getBloodPressure() != person2.getBloodPressure())
    {
        return person1.getBloodPressure() == high;
    }
    if (person1.getBloodPressure() == low && person2.getBloodPressure() == low)
    {
        return person1.getBirthYear() < person2.getBirthYear();
    }
    return false;
}

// Custom comparator for the needsFasterHelp function
struct FasterHelpComparator
{
    bool operator()(const PersonHealth &person1, const PersonHealth &person2) const
    {
        return !needsFasterHelp(person1, person2);
    }
};

#endif // PERSONHEALTHUTIL_H
