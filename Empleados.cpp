#include "Empleados.h"

Empleados::Empleados(){

}

Empleados::Empleados(int Horas, string Local, int Ordenes, string Nombre, string Id, int Edad):Personas(Nombre, Id, Edad){
    horas = Horas;
    local = Local;
    ordenes = Ordenes;
}

int Empleados::getHoras(){
    return horas;
}

void Empleados::setHoras(int Horas){
    horas = Horas;
}

string Empleados::getLocal(){
    return local;
}

void Empleados::setLocal(string Local){
    local = Local;
}

int Empleados::getOrdenes(){
    return ordenes;
}

void Empleados::setOrdenes(int Ordenes){
    ordenes = Ordenes;
}

int Empleados::ganancias(){
    return 30*ordenes+ordenes;
}

string Empleados::toString(){
    string lista= "Empleados: ";
    lista += "Horas: ";
    lista += horas;
    lista += " Local: ";
    lista += local;
    lista += " Ordenes: ";
    lista += ordenes;
    return lista;
}