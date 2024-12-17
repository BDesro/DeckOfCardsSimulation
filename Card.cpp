#include "Card.h"

Card::Card(int value, int suit)
{
	this->value = value;
	this->suit = suit;
}

int Card::getValue()
{
	return value;
}

int Card::getSuit()
{
	return suit;
}

void Card::display()
{
	const char* values[] = { "","Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" };
	const char* suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	printf("%s of %s", values[value], suits[suit]);
}