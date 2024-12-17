#pragma once

#include <stdio.h>

class Card
{
private:
	int value; // 1-13 "Ace" to "King"
	int suit; // 0:Hearts 1:Diamonds 2:Clubs 3:Spades
public:
	Card(int value, int suit);
	int getValue();
	int getSuit(); 
	void display();
};