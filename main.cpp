#include "Adult.h"
#include <iostream>
using namespace std;

Person::Person() : name(""), age(0) {}

Person::Person(string n, int a) : name(n), age(a) {}

void Person::displayRecord() const
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    cout << "Vaccines received: ";
    for(const string& v : vaccines)
    {
        cout << v << " ";
    }
    cout << endl;
}

void Person::addVaccine(string vaccine)
{
    vaccines.push_back(vaccine);
}

string Person::getName() const { return name; }
int Person::getAge() const { return age; }


Adult::Adult() : Person("", 0), shingles(false) {}

Adult::Adult(string name, int age) : Person(name, age)
{
    shingles = false;
}

void Adult::displayRecord() const
{
    cout << "Adult Record" << endl;
    Person::displayRecord();

    if (shingles)
        cout << "Shingles vaccine received.\n";
    else if (age >= 50)
        cout << "Warning! Shingles vaccine recommended.\n";

    cout << endl;
}


Child::Child() : Person("", 0), needsFluShot(true) {}

Child::Child(string name, int age) : Person(name, age)
{
    needsFluShot = true;
}

void Child::displayRecord() const
{
    cout << "Child Record" << endl;
    Person::displayRecord();

    if (needsFluShot)
        cout << "Warning! Flu vaccine recommended yearly for children!\n";

    cout << endl;
}

int main(){
    return 0;
}