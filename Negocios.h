#include<string>
using std::string;

#include <vector>
using std::vector;

#include "Productos.h"

#ifndef NEGOCIOS_H
#define NEGOCIOS_H

class Negocios{
    protected:
        string nombre, ubicacion;
        int locales;
        vector<Productos*> productos;
    public:
        Negocios(string, string, int);

        /*string getNombre();
        void setNombre(string);

        string getUbicacion();
        void setUbicacion(string);

        int getLocales();
        void setLocales(int);  */

        vector<Productos*> getProductos();

        string getNombre();

        string toString();
};
#endif