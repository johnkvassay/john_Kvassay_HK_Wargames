// HK_Ariel_WarGames.cpp : Defines the entry point for the console application.
//
// Precompiled Header
#include "stdafx.h"
// Imports
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	// Binary Search Variables
	// The letter b at the end of the variable indicates that the variabvle is used in the bbinary search
	bool isenemylocated_binary = false;
	int pingnumber_binary = 0;

	// Search Grid
	int gridMax = 64;
	int gridMin = 1;

	// Linear Search Variables 
	bool isenemylocated_Linear = false;
	int pingnumber_Linear = 0;
	int targetGuess_Linear = 0;

	// Human Player Variables
	bool isenemylocated_Human = false;
	int pingnumber_Human = 0;
	int targetGuess_Human;
	
	
	
	// Seed random number generator
	srand(static_cast<unsigned int> (time(0)));

	// Makes a defualt enemy Location on an 8x8 grid
	int enemyLocation = rand() % gridMax + gridMin;

	
	// Human Player Here
	while (isenemylocated_Human == false)
	{
		
		//Prompt Human to enter a number
		cout << "Enter A number that is between 1 and 64." << endl;
		// Gets the number entered by the human player and sets targetGuess_Human 
		cin >> targetGuess_Human;

		pingnumber_Human++;

		if (targetGuess_Human != enemyLocation)
		{
			cout << "Attempt " << pingnumber_Human << endl;
			cout << "Checking Square " << targetGuess_Human << endl;
			cout << "No Hostiles Detected" << endl;
		}

		else if (targetGuess_Human = enemyLocation)
		{
			cout << "Attempt " << pingnumber_Human << endl;
			cout << "Checking Square " << targetGuess_Human << endl;
			cout << "Target Found at " << targetGuess_Human << endl;
			isenemylocated_Human = true;
		}

		else
		{
			// Breaks loop if something went wrong
			cout << "Malfunction Detected" << endl;
			cout << "Please Return to IT for help" << endl;
			isenemylocated_Human = true;

		}
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// Linear Search Pattern Code
	while (isenemylocated_Linear == false)
	{
		targetGuess_Linear = ++targetGuess_Linear;
		pingnumber_Linear++;

		if (targetGuess_Linear != enemyLocation)
		{
			cout << "Attempt " << pingnumber_Linear << endl;
			cout << "Checking Square " << targetGuess_Linear << endl;
			cout << "No Hostiles Detected" << endl;
		}

		else if (targetGuess_Linear = enemyLocation)
		{
			cout << "Attempt " << pingnumber_Linear << endl;
			cout << "Checking Square " << targetGuess_Linear << endl;
			cout << "Target Found at " << targetGuess_Linear << endl;
			isenemylocated_Linear = true;
		}

		else 
		{
			// Breaks loop if something went wrong
			cout << "Malfunction Detected" << endl;
			cout << "Please Return to IT for help" << endl;
			isenemylocated_Linear = true;

		}
	}

	// Final Results
	cout 


	
	
	system("pause");

	return 0;
}

