//
//  func.cpp
//  C++
//
//  Created by Alex Podborny on 08/04/2019.
//  Copyright © 2019 -. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void f_plus()
{
    int x, y;
    cout << "\nEnter your first number\n:";
    cin >> x;
    cout << "Enter your second number\n:";
    cin >> y;
    cout << "Result is: " << x + y << endl;
}

void f_minus()
{
    int x, y;
    cout << "\nEnter your first number\n:";
    cin >> x;
    cout << "Enter your second number\n:";
    cin >> y;
    cout << "Result is: " << x - y << endl;
}
void f_mult()
{
    int x, y;
    cout << "\nEnter your first number\n:";
    cin >> x;
    cout << "Enter your second number\n:";
    cin >> y;
    cout << "Result is: " << x * y << endl;
}
void f_div()
{
    int x, y;
    cout << "\nEnter your first number\n:";
    cin >> x;
    cout << "Enter your second number\n:";
    cin >> y;
    cout << "Result is: " << x / y << endl;
}

void f_main()
{
    cout << "1.Plus function\n2.Minus function\n3.Multiplication function\n4.Division function\n:";
    int choise;
    cin >> choise;
    if(choise == 1)
        {
            f_plus();
        }
    else if(choise == 2)
        {
            f_minus();
        }
    else if(choise == 3)
        {
            f_mult();
        }
    else if(choise == 4)
        {
            f_div();
        }
    else
        {
            cout << "Error, try again" << endl;
            f_main();
        }
}

int f_choise()
{
    cout << "Do you want to calculate again: YES     NO" << endl;
    string choise2;
    cin >> choise2;
    if (choise2 == "YES")
        {
            f_main();
            f_choise();
        }
    else if (choise2 == "NO")
        {
            cout << "Goodbye" << endl;
            return 0;
        }
    else
        {
            cout << "Error, try again\n";
            f_choise();
        }
    return 0;
}
