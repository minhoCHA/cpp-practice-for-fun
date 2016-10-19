/**
* Class: CS 110A
* Description: About percentage
* Due Date: Sep/07/2015
* Name: Minho Cha
* File Name: percentage.cpp
* Lab #3
*/


#include <iostream>
using namespace std;

int main()

{
  string name;
  int numQuestions, numCorrect;
  double percentage;
  cout << "Enter student's first name and last name: ";
  cin >> name;

  cout << "Number of questions on the test: ";
  cin >> numQuestions;

  cout << "Number of answers the student got correct: ";
  cin >> numCorrect;
  cout << endl;
 
  percentage = static_cast<double>(numCorrect)/numQuestions*100;
  cout << name<<"    "<<percentage<< "%" << endl << endl;

  cout << "Programmed by Minho Cha" << endl;
  return 0;

}
