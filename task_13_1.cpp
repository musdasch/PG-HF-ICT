/**
 * The Task 13.1 is to write a program
 * which simulates a Galton's Board with 100
 * bullets.
 *
 * @author Tim Voegtli
 * @version 1.0
 */
#include <iostream>
#include <ctime>

using namespace std;

int main(){
	/**
	 * *Filds to count the fallen bullets. 
	 */
	int field[6];

	/**
	 * Count of filds.
	 */
	int fieldCount(sizeof(field)/sizeof(field[0]));
	
	/**
	 * Count of bullets. 
	 */
	int bullets(100);

	/**
	 * Set random seed.
	 */
	srand(time(NULL));

	/**
	 * Set all filds to zero bullets.
	 */
	for(int i = 0; i < fieldCount; i++){
		field[i] = 0;
	}
	
	/**
	 * Run for each bullet
	 */
	for(int i = 0; i < bullets; i++){
		int bullet(0);
		
		/**
		 * Run for each level
		 */
		for(int j = 0; j < fieldCount-1; j++){

			/**
			 * Random to the right.
			 */
			if(0 < rand() % 2 ){
				bullet++;
			}
		}

		/**
		 * Count the bullet in each field. 
		 */
		field[bullet]++;
	}

	/**
	 * Print result.
	 */
	for(int i = 0; i < fieldCount; i++){
		cout << field[i] << "   ";
	}

	return 0;
}