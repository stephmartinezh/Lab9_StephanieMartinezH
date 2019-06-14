#include "Clientes.h"
#include "Negocios.h"
#include "Repartidores.h"

#include <string>
using std::string;

#ifndef ORDENES_H
#define ORDENES_H

class Ordenes{
    private:
        Clientes* clientes;
        Negocios* negocio;
        Repartidores* repartidor;
        bool tipo;
        string estado;
    public:
        Ordenes(Clientes*, Negocios*, Repartidores*, bool, string);
        string toString();
};
#endif