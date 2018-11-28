#include <iostream>
#include <string>
#include "card.h"

using namespace std;

Card::Card() {}

Card::Card(string short_string) {}

Card::Card(int r, Suit s)
{
    rank = r;
    suit = s;
}

int Card::getRank()
{
    return rank;
}

Suit Card::getSuit()
{
    return suit;
}

string suit_to_String(Suit s) // function that return the suit as string
{
    if (s == CLUBS )
        return "C";
    else if(s == DIAMONDS)
        return "D";
    else if(s == HEARTS)
        return "H";
    else if(s == SPADES)
        return "S";
    else
        return "Valid.....";
}

char Card::integerToString(int num)
{
    return (static_cast<char>(num) + '0');
}

string Card::toString()
{
    if (rank == 1)
        return "A" + suit_to_String(suit);
    else if (rank == 10)
        return "10" +suit_to_String(suit);
    else if (rank == 11)
        return "J" + suit_to_String(suit);
    else if (rank == 12)
        return "Q" + suit_to_String(suit);
    else if (rank == 13)
        return "K" + suit_to_String(suit);
    else
        return integerToString(rank) + suit_to_String(suit);
}


Suit operator++(Suit &suit, int)
{
    suit = Suit(suit + 1);

    return suit;
}

ostream &operator<<(ostream &out, Card c)
{
    out << c.toString();

    return out;
}

