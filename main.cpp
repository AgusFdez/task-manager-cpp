#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class Tarea {
    private:
        int id;
        std::string descripcion;
        bool estado;

    public:
        //constructor
        Tarea(int id, std::string descripcion)
            : id(id), descripcion(descripcion), estado(false) {}

        //metodos
        void marcarestado() {estado = true; }
        void mostrar() const{
            cout << "[" << id << "] " << descripcion
                 << (estado ? " (Completada)" : " (Pendiente)") << endl;
        }

        //getters
        int getId() const { return id; }
        std::string getDescripcion() const { return descripcion;}
        bool estaestado() const { return estado; }
};

int main()
{    
    int opcion = 0;
    int ultimoId = 0;
    std::vector<Tarea> tareas;

    while (opcion != 3) {
        system("clear");

        switch(opcion){
        case 0: {
            std::cout << " === Gestor de Tareas === " << std::endl;
            std::cout << "1. Agregar tarea" << std::endl;
            std::cout << "2. Listar tareas" << std::endl;
            std::cout << "3. Salir" << std::endl << std::endl;
            std::cout << "Opcion: ";
            std::cin >> opcion;
            std::cin.ignore();
        } break;

        case 1: {
            std::string desc;
            std::cout << " Describa la tarea: ";
            getline(std::cin, desc);
            ultimoId++;
            Tarea tarea(ultimoId, desc);
            tareas.push_back(tarea);
            opcion = 0;
        } break;
        
        case 2: {
            std::cout << " === Lista de tareas === " << std::endl;
            for (int i = 0; i < tareas.size(); i++) {
                tareas[i].mostrar();
                std::cout << "------------------------" << std::endl;
            }
            std::cout << " Presione enter para volver al menu" << std::endl;
            std::cin.ignore();
            opcion = 0;

        } break;

        }
    }

    return 0;
}