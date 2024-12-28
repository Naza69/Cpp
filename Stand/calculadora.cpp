#include <iostream>
using namespace std;
#include <string>

int main() {
	int num1;
	int num2;
	string selection;
	cout << "Hola! Seleccione la operacion que desea llevar a cabo!" << endl;
	
	cout << "1) Suma\n" << "2) Resta\n" << "3) Multiplicacion\n" << "4) Division\n";
	cin >> selection;
	cout << selection << endl;
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

	}
	}	
	return 0;

}
