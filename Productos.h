#include <string>
using std::string;

#ifndef PRODUCTOS_H
#define PRODUCTOS_H

class Productos{
    protected:
        string nombre;
        bool tipo;
    public:
        Productos(string, bool);

        string getNombre();
        void setNombre(string);

        bool getTipo();
        void setTipo(bool);

        string toString();
};
#endif