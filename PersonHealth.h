//Solomon Smith
#ifndef PERSONHEALTH_H
#define PERSONHEALTH_H

#include "Person.h"

// Enum for blood pressure
enum BloodPressure
{
    high,
    normal,
    low
};

class PersonHealth : public Person
{
private:
    bool heartProblems;          // Heart problems flag
    bool breathingProblems;      // Breathing problems flag
    BloodPressure bloodPressure; // Blood pressure status

public:
    // Constructor
    PersonHealth(int id, const std::string &firstName, const std::string &lastName,
                 bool heartProblems, bool breathingProblems)
        : Person(id, firstName, lastName),
          heartProblems(heartProblems),
          breathingProblems(breathingProblems),
          bloodPressure(normal) {} // Initialize bloodPressure to normal

    // Getters and setters for heartProblems
    bool hasHeartProblems() const { return heartProblems; }
    void setHeartProblems(bool heartProblems) { this->heartProblems = heartProblems; }

    // Getters and setters for breathingProblems
    bool hasBreathingProblems() const { return breathingProblems; }
    void setBreathingProblems(bool breathingProblems) { this->breathingProblems = breathingProblems; }

    // Getters and setters for bloodPressure
    BloodPressure getBloodPressure() const { return bloodPressure; }
    void setBloodPressure(BloodPressure bloodPressure) { this->bloodPressure = bloodPressure; }

    // Override the Person print function
    void print() const override
    {
        Person::print();
        std::cout << "Heart Problems: " << (heartProblems ? "Yes" : "No")
                  << ", Breathing Problems: " << (breathingProblems ? "Yes" : "No")
                  << ", Blood Pressure: ";

        // Use an array to store blood pressure strings
        const char *bloodPressureStrings[] = {"High", "Normal", "Low"};

        // Print the corresponding blood pressure string
        std::cout << bloodPressureStrings[bloodPressure] << std::endl;
    }
};

#endif // PERSONHEALTH_H