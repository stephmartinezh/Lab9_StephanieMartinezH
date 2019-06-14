#include "Ordenes.h"

Ordenes::Ordenes(Clientes* Clientes, Negocios* Negocio, Repartidores* Repartidor, bool Tipo, string Estado){
    clientes = Clientes;
    negocio = Negocio;
    repartidor = Repartidor;
    tipo = Tipo;
    estado = Estado;
}

string Ordenes::toString(){
    string lista = "Cliente: ";
    lista += clientes->getNombre();
    lista += " Negocio: ";
    lista += negocio->getNombre();
    lista += " Repartidor: ";
    lista += repartidor->getNombre();
    string tipoC;
    if(tipo){
        tipoC = "Si es comestible";
    }else{
        tipoC = "No es comestible";
    }
    lista += tipoC;
    lista += " Estado: ";
    lista += estado;
    return lista;
}