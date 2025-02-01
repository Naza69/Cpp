#include <iostream>
#include <array>
#include <string>
using namespace std;

class piece {
	public:
		int value;
		string position;

		piece(int val, string pos){
			value = val;
			position = pos;
		};
		piece();

};

class pawn: public piece {
	public: 
		int moveNoPointi = 1;
		int movePointi = 1;
		int movePointj = 1;	

		pawn(int moveNoPointi, int movePointi, int movePointj){
			moveNoPointi = moveNoPointi;
			movePointi = movePointi;
			movePointj = movePointj;
		};

		pawn();
};

class rook: public piece {
	public: 
		int movei = 8;
		int movej = 8;

		rook(int movei, int movej){
			movei = movei;
			movej = movej;
		}

		rook();


};

void printBoard(int boardLocal[8][8]){
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << "[ " << boardLocal[i][j] << " ]";	
		
		}	
		cout << "" << endl;

	}

}

int fillBoard(int boardLocal[8][8]){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			int axisi = i;
			int axisj = j;
			string positionToFill = to_string(axisi) + to_string(axisj);	
			if(positionToFill == "00"){
					
			}

			if(axisi != 1 && axisi != 0 && axisi != 6 && axisi != 7){
				boardLocal[i][j] = 0;

			}


		}

	}
	return boardLocal;

}


int main(){
	int board[8][8];
	printBoard(board);



}
