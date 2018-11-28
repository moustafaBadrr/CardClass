#ifndef _card_h
#define _card_h

#include <iostream>
#include <string>

using namespace std;

// special cases from rank .....
const int ACE = 1;
const int JACK = 11;
const int QUEEN = 12;
const int KING = 13;

enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };

class Card {

public:

	Card();  // a default constructor
	Card(string short_string); //a constructor has no lazma  but it's a required
	Card(int r, Suit s); // a constructor  take the rank & suit
	int getRank();  // get the rank
	Suit getSuit(); // get the suit
    char integerToString(int num);  // function that convert the integer number to string
	string toString();   // return the rank & suit as string
	friend Suit operator++(Suit &suit, int); // overloaded function to suit ++
	friend ostream &operator<<(ostream &out, Card c); // overloaded function to print

private:

	Suit suit;
	int rank;

};



Suit operator++(Suit &suit, int);

#endif
