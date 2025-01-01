#include <iostream>
#include <cstdlib> 
#include <unistd.h>
#include <format>
using namespace std; 

int main(){
	int out = 0;
	while(out != 1){
	
		int time; 
		cout << "Eliga la cantidad de tiempo que desea ver la matriz flashera (Segundos): ";		
		cin >> time;	
		int counter = time;	
		for(int a = 0; a <= time; a++){
							

			int matrix[3][3] = {
				{rand() % 5, rand() % 5, rand() % 5},
				{rand() % 5, rand() % 5, rand() % 5},
				{rand() % 5, rand() % 5, rand() % 5}	
			};
			
			for(int i = 0; i <= sizeof(matrix); i++){
				for(int j = 0; j <= sizeof(matrix[i]); j++){
					cout <<  "\r[" << matrix[i][j] << "]" << flush;	
				
				}
				cout << "\r" << flush << endl;	
		
			};
			usleep(200000);
			cout << "\r" << flush;	
		}
		cout << "Quiere volver a repetir el proceso? (1 para si, 0 para no)" << endl;
		cin >> out;
		while(out != 1 && out != 0){
			cout << "ERROR: Solo puede ingresar 0 o 1 (1 para salir, 0 para volver a repetir el proceso)" << endl;
			cin >> out;	
	
		};	
	}

	return 0;

}
