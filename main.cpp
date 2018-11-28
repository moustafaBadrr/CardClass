#include <iostream>

#include "Card.h"

using namespace std;


int main() {

	for (Suit suit = CLUBS; suit <= SPADES; suit++) {
		for (int rank = ACE; rank <= KING; rank++) {
			cout << " " << Card(rank, suit);
 		}
 		cout << endl;
	}


	return 0;
}
