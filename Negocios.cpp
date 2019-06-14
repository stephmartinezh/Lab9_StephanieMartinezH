#include "Negocios.h"

Negocios::Negocios(string Nombre, string Ubicacion, int Locales){
    nombre = Nombre;
    ubicacion = Ubicacion;
    locales = Locales;
}

vector<Productos*> Negocios::getProductos(){
    return productos;
}

string Negocios::getNombre(){
    return nombre;
}

string Negocios::toString(){
    string lista = "Nombre: ";
    lista += nombre;
    lista += " Ubicación: ";
    lista += ubicacion;
    lista += "Locales: ";
    lista += locales;
    for (int i = 0; i < productos.size(); i++)
    {
        lista += productos[i]->toString();
    }
    return lista;
}