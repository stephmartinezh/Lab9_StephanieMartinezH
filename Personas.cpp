#include "Personas.h"

Personas::Personas(){

}

Personas::Personas(string Nombre, string Id, int Edad){
    nombre = Nombre;
    identidad = Id;
    edad = Edad;
}

string Personas::getNombre(){
    return nombre;
}

void Personas::setNombre(string Nombre){
    nombre = Nombre;
}

string Personas::getIdentidad(){
    return identidad;
}

void Personas::setIdentidad(string Id){
    identidad = Id;
} 

int Personas::getEdad(){
    return edad;
}
