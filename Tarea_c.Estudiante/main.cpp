#include <iostream>
#include <vector>
#include "estudiante.h"
#include <fstream>
#include <sstream> 

int main(){
    std::vector<Estudiante> estudiantes;
    std::ifstream fuente ("archivo.txt");
    
    std::string linea;
    
    while(std::getline(fuente, linea)) {
        std::istringstream iss(linea);
        std::string nombre;
        std::string edad_str;
        std::string codigo_str;
        std::string carrera;
        
        std::getline(iss, nombre, ',');
        std::getline(iss, edad_str, ',');
        std::getline(iss, codigo_str, ',');
        getline(iss, carrera, ',');
        
        int edad = std::stoi(edad_str);
        int codigo = std::stoi(codigo_str);
        
        Estudiante estudiante(nombre, edad, codigo, carrera);
        estudiantes.push_back(estudiante);
    }
    
    fuente.close();

    for(const auto& estudiante : estudiantes) {
        std::cout << "Nombre: " << estudiante.getnombre() << "\n"
                << "Edad: " << estudiante.getedad() << "\n"
                << "Código: " << estudiante.getcodigo() << "\n"
                << "Carrera: " << estudiante.getcarrera() << "\n\n";
    }
    return 0;
}
