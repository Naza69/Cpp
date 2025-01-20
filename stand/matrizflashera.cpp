#include <iostream>
#include <cstdlib> 
#include <unistd.h>
#include <format>
using namespace std; 


void clearConsole() {
	cout << "\033[2J\033[H";

}

int main(){
	int out = 0;
	while(out != 1){
	
		int time; 
		cout << "Eliga la cantidad de tiempo que desea ver la matriz flashera (Segundos): ";		
		cin >> time;	
		int counter = time;	
		for(int a = 1; a <= 10; a++){

			int v1 = rand() % 5, v2 = rand() % 5, v3 = rand() % 5; 
			
			int v4 = rand() % 5, v5 = rand() % 5, v6 = rand() % 5;

			int v7 = rand() % 5, v8 = rand() % 5, v9 = rand() % 5;
			
			int matrix[3][3] = {
				{v1, v2, v3},
				{v4, v5, v6},	
				{v7, v8, v9}	
			};

			clearConsole();
			
			for(int i = 0; i < 3; i++){
				for(int j = 0; j < 3; j++){
					cout <<  "[" << matrix[i][j] << "]";	
				
				}
				cout << "" << endl;
			};
			usleep(90000);
		}
		cout << "" << endl;
		cout << "Quiere volver a repetir el proceso? (1 para no, 0 para si)" << endl;
		cin >> out;
		while(out != 1 && out != 0){
			cout << "ERROR: Solo puede ingresar 0 o 1 (1 para salir, 0 para volver a repetir el proceso)" << endl;
			cin >> out;	
	
		};	
	}

	return 0;

}
