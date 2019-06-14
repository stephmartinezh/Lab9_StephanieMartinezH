#ifndef PERSONAS_H
#define PERSONAS_H

#include <string>
using std::string;

class Personas{
    protected:
        string nombre, identidad;
        int edad;
    public:
        Personas();
        Personas(string, string, int);

        string getNombre();
        void setNombre(string);

        string getIdentidad();
        void setIdentidad(string);

        int getEdad();
        //void setEdad(int);

        virtual int ganancias()=0;
        virtual string toString()=0;
};
#endif