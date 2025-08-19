#include <iostream>
#include <vector>
using namespace std;

int main()
{    
    int opcion;

    while (opcion != 3) {
        std::cout << " === Gestor de Tareas === " << std::endl;
        std::cout << "1. Agregar tarea" << std::endl;
        std::cout << "2. Listar tareas" << std::endl;
        std::cout << "3. Salir" << std::endl;

        std::cout << "Opcion: ";

         std::cin >> opcion; 
        }



    return 0;
}