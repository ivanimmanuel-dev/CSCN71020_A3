#include "game.h"

const char* playGame(const char* player1Shape, const char* player2Shape)
{
	if (player1Shape == STR_ROCK && player2Shape == STR_ROCK)
		return STR_DRAW;
	else if (player1Shape == STR_ROCK && player2Shape == STR_PAPER)
		return STR_PLAYER2;
	else if (player1Shape == STR_ROCK && player2Shape == STR_SCISSORS)
		return STR_PLAYER1;
	else if (player1Shape == STR_PAPER && player2Shape == STR_ROCK)
		return STR_PLAYER1;
	else if (player1Shape == STR_PAPER && player2Shape == STR_PAPER)
		return STR_DRAW;
	else if (player1Shape == STR_PAPER && player2Shape == STR_SCISSORS)
		return STR_PLAYER2;
	else if (player1Shape == STR_SCISSORS && player2Shape == STR_ROCK)
		return STR_PLAYER2;
	else if (player1Shape == STR_SCISSORS && player2Shape == STR_PAPER)
		return STR_PLAYER1;
	else if (player1Shape == STR_SCISSORS && player2Shape == STR_SCISSORS)
		return STR_DRAW;
	else
		return STR_INVALID;
}

int main()
{
    return 1;
}
