#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>

class Estudiante{
    private:
        std::string nombre;
        int edad;
        int codigo;
        std::string carrera;
    public:
        Estudiante(std::string nombre, int edad, int codigo, std::string carrera) : nombre(nombre), edad(edad), codigo(codigo), carrera(carrera){}

        std::string getnombre()const{
            return nombre;
        }
        std::string getcarrera()const{
            return carrera;
        }
        int getedad()const{
            return edad;
        }
        int getcodigo()const{
            return codigo;
        }
};

#endif