// chapter 3 ex17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmere: Brenna Meyer
//Date February 12th,2025
//Requirements: Math Tutor Write a program that can be used as a math tutor for a young student.The program should display two 
// random numbers to be added, such as 247 + 129¯
//The program should then pause while the student works on the problem.When the student is ready to check the answer, 
// he or she can press a key and the program will display the correct solution :


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Random Number 
int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Math problem
void createMathProblem(int& num1, int& num2, int& answer) {
    num1 = getRandomNumber(100, 700);
    num2 = getRandomNumber(100, 700);
    answer = num1 + num2;
}

// user input
int getUserGuess() {
    int guess;
    cout << "Your answer: ";
    cin >> guess;
    return guess;
}

// display
void showTitle() {
    cout << "Math Tutor";
}

void showProblem(int a, int b) {
    cout << "Problem: " << a << " + " << b << " = ?\n";
}

void showResult(bool isCorrect, int correctAnswer) {
    if (isCorrect) {
        cout << " Correct.\n";
    }
    else {
        cout << " Incorrect. The answer is: " << correctAnswer;
    }
    cout << "----------\n";
}

// main program
int main() {
    srand(time(0)); // Initialize random numbers

    int num1, num2, correctAnswer;
    createMathProblem(num1, num2, correctAnswer);

    showTitle();
    showProblem(num1, num2);

    int userAnswer = getUserGuess();
    bool isCorrect = (userAnswer == correctAnswer);

    showResult(isCorrect, correctAnswer);

    // Keep window open
    cout << "\nPress Enter to exit.";
    cin.ignore();
    cin.get();

    return 0;
}


