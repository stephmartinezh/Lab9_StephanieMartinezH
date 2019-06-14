#include "Repartidores.h"

Repartidores::Repartidores(){

}

Repartidores::Repartidores(string Placa, string Zona, int Ordenes, string Nombre, string Id, int Edad):Personas(Nombre, Id, Edad){
    placa = Placa;
    zona = Zona;
    ordenes = Ordenes;
}

string Repartidores::getPlaca(){
    return placa;
}

void Repartidores::setPlaca(string Placa){
    placa = Placa;
}

string Repartidores::getZona(){
    return zona;
}

void Repartidores::setZona(string Zona){
    zona = Zona;
}

int Repartidores::getOrdenes(){
    return ordenes;
}

void Repartidores::setOrdenes(int o){
    ordenes = o;
}

int Repartidores::ganancias(){
    return ordenes*40;
}

string Repartidores::toString(){
    string lista = "Repartidor ";
    lista += "Placa: ";
    lista += placa;
    lista += " Zona: ";
    lista += zona;
    lista += " Ordenes: ";
    lista += ordenes;
    return lista;
}