#include <iostream>
using namespace std;
#include <string>

int main() {

	int out = 0;

	while(out == 0){
	
		int num1;
		int num2;
		string selection;
		cout << "Hola! Seleccione la operacion que desea llevar a cabo!" << endl;
	
		cout << "1) Suma\n" << "2) Resta\n" << "3) Multiplicacion\n" << "4) Division\n";
		cin >> selection;

		if(selection != "1" && selection != "2" && selection != "3" && selection != "4"){
			cout << "La opcion no coincide con ninguna listada. Intentelo de nuevo" << endl;

		} else { 

		if (selection == "1"){
			cout << "Primer numero: "; 
			cin >> num1;

			cout << "Segundo numero: ";
			cin >> num2; 

			cout << "Resultado: " << num1 + num2 << endl;
		} 
		if (selection == "2"){
			cout << "Primer numero: ";
			cin >> num1; 

			cout << "Segundo numero: ";
			cin >> num2; 

			cout << "Resultado: " << num1 - num2 << endl;  
		} 
		if (selection == "3"){
			cout << "Primer numero: "; 
			cin >> num1; 

			cout << "Segundo numero: ";
			cin >> num2; 

			cout << "Resultado: " << num1 * num2 << endl;
		}
		if (selection == "4"){
			cout << "Primer numero: ";
			cin >> num1;

			cout << "Segundo numero (Divisor): "; 
			cin >> num2; 

			if (num2 == 0){
		 		cout << "No se puede dividir por cero, ingrese otro numero" << endl;	
			} else {
				cout << "Resultado: " << num1 / num2 << endl;
			}
		}
	
	}
		cout << "Quiere hacer otra operacion? (0 para si, otro numero para no)" << endl;
		cin >> out;
	}
		return 0;

}
