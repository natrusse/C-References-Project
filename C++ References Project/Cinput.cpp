#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// basically replaces cin with str
string getTextFromUser(string prompt)
{
	cout << prompt; // type in your name or number of muntues
	string str;
	cin >> str; // replaces into variable string
	return str; // returns the value of the variable for use
}

//successful transaction function
void normalTrans(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

//hacked (unmotivated) transaction function
void badTrans(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}