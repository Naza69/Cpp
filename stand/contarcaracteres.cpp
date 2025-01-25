#include <iostream>
#include <string>
using namespace std;

int main() {

	string sentence;
        char tofind;
	int counter = 0;
	cout << "Hola! A continuacion, ingrese una cadena, y eliga un caracter para contar su aparicion en la cadena ingresada: ";
	cin >> sentence;
	
	cout << "Genial, ahora ingrese el caracter a contar" << endl;

	cin >> tofind;	

	for(int i = 0; i < sentence.length(); i++){
		if(sentence[i] == tofind){
			counter++;
	
		
		}
	}

	if(counter > 0){
		cout << "La aparicion del caracter seleccionado en la cadena ingresada es de: " << counter << endl;
	} else {
		cout << "Ese caracter no existe en la cadena ingresada" << endl;

	}
	return 0;

}
