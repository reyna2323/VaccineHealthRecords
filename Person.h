#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
using namespace std;

class Person
{
public:
    Person();
    Person(string name, int age);

    virtual void displayRecord() const; 
    void addVaccine(string vaccine);

    string getName() const;
    int getAge() const;

protected:
    string name;
    int age;
    vector<string> vaccines;
};

class Adult : public Person
{
public:
    Adult();
    Adult(string name, int age);

    void displayRecord() const override; 

private:
    bool shingles;
};

class Child : public Person
{
public:
    Child();
    Child(string name, int age);

    void displayRecord() const override;

private:
    bool needsFluShot;
};

#endif