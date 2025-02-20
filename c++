// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
    //#1
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "hello " + name;

    int id;
    cout << "\nEnter your ID: ";
    cin >> id;
    cout << "Your id is " << id;

    //#2
    int var1, var2, diff, sum, prod;
    cout << "\nEnter var 1: ";
    cin >> var1;
    cout << "enter var 2: ";
    cin >> var2;
    diff = var1 - var2;
    sum = var1 + var2;
    prod = var1 * var2;
    cout << "var1: " << var1 << "\nvar2: " << var2 << "\ndiff: " << diff << "\nsum: " << sum << "\nprod: " << prod;

    //#3
    int lab, mt, fn;
    string name2;
    cout << "Your name: ";
    cin >> name;
    cout << "Your lab: ";
    cin >> lab;
    cout << "Your midterm: ";
    cin >> mt;
    cout << "Your final: ";
    cin >> fn;
    int ls;
    ls = (lab / 4) + (mt * 35 / 100) + (fn * 40 / 100);
    cout << "\nYour name is " << name2 << "\nYour lab is: " << lab << "\nYour mt is: " << mt << "\nYour final is: " << fn << "\nYour last score is: " << ls;

    //#4
    cout << "*\n**\n***\n**\n*";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
