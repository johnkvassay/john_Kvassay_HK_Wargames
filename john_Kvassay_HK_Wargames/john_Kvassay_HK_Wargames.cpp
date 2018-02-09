






// HK_Ariel_WarGames.cpp : Defines the entry point for the console application
/*
OBJECTIVE

Create a new solution and project and GitHub for this assignment.
Hint: Open two separate visual studios to do this. One for the old solution project, and one for the new solution project. Now copy all the code from the original Skynet HK-Aerial into this new project to save you from having to recode everything from scratch. Test this before you move on to make sure the code works in your new project like it did in your old project. Now close your old project and that instance of visual studio.
Modify your new C++ program for the Skynet HK-Aerial.
Add another AI player using the less efficient Linear search pattern.
Add another AI player using a random number guess between grid locations 1 and 64.
Add a human player, letting the human input grid numbers from the console.
The easiest way to code this would be for this program’s user interface to start with the human player and use a while loop until the human guesses the location the enemy while keeping track of the number of guesses the human uses. Then the random guess AI player should guess using their own while loop until they find the enemy location and keep track of how many guesses it took them. Then the linear Search AI player should guess using their own while loop until they find the enemy location, and then finally the Binary search AI should run it’s while loop and keep track of the number of guesses it takes to find the enemy location. Once all players AI and Human have found the enemy location, then this game is over. Display the stats of each player's number of guesses it took. You don't have to physically sort them, just display the number of guesses each drone pilot took to find the enemy.
Be sure to comment each line of code except cout statements, write very readable code using good coding standards.
The Grid does not need to be displayed, remember the grid is abstract. Think of this as more of a guess the number game like at the end of chapter two.
When all the players have found the enemies, the game is over, the console should ask the human player if they would like to play again. If the human player say's yes, then the game should reset all scores and play again.
Put this new project into a new GitHub repostiory and take a screenshot of it.
Your code should be well formatted and with lots of comments explaining your code.
*/

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
	// This is the search grid that will be for all 4 search methods
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
	
	// AI Random Search Variables
	bool isenemylocated_Random = false;
	int pingnumber_Random = 0;
	
	
	
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
		// Increments the pingnumber_Human variable by 1 every time the while loop runs
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

	// AI Random Search
	while (isenemylocated_Random == false)
	{





	}
	
	
	
	
	
	
	
	
	
	// Linear Search Pattern Code
	while (isenemylocated_Linear == false)
	{
		
		// Keeps the code from only running two times
		// Increments the targetGuess_Linear variable by 1 every time the while loop runs
		targetGuess_Linear = ++targetGuess_Linear;
		// Increments the pingnumber_Linear variable by 1 every time the while loop runs
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
	cout << "===========================================================" << endl;
	// Displays the number of times it took for the linear search method to find the target
	cout << "Linear Search Attempts: " << pingnumber_Linear << endl;
	// Displays the number of times it took for the human search method to find the target
	cout << "Human Search Attempts: " << pingnumber_Human << endl;
	cout << "===========================================================" << endl;
	
	
	system("pause");

	return 0;
}

