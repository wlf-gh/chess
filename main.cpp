#include <iostream>

// Constants for piece types
int const ES = 0; // Empty square (no piece)
int const PAWN = 1;
int const KNIGHT = 2;
int const BISHOP = 3;
int const ROOK = 4;
int const QUEEN = 5;
int const KING = 6;

// Function that prints out chess board representation for testing
void print_board(int *board) {

	for(int i = 0; i < 64; i++) {

		std::cout << board[i] << " ";
		
		if ((i + 1) % 8 == 0) {
			std::cout << "\n";
		}
	}
}

// Initialize the chess board
int *init_board() {

	int *board = new int[64]{ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, 
		ROOK, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, ES, ES, ES, 
		ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, 
		ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, ES, PAWN, PAWN, PAWN, 
		PAWN, PAWN, PAWN, PAWN, PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING, 
		BISHOP, KNIGHT, ROOK};

	return board;
}

int main() {

	// Initialize the chess board
	int *board = init_board();
	
	// Print the board (for testing)
	print_board(board);

	//Free the allocated board array
	delete[] board;

	return 0;
}
