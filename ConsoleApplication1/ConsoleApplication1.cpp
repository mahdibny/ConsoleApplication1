// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	std::cout << "Hello World\n"; //extraction <<
	std::cout << "Another way to do new line" << std::endl;

	std::cout << "Hello Mahdi this is the first C++ program\n";

	int pause;
	pause = 0;
	std::cin >> pause; //incertion


    return pause;
}