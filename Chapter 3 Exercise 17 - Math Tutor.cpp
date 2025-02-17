/*
* Filename:Chapter 3 Exercise 17 - Math Tutor.cpp
* Programmer: Arianna Washington
* Date:16FEB2025 
* Requirements:Write a program that can be used as a math tutor for a young student.
The program should display two random numbers to be added, such as

247
+129

The program should then pause while the student works on the
problem. When the student is ready to check the answer, he or she can
press a key and the program will display the correct solution:

247
+129
376

*/

#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	srand(time(0)); 
	int num1 = rand() % 1000 + 1;
	int num2 = rand() % 1000 + 1;
	int correctAnswer = num1 + num2;

	cout << "Please complete the following equation" << endl ;

	cout << num1 << "+" << num2 << endl;

	cout << "Press any key to see the answer" << endl;
	_getch();
	cout << "The correct answer is: " << correctAnswer;



}