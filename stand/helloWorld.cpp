
#include<iostream>
// La libreria de la que depende el comando o palabra reservada cout es iostream, que vendria a significar
// "flujo de entrada y salida" (In and Out Stream, iostream). Basicamente, lo que permite hacer operaciones
//  de entrada y salida con la consola

// #include<math.h>

#include<string>
// String no es primitivo en c++, se necesita incluirlo para poder usarlo, y se declara con el standard

#include<array>
// Lo mismo parece que ocurre con las estructuras de datos

int main() {
    // Aca estoy simplemente mostrando un mensaje por pantalla
    // Std significa standard, el "::" es la forma de c++ de extender o usar una libreria, en ella, el
    // componente compiler output, que se abrevia cout
    std::cout << "Hello world" << std::endl;
    std::cout << "Soy Nazareno, que onda, esto es c++" << std::endl;

    // La definicion de variables dentro de c++ no es muy distinta de muchos otros lenguajes:
    // tipoDeDato identificador = valor
    int number = 0;
    
    // La libreria del manejo de flujo de datos, identifica la extraccion con los picos << y 
    // la insercion o envio con los picos >> 
    
    // Aca un ejemplo, con la variacion in del componente c para permitir la extraccion en el entero
    // definido anteriormente
    std::cout << "Ingrese un numero: " <<std::endl;
    std::cin >> number;
    std::cout << "El numero ingresado es: " << number <<std::endl;

    // Detallito, std::endl no afecta al flujo normal del programa, es un simple salto de linea


    // Tipos de datos primitivos sin necesidad de uso del metodo standard std
    char character = 'a';
    bool boolean = true;
    float balloon = 1.3; 
    double doubleBallon = 1.333;
    long longBallon = 1.1234;
    
    std::string commonString;
    std::cout << "Ingrese una cadena: ";
    std::cin >> commonString;
    std::cout << "La cadena ingresada es: " << commonString <<std::endl;

    // Podes declarar estructuras de datos complejas con las librerias estandar para ellas
    std::array miPrimerArray = {1, 2, 3, 5};

    // Estructuras de control

    // If simple, deble, anidado y multiple
    if (commonString == "Nazareno"){

        if(commonString == "Nazareno Fioretti") {
            std::cout << "Manso, escribite tu nombre completo, dueño de esta compu :)";
        }

        std::cout << "Eh! Vos sos el dueno de esta compu! Sos: " << commonString <<std::endl;
    } else if (commonString == "Homero") {
        std::cout << "Douh!";
    } else {
        std::cout << "No sos el dueno de esta compu, sos cualquiera" << std::endl;
    
    }

    // For
    std::cout << "Numeros del array: ";
    for (int i = 0; i < miPrimerArray.size() ; i++) {
        if(i == miPrimerArray.size() - 1){
            std::cout << miPrimerArray[i] <<std::endl;
        } else {
            std::cout << miPrimerArray[i] << ", ";
        }
        
    }

    // While
    std::string expString = "Naza";
    int counter = 0;
    while(counter < expString.size()) {
        std::cout << expString[counter] << std::endl;
        counter++;
    }

    // Do while
    int guessNumber = std::rand() % 10;
    int guess = 0; 
    do {
        
        std::cout << "Ingrese un numero para adivinarlo: ";
        std::cin >> guess;
    } while (guessNumber != guess);
    std::cout << "Ha adivinado el numero! Era: " << guessNumber;

    return 0;
}

