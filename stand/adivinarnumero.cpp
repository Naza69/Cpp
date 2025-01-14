#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
	cout << "Hola! A continuacion, se elegira un numero al azar entre 1 y 10, adivinelo!" << endl; 
	int randomNum = rand() % 11; 	
	int guess; 	
	
	while(randomNum != guess){
		cout << "Adivine: ";
		cin >> guess;
		if(guess == randomNum){
			cout << "Enhorabuena, ha adivinado, era: " << randomNum << endl;
			break;

		} else {
			cout << "No es ese, vuelva a intentarlo!" << endl;	
			continue;	
	
		}
	
	}	
	return 0; 
}
