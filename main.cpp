#include <iostream>

// Constants for piece types
int const ES = 0; // Empty square (no piece)
int const PAWN = 1;
int const KNIGHT = 2;
int const BISHOP = 3;
int const ROOK = 4;
int const QUEEN = 5;
int const KING = 6;

// Constants for board file letters
int const A = 0;
int const B = 1;
int const C = 2;
int const D = 3;
int const E = 4;
int const F = 5;
int const G = 6;
int const H = 7;

// Function that prints out chess board representation for testing
void print_board(int board[8][8]) {

	for(int i = 0; i < 8; i++) {
	
		for(int j = 0; j < 8; j++) {
		
			std::cout << board[i][j] << " ";
		}

		std::cout << "\n";
	}
}

int main() {

	// Initialize the chess board
	int board[8][8] = {
	
		{ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK},
		{PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
		{ES, ES, ES, ES, ES, ES, ES, ES},
		{ES, ES, ES, ES, ES, ES, ES, ES},
		{ES, ES, ES, ES, ES, ES, ES, ES},
		{ES, ES, ES, ES, ES, ES, ES, ES},
		{PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
		{ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK}
	};

	print_board(board);
	return 0;
}
