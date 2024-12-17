#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Card.h"

class Deck
{
private: 
	Card* cards[52];
	int curIndex;
public:
	Deck();
	~Deck();
	Card* dealCard();
	void shuffle();
};