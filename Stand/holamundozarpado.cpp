#include <iostream>
#include <string>
#include <format>
#include <unistd.h>

using namespace std;

int main(){
	string helloworld = "Hola mundo";
	int counter = 0;
	string tem = "";	
	string temformat = format("\r{}", tem);

	while(counter <= helloworld.length()){	
		temformat = format("\r{}", tem);
		cout << temformat << flush;
		tem += helloworld[counter];
		counter += 1;

		usleep(200000);	
	}
	cout << "" << endl;
	return 0;
}
