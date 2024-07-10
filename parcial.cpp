#include <iostream>

int main() {
 int input;
while (true) {
std::cout << "Escribe un número (200 para detenerse): ";
 std::cin >> input;
if (input == 200) {
break;
 }
std::cout << "Has escrito: " << input << std::endl;
}
std::cout << "El ciclo se ha detenido." << std::endl;
 return 0;
}
