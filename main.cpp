#include <string>

// Constants for piece types
int const PAWN = 0;
int const KNIGHT = 1;
int const BISHOP = 2;
int const ROOK = 3;
int const QUEEN = 4;
int const KING = 5;

// Constants for board file letters
int const A = 0;
int const B = 1;
int const C = 2;
int const D = 3;
int const E = 4;
int const F = 5;
int const G = 6;
int const H = 7;

// The class for chess pieces
class Piece {
	
	public:
		int type;
		int rank_pos;
		int file_pos;
};

// Intialize the chess board
void init_board() {

	Piece white_a_pawn;
	white_a_pawn.type = PAWN;
	white_a_pawn.rank_pos = 2;
	white_a_pawn.file_pos = A;
}

int main() {

	init_board();
	return 0;
}
