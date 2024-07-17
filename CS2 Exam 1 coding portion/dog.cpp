#include "dog.h"
#include <iostream>
#include <string>

using namespace std;

dog::dog()
{
}

void dog::setAge(int a)
{
    age = a;
}

void dog::setBreed(string b) const
{
    breed = b;
}

void dog::setName(string n) const
{
    name = n;
}

int dog::getAge(int age)
{
    return age;
}

int dog::dogYears(int age)
{
    return age * 7;
}
string dog::describeDog(string description)
{
    description = getName + " is a " + getBreed + " and is " + getAge + " years old. ";
    return description;
}

string dog::trickPaws(string paws)
{
    paws = getName + " sits in their hind legs with both paws in the air. ";
    return paws;
}
string dog::trickSpeak(string speak)
{
    speak = getName + " barks one.";
    return speak;
}

string getBreed(string breed)
{
    return breed;
}

string getName(string name)
{
    return name;
}