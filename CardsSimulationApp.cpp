#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Deck.h"

int main()
{
	Deck* deck = new Deck();
	deck->shuffle();

	int guessValue;
	int guessSuit;

	char answer = 'y';
	while (answer == 'y')
	{
		printf("\nGuess a card (1-13) and a suit (0:Hearts 1:Diamonds 2:Clubs 3:Spades) ");
		printf("separated by a space: ");

		scanf("%d", &guessValue);
		scanf("%d", &guessSuit);

		if (guessValue < 1 || guessValue > 13 || guessSuit < 0 || guessSuit > 3)
		{
			printf("Out of bounds, try again");
			continue;
		}

		Card* dealtCard = deck->dealCard();
		if (dealtCard == NULL)
		{
			printf("No cards left to deal\n");
			return 1;
		}
		
		if (dealtCard->getValue() == guessValue && dealtCard->getSuit() == guessSuit)
		{
			printf("You guessed correctly! It was the ");
			dealtCard->display();
		}
		else
		{
			Card* guessedCard = new Card(guessValue, guessSuit);
			printf("Your guess was incorrect. You guessed the "); 
			guessedCard->display();
			printf(" and the dealt card was the ");
			dealtCard->display();

			delete guessedCard;
		}

		printf("\nWould you like to try again? (y/n): ");
		scanf(" %c", &answer);
	}
	printf("\nHave a great day!\n");

	delete deck;

	return 0;
}