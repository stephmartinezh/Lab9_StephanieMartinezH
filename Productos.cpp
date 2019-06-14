#include "Productos.h"

Productos::Productos(string Nombre, bool Tipo){
    nombre = Nombre;
    tipo = Tipo;
}

string Productos::toString(){
    string lista = "Nombre del producto: ";
    lista += nombre;
    string comestible;
    if(tipo){
        comestible = "Si es comestible";
    }else{
        comestible = "No es comestible";
    }
    lista += " ";
    lista += comestible;
    return lista;
}