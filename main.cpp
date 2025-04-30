#include <iostream>
#include <string>

// Constants for piece types
int const ES = 0; // Empty square (no piece)
int const PAWN = 1;
int const KNIGHT = 2;
int const BISHOP = 3;
int const ROOK = 4;
int const QUEEN = 5;
int const KING = 6;

// Constants that describe whether it is white or black to move
int const WHITE = 0;
int const BLACK = 1;

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

// Check a move to ensure it is valid
int valid_move(std::string move, int* board) {

	// I'll implement this later, for now I'll assume all moves to be valid
	return 1;
}

// Take a move that is already confirmed to be valid and update/return the board accordingly
// FORMULA: ((8 - RANK) * 8 ) + FILE = BOARD INDEX
int *make_move(std::string move, int* board) {

	return board;
}

int main() {

	// Initialize the chess board
	int *board = init_board();
	
	// Start the game 'loop', which runs until somebody wins
	int game_running = 1;
	int to_move = WHITE;

	// Set up variables that will be populated with each entered move
	int piece, file, rank;

	// TODO: Add end condition for loop (currently infinite)
	while(game_running) {
	
		// Check whose turn it is and prompt accordingly
		if(to_move == WHITE) {
		
			std::cout << "(White) Enter move: ";
		} else {
		
			std::cout << "(Black) Enter move: ";
		}

		// Get the move from user input
		std::cin >> piece >> file >> rank;
		
		std::cout << "Your move was Piece: " << piece << "File: " << file << "Rank: " << rank << "\n";
		to_move = (to_move + 1) % 2;
	}

	//Free the allocated board array
	delete[] board;

	return 0;
}
