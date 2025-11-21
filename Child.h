#ifndef CHILD_H
#define CHILD_H

#include "Person.h"
#include <string>
using namespace std;

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