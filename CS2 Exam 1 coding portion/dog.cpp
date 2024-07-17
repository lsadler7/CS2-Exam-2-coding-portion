#include "dog.h"
#include <iostream>
#include <string>

using namespace std;
/*Design and implement a class called Dog that contains the dog’s age, name, and breed.  
Create a constructor that accept these three pieces of data.  
Include a function that 
returns the dog’s age in “person years” (seven times the dog’s age).  
Create a function that returns a description of the dog.  
Create functions for two different tricks the dog knows.  
Each of these should return a string.  For example:  string playDead() might return the string 
“Fido rolls onto its back with its paws in the air.”

Demonstrate the Dog class by creating two and printing their information and tricks to the console.
*/
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