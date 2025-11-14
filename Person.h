#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
using namespace std

class Person
{
public:
    Person();
    Person(string name, int age);

    void displayRecord() const;      
    void addVaccine(string vaccine);    

    std::string getName() const;
    int getAge() const;

protected:
    string name;
    int age;
    vector<string> vaccines;
};

class Adult :: public Person {
    private:
        bool shingles;
    public:
        Adult(string name, int age) :: Person(name, age);
}
        

#endif
