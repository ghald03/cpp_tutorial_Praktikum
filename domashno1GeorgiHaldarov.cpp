#include <iostream>


const int MAX_SIZE = 100;
//
//void printMessage(char*) {
//
//}

//задача 2
const int BOARD_SIZE = 8;

void boardCoordinates() {
	int chessBoard[BOARD_SIZE][BOARD_SIZE];
	int coordinate = 0;
	char letterCoordinate = 'a';
	int numberCoordinate = 8;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			++coordinate;
			chessBoard[i][j] = coordinate;
			std::cout << "_|";
			if (coordinate % 8 == 0) {
				std::cout << numberCoordinate << "\n";
				--numberCoordinate;
			}
		}
	}
	do { std::cout << letterCoordinate << " "; ++letterCoordinate;}
		while (letterCoordinate < 'i');
}

//void numCoord() {
//	int chessBoard[BOARD_SIZE][BOARD_SIZE];
//	int coordinate = 0;
//	int newLine = 8;
//	char letterCoordinate = 'a';
//	for (int i = 0; i < 8; ++i) {
//		for (int j = 0; j < 8; ++j) {
//			++coordinate;
//			chessBoard[i][j] = coordinate;
//			std::cout << coordinate << " ";
//			if (coordinate % 8 == 0) {
//				std::cout << newLine << "\n";
//				--newLine;
//			}
//		}
//	}
//	do { std::cout << letterCoordinate << "  "; ++letterCoordinate; } 
//	while (letterCoordinate < 'i');
//}


int main() {
	std::cout << "Board 1:\n";
	boardCoordinates();
	//std::cout << "\n" << "\n" << "Board 2:\n";
	//numCoord();

	int board[8][8];
	char letterPosition;
	char numberPosition;
	char move1, move2;
	int moves = 0;
	char lastPosition1, lastPosition2;
	std::cout << "\nKnight starting position: ";
	std::cin >> letterPosition >> numberPosition;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			board[i][j] = 0;
		}
	}

	board[letterPosition][numberPosition] += 1;
	do {
		std::cout << "Move: ";
		std::cin >> move1 >> move2;
		/*switch (move1) {
		case 'u':
		}
		if () {
			std::cout << "Valid move";
		}
		++moves;*/
	} while (moves <= 100);



	return 0;
}