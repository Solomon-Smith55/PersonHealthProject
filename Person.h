//Solomon Smith
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
private:
    long id;               // ID number
    std::string firstName; // First name
    std::string lastName;  // Last name
    std::string email;     // Email
    int birthYear;         // Birth year

public:
    // Constructor
    Person(long id, const std::string &firstName, const std::string &lastName)
        : id(id), firstName(firstName), lastName(lastName) {}

    // Getters and setters
    long getId() const { return id; }
    void setId(long id) { this->id = id; }

    const std::string &getFirstName() const { return firstName; }
    void setFirstName(const std::string &firstName) { this->firstName = firstName; }

    const std::string &getLastName() const { return lastName; }
    void setLastName(const std::string &lastName) { this->lastName = lastName; }

    const std::string &getEmail() const { return email; }
    void setEmail(const std::string &email) { this->email = email; }

    int getBirthYear() const { return birthYear; }
    void setBirthYear(int birthYear) { this->birthYear = birthYear; }

    // Overload relational operators < and >
    bool operator<(const Person &other) const
    {
        if (lastName == other.lastName)
        {
            if (firstName == other.firstName)
            {
                return id < other.id;
            }
            return firstName < other.firstName;
        }
        return lastName < other.lastName;
    }

    bool operator>(const Person &other) const
    {
        if (lastName == other.lastName)
        {
            if (firstName == other.firstName)
            {
                return id > other.id;
            }
            return firstName > other.firstName;
        }
        return lastName > other.lastName;
    }

    // Virtual print function
    virtual void print() const
    {
        std::cout << lastName << ", " << firstName << ", ID: " << id << std::endl;
    }
};

#endif // PERSON_H
