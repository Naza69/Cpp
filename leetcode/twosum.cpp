#include <iostream>
#include <array>
using namespace std;

int main() {
	//Dado un array de numeros, retornar los indices de los numeros que
	//sumados den el numero 'target'
	int array_dimension;
	cout << "Ingrese la longitud del arreglo unidimensional: ";
	cin >> array_dimension;

	int numbers[array_dimension];
	cout << sizeof(numbers)/sizeof(numbers[0]) << endl;
	cout << "A continuacion, ingrese los numeros al array" << endl;
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){

		cout << "Ingrese el numero de la posicion " << i << ": ";
		cin >> numbers[i];


	}
	int target;	
	cout << "Bien ahora ingrese el numero target: ";
	cin >> target;
	int sums_target[array_dimension];

	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){	
		for(int j = 1; j < sizeof(numbers)/sizeof(numbers[0]); j++){
			if(numbers[i] + numbers[j] == target){
				sums_target[i] = numbers[i];
				sums_target[i+1] = numbers[j];

			}				
			
		}

	}

	cout << "Los numeros del array ingresado que sumados dan el numero target son los siguientes: [ ";
	for(int i = 0; i < sizeof(sums_target)/sizeof(sums_target[0]); i++){
		if(i != sizeof(sums_target)/sizeof(sums_target[0])-1){

			cout << sums_target[i] << ", ";	
			
		} else {
	
			cout << sums_target[i];

		}



	}
	cout << " ]" << endl;
}
