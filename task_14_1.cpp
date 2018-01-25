/**
 * Task 14.1 is to writhe a game in which you
 * can guess a number in six attempts.
 * If you guess wrong the program has too hint
 * if the given number is below or above the
 * hidden number.
 * 
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int hidden(0);
	int guess(0);
	int rounds(6);
	char con('Y');
	bool run(true);

	srand(time(NULL));

	do
	{
		/**
		 * Generates the number
		 */
		cout << "Generate number." << endl;
		hidden = rand() % 100 + 1;

		/**
		 * For loop to enter the six attempts.
		 */
		for(int i = 0; i < rounds; i++)
		{

			/**
			 * Enter a attempt.
			 */
			cout << "Enter the " << i + 1 << ". number: ";
			cin >> guess;
			
			/**
			 * Check if the guess is above, below or right.
			 */
			if(hidden < guess) // if the guess is above.
			{
				cout << "The searched number is smaller." << endl;
			}
			else if(hidden > guess) // if the guess is below.
			{
				cout << "The searched number is greater." << endl;
			}
			else // if the guess is correct.
			{
				cout << "Congratulations! You have guessed the number " << hidden << endl;
				cout << "You needed " << i + 1 << " attempts" << endl;
				break; 
			}

		}

		cout << "Do you want to continue? [Y/n]: ";
		cin >> con;
		cin.clear();

		if('n' == con){
			run = false;
		}

	} while(run);

	cout << "bye." << endl;

	return 0;
}