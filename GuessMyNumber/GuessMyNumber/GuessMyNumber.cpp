﻿#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	cout << "\tWelcome to Guess My Number\n\n";

	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;
		if (guess > secretNumber) {
			cout << "Too hight!\n\n";
		}
		else if (guess < secretNumber) {
			cout << "Too low\n\n";
		}
		else {
			cout << "\nThat is it! You got it in " << tries << " guesses!\n";
		}

	} while (guess != secretNumber);
}
