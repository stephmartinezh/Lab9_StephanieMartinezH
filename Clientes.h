#include "Personas.h"

#ifndef CLIENTES_H
#define CLIENTES_H

class Clientes:public Personas{
    private:
        string direccion;
        int telefono, tarjeta, pedidos;
    public:
        Clientes();
        Clientes(string, int, int, int,string, string, int);

        string getDireccion();
        void setDireccion(string);

        int getTelefono();
        void setTelefono(int);

        int getTarjeta();
        void setTarjeta(int);

        int getPedidos();
        void setPedidos(int);

        virtual int ganancias();
        virtual string toString();
};
#endif