#ifndef ADULT_H
#define ADULT_H

#include "Person.h"
#include <string>
using namespace std;

class Adult : public Person
{
public:
    Adult();
    Adult(string name, int age);

    void displayRecord() const override; 

private:
    bool shingles;
};

#endif