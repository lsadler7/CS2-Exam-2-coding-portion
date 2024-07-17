//Name: Lily Sadler
//Date: 
//Computer science 2 with Baarsch

#include <iostream>
#include "dog.h"
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



}