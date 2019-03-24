// HK_Ariel_WarGames.cpp : Defines the entry point for the console application
/*
OBJECTIVE
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

		// Continues Loop
		if (targetGuess_Human != enemyLocation)
		{
			cout << "Attempt " << pingnumber_Human << endl;
			cout << "Checking Square " << targetGuess_Human << endl;
			cout << "No Hostiles Detected" << endl;
		}

		// Breaks Loop
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

	// Used to seperate the seach methods in the CMD
	cout << "=============================================================================================" << endl;

	// AI Random Search
	while (isenemylocated_Random == false)
	{
		// Guesses where the enemy might be
		int randomAIguess = rand() % gridMax + gridMin;
		pingnumber_Random++;

		// Code that runs if the program does pick the correct coordinate that the enemy is located at
		// Continues loop
		if (randomAIguess != enemyLocation) 
		{
			cout << "Attempt: " << pingnumber_Random << endl;
			cout << "Checking Coordinate: " << randomAIguess << endl;
			cout << "NO ENEMIES DETECTED" << endl;
		}
		// Code that runs once that target is found
		// Breaks loop
		if (randomAIguess == enemyLocation)
		{
			cout << "Attempt: " << pingnumber_Random << endl;
			cout << "Checking Coordinate: " << randomAIguess << endl;
			cout << "Target Found at " << randomAIguess << endl;
			isenemylocated_Random = true;
		}
	}
	
	// Used to seperate the seach methods in the CMD
	cout << "=============================================================================================" << endl;

	// Linear Search Pattern Code
	while (isenemylocated_Linear == false)
	{

		// Keeps the code from only running two times
		// Increments the targetGuess_Linear variable by 1 every time the while loop runs
		targetGuess_Linear = ++targetGuess_Linear;
		// Increments the pingnumber_Linear variable by 1 every time the while loop runs
		pingnumber_Linear++;

		// Continues Loop
		if (targetGuess_Linear != enemyLocation)
		{
			cout << "Attempt " << pingnumber_Linear << endl;
			cout << "Checking Square " << targetGuess_Linear << endl;
			cout << "No Hostiles Detected" << endl;
		}

		// Breaks Loop
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
	
	// Used to seperate the seach methods in the CMD
	cout << "=============================================================================================" << endl;

	// AI Binary Pattern Search Code
	while (isenemylocated_binary == false)
	{
		// Code that makes the guess for where the target is
		// This line also creates the variable for the Binary guess
		int binaryAIguess = ((gridMax - gridMin) / 2) + gridMin;
		pingnumber_binary++;

		// Code that runs if the binaryAIguess is higher then the enemylocation
		// Continues Loop
		if (binaryAIguess > enemyLocation)
		{
			cout << "Attempt " << pingnumber_binary << endl;
			cout << "Checking Square " << binaryAIguess << endl;
			cout << "No Hostiles Detected" << endl;
			// Lowers the highest possible search number
			gridMax = binaryAIguess - 1;
			// Displays new search parameters
			cout << "Highest Search Parameter: " << gridMax << endl;
			cout << "Lowest Search Parameter: " << gridMin << endl;
		}

		// Code that runs if the binaryAIguess is lower then the enemylocation
		// Continues Loop
		if (binaryAIguess < enemyLocation)
		{
			cout << "Attempt " << pingnumber_binary << endl;
			cout << "Checking Square " << binaryAIguess << endl;
			cout << "No Hostiles Detected" << endl;
			// Increases the lowest possible search number
			gridMin = binaryAIguess + 1;
			cout << "Highest Search Parameter: " << gridMax << endl;
			cout << "Lowest Search Parameter: " << gridMin << endl;
		}
		// Code that runs if the binaryAIguess is equal to the enemylocation
		// Breaks Loop
		if (binaryAIguess = enemyLocation)
		{
			cout << "Attempt " << pingnumber_binary << endl;
			cout << "Checking Square " << binaryAIguess << endl;
			cout << "Target Found at " << binaryAIguess << endl;
			isenemylocated_binary = true;
		}
	}

	// Final Results
	cout << "===========================================================" << endl;
	// Displays the number of times it took for the linear search method to find the target
	cout << "Linear Search Attempts: " << pingnumber_Linear << endl;
	// Displays the number of times it took for the human search method to find the target
	cout << "Human Search Attempts: " << pingnumber_Human << endl;
	// Displays the number of times it took for the random search method to find the target
	cout << "Random Search Attempts: " << pingnumber_Random << endl;
	// Displays the number of times it took for the binary search method to find the target
	cout << "Binary Search Attempts: " << pingnumber_binary << endl;
	cout << "===========================================================" << endl;
	
	
	system("pause");

	return 0;
}

