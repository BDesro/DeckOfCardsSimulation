#include <stdlib.h>
#include "Deck.h"

Deck::Deck()
{
	int index = 0;
	for (int suit = 0; suit < 4; suit++)
	{
		for (int value = 1; value <= 13; value++)
		{
			cards[index++] = new Card(value, suit);
		}
	}

	curIndex = 0;
}

Deck::~Deck()
{
	for (int i = 0; i < 52; i++)
	{
		delete cards[i];
	}
}

Card* Deck::dealCard()
{
	if (curIndex < 52)
		return cards[curIndex++];
	else
		return NULL; //No more cards left
}

void Deck::shuffle()
{
	srand(time(NULL));
	for (int i = 51; i > 0; i--)
	{
		int j = rand() % (i + 1);
		Card* temp = cards[i];
		cards[i] = cards[j];
		cards[j] = temp;
	}
	curIndex = 0;
}