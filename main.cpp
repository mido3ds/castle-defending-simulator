/*
*   DS Project CMP-2020 Cairo Uni., Castle Defending Simulator
*	Here is the Logic of the simulator and the main function
*   Team: Mahmoud Adas, Mahmoud Yousri, Khaled Sabry
*   Started 1-Nov-16, Delivered: -----
*/

// header files and libraries
#include <iostream>
#include "Graph.h"
#include "Data.h"
using namespace std;

/* constatnts  */
#define SECOND 1000			// in milliseconds

/*	Functions Prototypes  */
namespace Control
{
	enum Mode {INTER, STEP, SILENT};
	void GetMode();
	void Read();
}

int main()
{
}

namespace Control
{
	// ask the user to enter a particular mode from 3 
	// returns chosen mode
	Mode GetMode()
	{
		printf("Choose the mode by entering its number:\n");
		printf("1- Interactive Mode\n");
		printf("2- Step-by-step Mode\n");
		printf("3- Silent Mode\n");

		char q = cin.get();
		switch (q)
		{
		case '1':
			// interact
			return INTER;
			break;

		case '2':
			// step by step
			return STEP;
			break;

		default:
			// silent mode
			return SILENT;
			break;
		}
	}

	// Reads from input.txt and produces lists of enemies
	//void Read();
}