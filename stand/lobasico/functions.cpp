#include <iostream>

int summatory(int aLocal, int bLocal);
float substraction(float aLocal, float bLocal);
float division(float aLocalDividend, float bLocalDivisor);
float multiplication(float aLocal, float bLocal);

int main() {
    
    std::cout << "Hola, ingrese dos numeros porfavor: " <<std::endl;
    int aGlobal = 0;
    int bGlobal = 0;
    std::cout << "Primer numero: ";
    std::cin >> aGlobal;
    std::cout << "Segundo numero: ";
    std::cin >> bGlobal;



    std::cout << "La suma de los numeros es: " << summatory(aGlobal, bGlobal) << std::endl;

    std::cout << "La resta de los numeros es: " <<substraction(aGlobal, bGlobal) << std::endl;

    std::cout << "La division de los numeros es: " << division(aGlobal, bGlobal) << std::endl;

    std::cout << "La multipliacion de los numeros es: " << multiplication(aGlobal, bGlobal) << std::endl;

    aGlobal = float(aGlobal);

    // std::cout << "La resta de los numeros es: " << substraction(aGlobal, bGlobal);

    // std::cout << "Info: " << typeid(aGlobal).name();

    return 0;
}

int summatory(int aLocal, int bLocal) {
    return aLocal + bLocal;
}

float substraction(float aLocal, float bLocal){
    if(aLocal > bLocal){
        return aLocal - bLocal;
    } else {
        return bLocal - aLocal;
    }
}

float division(float aLocalDividend, float bLocalDivisor){
    if(bLocalDivisor != 0){
        return aLocalDividend / bLocalDivisor;
    } else {
        return 0;
    }
}

float multiplication(float aLocal, float bLocal){
    return aLocal * bLocal;
}