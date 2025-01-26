#include <iostream>
#include <string> 
#include <cstring>
using namespace std;

int main(){
	string sentence; 
	int counter = 0;
	cout << "A continuacion, ingrese una cadena:" << endl;
	getline(cin, sentence);
	string emptysentence = "";

	for(int i = 0; i < sentence.length(); i++){
		if(sentence[i] == ' ' && i + 1 < sentence.length() && sentence[i+1] != ' '){
			if(sentence[i+1] != '.' && i != sentence.length()-1){
				
				counter++;
			}
		
		}			


	}	
	if(!sentence.empty() && sentence[0] != ' '){
		counter++;
	}
	cout << "La cadena ingresada tiene un total de " << counter << " palabras." << endl;
	
	return 0;	

}
