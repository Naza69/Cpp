#include <iostream>
#include <ncurses.h>
#include <termios.h>
#include <unistd.h>
using namespace std;

char getCharWithoutEnter(){
	char input;
	struct termios oldt, newt;
	tcgetattr(STDIN_FILENO, &oldt);

	newt = oldt;
	newt.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
       	input = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	return input;	

}


int main(){	

	while(true){

		cout << "Ingrese algo mediante el teclado (Para salir, use CTRL+C)" << endl;
		char ch = getCharWithoutEnter();	
		cout << "La tecla ingresada fue: " << ch << endl;


	}
	return 0;

}
