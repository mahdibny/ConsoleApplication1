// Chapter1.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
    // ask for the person's name
	std::cout << "Please enter your first name: ";

	//read the name
	std::string name; // define name
	std::cin >> name; // read the input and place it in name

	//write a greeting
	std::cout << "Hello, " << name << "!" << std::endl;
	
	return 0;
}

