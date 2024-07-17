#pragma once
#ifndef DOG.H
#define DOG.H
#include <string>

class dog
{
private:
	int age;
	string name;
	string breed;
public:
	dog();

	void setAge(int a);
	void setBreed(string b) const;
	void setName(string n) const;
	int getAge(int age);
	string getBreed(string breed);
	string getName(string name);
	int dogYears(int age);
	string describeDog(string description);
	string trickPaws(); // this is what i call it with my dog
	string trickSpeak();
};

#endif