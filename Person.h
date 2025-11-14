#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

class Person
{
public:
    Person();
    Person(std::string name, int age);

    virtual void displayRecord() const;      
    void addVaccine(std::string vaccine);    

    std::string getName() const;
    int getAge() const;

protected:
    std::string name;
    int age;
    std::vector<std::string> vaccines;
};

#endif