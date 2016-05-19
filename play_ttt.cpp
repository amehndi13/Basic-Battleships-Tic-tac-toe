#include "tictactoe.h"
#include <iostream>

using namespace std;

void game1()
{
	TicTacToeGame tttg;
	
	// Initial state:
	
	// - - -
	// - - -
	// - - -
	
	GameResult result = tttg.attack_square(make_pair(1, 1));
	assert(result == RESULT_KEEP_PLAYING);
	
	// State after previous turn:
	
	// - - -
	// - O -
	// - - -
	
	result = tttg.attack_square(make_pair(0, 0));
	assert(result == RESULT_KEEP_PLAYING);
	
	// X - -
	// - O -
	// - - -
	
	// oops, already an X on this square
	result = tttg.attack_square(make_pair(0, 0));
	assert(result == RESULT_INVALID);

	// note: an invalid move doesn't count as a turn; still O's turn

	result = tttg.attack_square(make_pair(0, 1));
	assert(result == RESULT_KEEP_PLAYING);
	
	// X O -
	// - O -
	// - - -
	
	result = tttg.attack_square(make_pair(2, 1));
	assert(result == RESULT_KEEP_PLAYING);
	
	// X O -
	// - O -
	// - X -
	
	result = tttg.attack_square(make_pair(1, 0));
	assert(result == RESULT_KEEP_PLAYING);
	
	// X O -
	// O O -
	// - X -
	
	result = tttg.attack_square(make_pair(1, 2));
	assert(result == RESULT_KEEP_PLAYING);
	
	// X O -
	// O O X
	// - X -
	
	result = tttg.attack_square(make_pair(0, 2));
	assert(result == RESULT_KEEP_PLAYING);
	
	// X O O
	// O O X
	// - X -
	
	result = tttg.attack_square(make_pair(2, 0));
	assert(result == RESULT_KEEP_PLAYING);
	
	// X O O
	// O O X
	// X X -
	
	result = tttg.attack_square(make_pair(2, 2));
	assert(result == RESULT_STALEMATE);
	
	// X O O
	// O O X
	// X X O
	
	cout << "PASSED game 1" << endl;
}

int main(void)
{
	game1();
	// TODO: add more games as tests.
	return 0;
}