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
int getRandom(int min, int max) {
    return min + rand() % (max - min + 1);
}

//Math Problem
void makeAddition(int& num1, int& num2, int& answer) {
    num1 = getRandom(100, 700);
    num2 = getRandom(100, 700);
    answer = num1 + num2;
}

void makeSubtraction(int& num1, int& num2, int& answer) {
    num1 = getRandom(100, 700);
    num2 = getRandom(100, num1);
    answer = num1 - num2;
}

void makeMultiplication(int& num1, int& num2, int& answer) {
    num1 = getRandom(10, 40);
    num2 = getRandom(10, 40);
    answer = num1 * num2;
}

void makeDivision(int& num1, int& num2, int& answer) {
    num2 = getRandom(10, 40);
    answer = getRandom(10, 40);
    num1 = answer * num2;
}

//menu
void showMenu() {
    cout << "Math tutor\n";
    cout << "1. Addition\n2. Subtraction\n";
    cout << "3. Multiplication\n4. Division\n5. Exit\n";
    cout << "Choose (1-5): ";
}

void showProblem(int num1, int num2, char op) {
    cout << num1 << " " << op << " " << num2 << " = ?\n";
}

void showResult(bool correct, int answer) {
    if (correct) cout << "Correct.\n";
    else cout << "Wrong. Answer: " << answer << "\n";
}

// main
int main() {
    srand(time(0));

    while (true) {
        showMenu();
        int choice;
        cin >> choice;

        if (choice == 5) {
            cout << "Goodbye.\n";
            break;
        }

        int num1,
            num2,
            answer;
        char op;

        switch (choice) {
        case 1: makeAddition(num1, num2, answer); op = '+'; break;
        case 2: makeSubtraction(num1, num2, answer); op = '-'; break;
        case 3: makeMultiplication(num1, num2, answer); op = '*'; break;
        case 4: makeDivision(num1, num2, answer); op = '/'; break;
        default: cout << "Invalid choice\n"; continue;
        }

        showProblem(num1, num2, op);
        int userAnswer;
        cout << "Your answer: ";
        cin >> userAnswer;
        showResult(userAnswer == answer, answer);

        cout << "Press Enter to continue";
        cin.ignore();
        cin.get();
    }

    return 0;
}



