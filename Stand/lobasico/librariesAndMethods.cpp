#include <iostream>

// La libreria <utility> contiene como el nombre lo dice, funciones, plantillas de utilidad general
#include <utility>

// La libreria <cmath> contiene funciones y plantillas para realizar operaciones matematicas simples y
// complejas
#include <cmath>


int main(){
    int a = 1;
    int b = 2;

    // Aca estoy usando la funcion swap de la libreria standard de cpp de utilidad general <utlity>
    // Cambia los valores de las variables sin la necesidad de una sentencia que las redefina
    std::cout << "A: " << a << " B: " << b << std::endl;

    std::swap(a, b);
    
    std::cout << "A: " << a << " B: " << b << std::endl;

    // Aca estoy usando la funcion pow de cmath para elevar un numero a 2
    int c = pow(1, 2);
    
    // Y aca uso la funcion floor de la misma libreria para redondear
    double d = 2.5;
    int e = floor(d);

    // Aca estoy truncando
    double f = trunc(1.5);
    
}

