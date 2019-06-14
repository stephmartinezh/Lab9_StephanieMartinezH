#include "Personas.h"

#ifndef REPARTIDORES_H
#define REPARTIDORES_H

class Repartidores:public Personas{
    private:
        string placa, zona;
        int ordenes;
    public:
        Repartidores();
        Repartidores(string, string, int, string , string, int );

        string getPlaca();
        void setPlaca(string);

        string getZona();
        void setZona(string);

        int getOrdenes();
        void setOrdenes(int);

        virtual int ganancias();
        virtual string toString();
};
#endif