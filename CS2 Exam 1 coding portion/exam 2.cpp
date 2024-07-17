//Name: Lily Sadler
//Date: 
//Computer science 2 with Baarsch

#include <iostream>
#include "dog.h"
#include "date.h"
using namespace std;

int main()
{
	dog dog1;

	dog1.setAge(2);
	dog1.setBreed("golden retriever");
	dog1.setName("Hulk");
	cout << dog1.describeDog << endl
		<< dog1.trickPaws << endl
		<< dog1.trickSpeak << endl;
	dog dog2;

	dog2.setAge(10);
	dog2.setBreed("border collie");
	dog2.setName("Stardust");
	cout << dog2.describeDog << endl
		<< dog2.trickPaws << endl
		<< dog2.trickSpeak << endl;

	date datedefault;
	cout << datedefault.slashFormat << endl
		<< datedefault.USFormat << endl
		<< datedefault.nonUSFormat << endl;
	date today;
	today.getStringMonth[6];
	today.integerDay(17);
	today.integerMonth(7);
	today.integerYear(2024);
	cout << today.slashFormat << endl
		<< today.USFormat << endl
		<< today.nonUSFormat << endl;

	//I feel defeated. :(

}