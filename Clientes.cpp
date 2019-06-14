#include "Clientes.h"

Clientes::Clientes():Personas(){

}

Clientes::Clientes(string Direccion, int Tel, int Tarjeta, int Pedidos, string Nombre, string Id, int Edad):Personas(Nombre, Id, Edad){
    direccion = Direccion;
    telefono = Tel;
    tarjeta = Tarjeta;
    pedidos = Pedidos;
}

string Clientes::getDireccion(){
    return direccion;
}

void Clientes::setDireccion(string Dir){
    direccion = Dir;
}

int Clientes::getTelefono(){
    return telefono;
}

void Clientes::setTelefono(int tel){
    telefono = tel;
}

int Clientes::getTarjeta(){
    return tarjeta;
}

void Clientes::setTarjeta(int Tarjeta){
    tarjeta = Tarjeta;
}

int Clientes::getPedidos(){
    return pedidos;
}

void Clientes::setPedidos(int Pedidos){
    pedidos = Pedidos;
}

int Clientes::ganancias(){
    return pedidos*-100;
}

string Clientes::toString(){
    string lista="Cliente: ";
    lista += " Dirección: ";
    lista += direccion;
    lista += " Telefono: ";
    lista += telefono;
    lista += " Tarjeta: ";
    lista += tarjeta;
    lista += " Pedidos: ";
    lista += pedidos;
    return lista;
}