#include <iostream>
#include <string>
#include <format>

int main() {
    std::string message = std::format("Hola, {}!", "mundo");
    std::cout << message << std::endl;
    return 0;
}

