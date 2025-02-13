// chapter 3 ex17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmere: Brenna Meyer
//Date February 12th,2025
//Requirements: Math Tutor Write a program that can be used as a math tutor for a young student.The program should display two 
// random numbers to be added, such as 247 + 129¯
//The program should then pause while the student works on the problem.When the student is ready to check the answer, 
// he or she can press a key and the program will display the correct solution :


#include <iostream>
#include <random>
using namespace std;

int main()
{
	const int minValue = 100,
		maxValue = 700;

	int num_1,
		num_2,
		answer;

	random_device engine;
	uniform_int_distribution<int>diceValuw(minValue, maxValue);

	cout << endl;
	cout << "-----\n\n";
	cout << "This program displays two random numbers\n";
	cout << "To be added.\n" << endl;

	num_1 = (rand() % (maxValue - minValue + 1)) + minValue;
	num_2 = (rand() % (maxValue - minValue + 1)) + minValue;

	answer = num_1 + num_2;

	cout << num_1 << "+" << num_2 << "= ?" << endl;

	cout << "Please Press Enter For Answer";
	cin.get();
	cout << endl;

	cout << num_1 << "+" << num_2 << "=";
	cout << answer << endl;
	cout << "\n-----------\n";
	cout << endl;

	return 0;
}

