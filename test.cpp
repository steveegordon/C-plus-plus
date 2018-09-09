/************************************************************
Program:      Hello World

File:         Hello.cpp

Function:     Main (complete program listing in this file)

Description:  Prints the words "Hello world" to the screen

Author:       Steve Gordon

Environment:

Notes:        This is an introductory, sample program.

Revisions:    1.00 9/5/18 "Hello World"
              1.01 9/6/18 Test cout methods
              1.02 9/6/18 add function cin method

************************************************************/

#include "test.hpp"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
// Assign alias for ease of use
typedef unsigned short int USHORT;
//initialize constants
const USHORT LUCKYNUMBER = 7;
enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum Bool {FALSE, TRUE};
// function prototypes
void DemonstrationFunction();
int add(int num1, int num2);
void favoriteDay();
void varSize();
void printAll();
int areaCube(int length, int width = 50, int height = 1);
// function polymorphism prototypes
int square(int);
long square(long);
double square(double);
float square(float);
inline int doubleNum(int target);
int fibonacci(int seqnum);
// Void functions are strictly side effect functions
//void DemonstrationFunction()
//{
//    cout << "In Demonstration Function\n";
//}

// Basic addition function
//int add(int a, int b)
//{
//    return (a + b);
//}
//FUNCTION POLYMORPHISM
//WILL INTELLIGENTLY SELECT FUNCTION BASED UPON INPUT
//int square(int number)
//{
//    return (number * number);
//}
//long square(long number)
//{
//    return (number * number);
//}
//double square(double number)
//{
//    return (number * number);
//}
//float square(float number)
//{
//    return (number * number);
//}
//int areaCube(int length, int width, int height)
//{
//    return (length * width * height);
//}

//INLINE FUNCTION EXAMPLE
//ONLY USE FOR SMALL ONE OR TWO LINERS
//int doubleNum(int target)
//{
//    return (target * 2);
//}

int fibonacci(int seqnum)
{
    if (seqnum < 3)
    {
        return 1;
    }
    else
    {
        return (fibonacci(seqnum - 2) + fibonacci(seqnum - 1));
    }
}

// If/Else and/or operators
//void favoriteDay()
//{
//    Days FaveDay;
//    int x;
//
//    cout << "What is your favorite day (0-6)? ";
//    cin >> x;
//    FaveDay = Days(x);
//
//    if (FaveDay == Sunday || FaveDay == Saturday)
//        cout << "\nYou're Predictable.\n";
//    else
//        cout << "\nYou're a wildcard like Charlie.\n";
//}

// Checks the size in memory of different integers/floats
//void varSize()
//{
/*    unsigned variables can only be positive, but
      because they don't reserve memory for negative
      iterations they can be twice as large */
//    16-bit
//    cout << sizeof(unsigned short) << "\n";
//    cout << sizeof(short) << "\n";
//    Use of alias
//    cout << sizeof(USHORT) << endl;
//    32-bit
//    cout << sizeof(unsigned long) << "\n";
//    cout << sizeof(long) << "\n";
//    ASCII
//    cout << sizeof(char) << "\n";
//    cout << sizeof(float) << "\n";
    //    Scientific Notation #s
//    cout << sizeof(double) << "\n";
//}

// Prints all ASCII characters
//void printAll()
//{
//    for (int i = 0; i<128; i++)
//        cout << (char) i;
//    cout << endl;
//}



////////APPLICATION FUNCTION/////////
int main()
{
////////FUNCTION CALLS IN APPLICATION/////////////
//    first function(main function)
//    cout << "Hello World!\n";
//    return 0;
//}
//    cout << "Hello there.\n";
//    cout << "Here is 5: " << 5 << "\n";
//    cout << "The manipulator endl writes a new line to the screen." <<
//                endl;
//    cout << "Here is a very big number:\t" << 70000 << endl;
//    cout << "Here is the sum of 8 and 5:\t" << 8+5 << endl;
//    cout << "Here's a fraction:\t\t" << (float) 5/8 << endl;
//    cout << "And a very very big number:\t" << (double) 7000 * 7000 <<
//                endl;
//    cout << "Don't forget to replace Jesse Liberty with your name...\n";
//    cout << "Steve Gordon is a C++ programmer!\n";
//    cout << "In main\n";
//    DemonstrationFunction();
//    cout << "Back in main\n";
    int target;
//    int a, b, c, area;
//    cout << "Enter two numbers: ";
//    cin >> a;
//    cin >> b;
//    c=add(a,b);
//    cout << "c: " << c << "\n";
//    varSize();
//    printAll();
//    cout << LUCKYNUMBER << endl;
//    favoriteDay();
    
/*
// USE OF areaCube FUNCTION IN MAIN
    cout << "Enter length width and height:\n";
    cin >> a;
    cin >> b;
    cin >> c;
    area = areaCube(a, b, c);
    cout << "The area of that cube is equal to: " << area;
    cout << " units.\n";
*/

//USE OF AN INLINE FUNCTION
    cout << "Enter a number: ";
    cin >> target;
    
//    target = doubleNum(target);
//    cout << "The Double is " << target << ".";
//    target = doubleNum(target);
//    cout << "\nThe Quadruple is " << target << ".";
//    target = doubleNum(target);
//    cout << "\nThe Octuple is " << target << "." << endl;
    target = fibonacci(target);
    cout << "The Fibonacci number at the position you chose is " << target << "." << endl;
//////int function always returns a number
    return 0;
}

