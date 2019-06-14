#include "Personas.h"

#ifndef EMPLEADOS_H
#define EMPLEADOS_H

class Empleados:public Personas{
    private:
        int horas, ordenes;
        string local;
    public:
        Empleados();
        Empleados(int, string, int, string, string, int);

        int getHoras();
        void setHoras(int);

        string getLocal();
        void setLocal(string);

        int getOrdenes();
        void setOrdenes(int);

        virtual int ganancias();
        virtual string toString();
};
#endif