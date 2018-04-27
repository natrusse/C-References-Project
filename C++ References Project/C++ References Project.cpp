// C++ References Project.cpp : Defines the entry point for the console application.
//
// Nathan G. Russell

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace::std;

//refferences placed here, refers to after the main function
void normalTrans(int& x, int& y);
void badTrans(int x, int y);

int main()
{
	//calls the variables and the strings for use in the code
	int jBalance = 15;
	int tBalance = 200000;
	string userName;
	string answer1;

	cout << "Operation Cuppa Joe.....Initialized.\n\n";
	//I like having some form of personal element in my games, so I almost always include a username script of some kind and call it at random intervals to simulate a more personal experience
	userName = getTextFromUser("Welcome agent, please input your first name.\n");
	
	cout << "\nWelcome to this project, Agent " << userName << ".\n";
	cout << "We have prepared for you an overview of this assignment. \nPlease type 'yes' to view the briefing, or type 'no' to skip it.\n\n";
	cin >> answer1;
	//one conditional if statement to allow for game flow.
	if (answer1 == "no")
	{
		goto hackedProgram;
	}
	//briefing (story text)
	cout << "\nAs you are aware, Joe's Coffee Shop has long been the favored coffee supplier of the CIA." << endl;
	cout << "However, they have fallen onto tough times and might soon file for bankruptcy.\n\nThis brings us to today's mission.\n\n";
	cout << "Recently, we have been monitoring the Illuminati's activity.\nWe have discovered that they have recently gained $200,000 in cryptocurrency.\nWe managed to trace the money to a small bank in the Middle East.\n\n";
	goto Program;

	//runs the hacked program and then jumps to the bad ending
hackedProgram:
	//system pause allows for more aesthetic running in console (prevents everything happening at once and allows for feeling of time passing)
	system("pause");
	cout << "\nYour job, Agent " << userName << ", is to monitor the program and make sure the transaction works perfectly.\n\n";
	cout << "Beginning program.........\n\n";

	cout << "Original Balances:\n";
	cout << "Joe's Balance: " << jBalance << " \n";
	cout << "Illuminati's Ballance: " << tBalance << " \n\n";

	cout << "Beginning transfer\n";
	cout << "Warning! Counter hack in progress...\n";
	badTrans(jBalance, tBalance);
	cout << "Joe's Balance: " << jBalance << "\n";
	cout << "Illuminati's Balance: " << tBalance << " \n\n";
	goto badEnding;
	//runs the normal program and then jumps to the good ending
Program:
	//system pause allows for more aesthetic running in console (prevents everything happening at once and allows for feeling of time passing)
	system("pause");
	cout << "\nYour job, Agent " << userName << ", is to monitor the program and make sure the transaction works perfectly.\n\n";
	cout << "Beginning program.........\n\n";

	cout << "Original Balances:\n";
	cout << "Joe's Balance: " << jBalance << " \n";
	cout << "Illuminati's Ballance: " << tBalance << " \n\n";

	cout << "Beginning transfer\n";
	normalTrans(jBalance, tBalance);
	cout << "Joe's Balance: " << jBalance << "\n";
	cout << "Illuminati's Balance: " << tBalance << " \n\n";
	goto goodEnding;

badEnding:
	cout << "Having skipped the briefing, You were not properly motivated to complete this task, and your hacking attempts failed.";
	cout << "\n\n\nGame Over, the program will now terminate in accordance with CIA Protocol.\n";
	goto End;

goodEnding: 
	cout << "Having watched the briefing, you were properly motivated and you scuessfully saved the CIA's coffee supplier.";
	cout << "\n\nCongratulations Agent " << userName << ", the program will now terminate in accordance with CIA Protocol.\n";
	goto End;

End:
	system("pause");
	return 0;
}

////successful transaction function
//void normalTrans(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
////hacked (unmotivated) transaction function
//void badTrans(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}

//// C++ References Project.cpp : Defines the entry point for the console application.
////
////Nathan G. Russell
//
//#include "stdafx.h"
//#include <iostream>
//
//using namespace::std;
//
////this is calling the code so that the program uses it, but does not define it yet
//
//void badSwap(int x, int y);
//void goodSwap(int& x, int& y);
//
//int main()
//{
//	int myScore = 150;
//	int yourScore = 1000;
//	cout << "Original Values\n";
//	cout << "myScore: " << myScore << " \n";
//	cout << "yourScore: " << yourScore << " \n\n";
//
//	//because of how badSwap is written, it cannot apply the function, and skips over it as a result (nothing changes)
//
//	cout << "Calling badSwap()\n";
//	badSwap(myScore, yourScore);
//	cout << "myScore: " << myScore << "\n";
//	cout << "yourScore: " << yourScore << " \n\n";
//
//	//goodswap is written correctly and swaps the scores (your score should now be 1000)
//
//	cout << "Calling goodSwap()\n";
//	goodSwap(myScore, yourScore);
//	cout << "myScore: " << myScore << "\n";
//	cout << "yourScore: " << yourScore << " \n";
//	system("pause");
//	return 0;
//}
//
//
////the voids up top refer down here to get their definitions
//void badSwap(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//void goodSwap(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}