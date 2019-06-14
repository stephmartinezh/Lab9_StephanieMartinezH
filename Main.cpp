#include "Personas.h"
#include "Clientes.h"
#include "Repartidores.h"
#include "Empleados.h"
#include "Negocios.h"
#include "Productos.h"
#include "Ordenes.h"

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <fstream>
using std::ofstream;

int menu();

vector<Personas*> agregarPersonas(vector<Personas*>);

vector<Negocios*> agregarNegocios(vector<Negocios*>);

void listarPersonas(vector<Personas*>);

void listarNegocios(vector<Negocios*>);

vector<Ordenes*> agregarOrden(vector<Ordenes*>, vector<Personas*>, vector<Negocios*>);

void listarOrdenes(vector<Ordenes*>);

int main(){
    int opcion = 0;
    vector<Personas*>personas;
    vector<Negocios*>negocios;
    vector<Ordenes*>ordenes;
    do{
        opcion = menu();
        while(opcion<1 || opcion >9){
            cout<<"El número que ha ingresado no es válido."<<endl;
            opcion = menu();
        }
        if(opcion == 1){
            cout<<"-----------------------------------"<<endl;
            personas = agregarPersonas(personas);
            cout<<"-----------------------------------"<<endl;
        }
        if(opcion == 2){
            cout<<"-----------------------------------"<<endl;
            negocios = agregarNegocios(negocios);
            cout<<"-----------------------------------"<<endl;            
        }
        if(opcion == 3){
            cout<<"-----------------------------------"<<endl;
            cout<<"Ingrese la posición de la persona que desea eliminar: ";
            int posicion = 0;
            cin>>posicion;
            personas.erase(personas.begin()+posicion);
            cout<<"Persona eliminada exitosamente";
            cout<<"-----------------------------------"<<endl;            
        }
        if(opcion == 4){
            cout<<"-----------------------------------"<<endl;
            cout<<"Ingrese la posición del negocio que desea eliminar: ";
            int posicion = 0;
            cin>>posicion;
            negocios.erase(negocios.begin()+posicion);
            cout<<"Persona eliminada exitosamente"<<endl;
            cout<<"-----------------------------------"<<endl;            
        }
        if(opcion == 5){
            cout<<"-----------------------------------"<<endl;            
            listarPersonas(personas);           
            cout<<"-----------------------------------"<<endl;                        
        }
        if(opcion == 6){
            cout<<"-----------------------------------"<<endl;                        
            listarNegocios(negocios);
            cout<<"-----------------------------------"<<endl;                                    
        }
        if(opcion == 7){
            cout<<"-----------------------------------"<<endl;                        
            ordenes = agregarOrden(ordenes, personas, negocios);
            cout<<"-----------------------------------"<<endl;                                    
        }
        if(opcion == 8){
            cout<<"-----------------------------------"<<endl;                        
            listarOrdenes(ordenes);
            cout<<"-----------------------------------"<<endl;                                    
        }
    }while(opcion != 9);
    for (int i = 0; i < personas.size(); i++)
    {
        delete personas[i];
    }
    personas.clear();
    for (int i = 0; i < negocios.size(); i++)
    {
        delete negocios[i];
    }
    negocios.clear();
    for (int i = 0; i < ordenes.size(); i++)
    {
        delete ordenes[i];
    }
    ordenes.clear();
    return 0;
}

int menu(){
    cout<<"     MENÚ"<<endl 
        <<"1.- Agregar Persona"<<endl   
        <<"2.- Agregar Negocio"<<endl   
        <<"3.- Eliminar Persona"<<endl  
        <<"4.- Eliminar Negocio"<<endl  
        <<"5.- Listar Persona"<<endl
        <<"6.- Listar Negocio"<<endl
        <<"7.- Hacer Orden"<<endl
        <<"8.- Lista de Órdenes"<<endl
        <<"9.- Salir"<<endl
        <<"     Ingrese una opción: ";
    int opcion = 0;
    cin>>opcion;
    return opcion;
}

vector<Personas*> agregarPersonas(vector<Personas*> personas){
    cout<<"Ingrese el nombre: ";
    string nombre, identidad;
    cin>>nombre;
    cout<<"Ingrese la identidad: ";
    cin>>identidad;
    int edad;
    cout<<"Ingrese la edad: ";
    cin>>edad;
    cout<<endl<< "    MENÚ 2"<<endl
        <<"1.- Cliente"<<endl
        <<"2.- Repartidor"<<endl
        <<"3.- Empleado"<<endl
        <<"     Ingrese una opción: ";
    int opcion = 0;
    cin>>opcion;
    if(opcion == 1){
        cout<<endl<<"Ingrese la dirección: ";
        string direccion;
        cin>>direccion;
        cout<<"Ingrese el número de teléfono: ";
        int telefono,tarjeta,pedidos=0;
        cin>>telefono;
        cout<<"Ingrese el número de tarjeta de crédito: ";
        cin>>tarjeta;
        personas.push_back(new Clientes(direccion,telefono,tarjeta,pedidos,nombre,identidad,edad));
    }else if(opcion == 2){
        cout<<endl<<"Ingrese la placa de la moto: ";
        string placa;
        cin>>placa;
        int ordenes = 0;
        cout<<"Ingrese la zona de trabajo preferida: ";
        string zona;
        cin>>zona;
        personas.push_back(new Repartidores(placa,zona,ordenes,nombre,identidad,edad));
    }else if(opcion == 3){
        cout<<endl<<"Ingrese las horas de trabajo: ";
        int horas;
        cin>>horas;
        cout<<"Ingrese el local de trabajo: ";
        string local;
        cin>>local;
        int ordenes = 0;
        personas.push_back(new Empleados(horas,local,ordenes,nombre,identidad,edad));
    }else{
        cout<<"El número que ha ingresado no es válido."<<endl;
    }
    cout<<"Persona agregada exitosamente"<<endl;
    return personas;
}

vector<Negocios*> agregarNegocios(vector<Negocios*> negocio){
    cout<<"Ingrese el nombre: ";
    string nombre, ubicacion;
    cin>>nombre;
    cout<<"Ingrese la ubicación: ";
    cin>>ubicacion;
    cout<<"Ingrese el número de locales: ";
    int numero = 0;
    cin>>numero;
    negocio.push_back(new Negocios(nombre,ubicacion,numero));
    cout<<"Ingrese el nombre del producto: ";
    string nombreProducto;
    cin>>nombreProducto;
    cout<<"1.- Es comestible"<<endl
        <<"2.- No es comestible"<<endl
        <<"Ingrese una opción: ";
    int opcionComestible;
    cin>>opcionComestible;
    int cont = 0;
    bool tipo;
    if(opcionComestible == 1){
        tipo = true;
    }else{
        tipo = false;
    }
    negocio[cont]->getProductos().push_back(new Productos(nombre,tipo));
    cont++;
    cout<<"Desea agregar otro producto [S/N]: ";
    char respuesta;
    cin>>respuesta;
    if(respuesta == 'S' || respuesta == 's'){
        cout<<"Ingrese el nombre del producto: ";
        string nombreProducto;
        cin>>nombreProducto;
        cout<<"1.- Es comestible"<<endl
            <<"2.- No es comestible"<<endl
            <<"Ingrese una opción: ";
        int opcionComestible;
        cin>>opcionComestible;
        bool tipo;
        if(opcionComestible == 1){
            tipo = true;
        }else{
            tipo = false;
        }
        negocio[cont]->getProductos().push_back(new Productos(nombre,tipo));
        cont++;
    }
    cout<<"Negocio agregado exitosamente."<<endl;
    return negocio;
}

void listarPersonas(vector<Personas*> personas){
    for (int i = 0; i < personas.size(); i++)
    {
        if(dynamic_cast<Clientes*>(personas[i])){
            cout<<personas[i]->toString()<<endl;  
        }else if(dynamic_cast<Repartidores*>(personas[i])){
            cout<<personas[i]->toString()<<endl; 
        }else if(dynamic_cast<Empleados*>(personas[i])){
            cout<<personas[i]->toString()<<endl;
        }else if(dynamic_cast<Repartidores*>(personas[i])){
            cout<<personas[i]->toString()<<endl;
        }
    }
}

void listarNegocios(vector<Negocios*> negocios){
    for (int i = 0; i < negocios.size(); i++)
    {
        cout<<negocios[i]->toString()<<endl;
    }
    
}

vector<Ordenes*> agregarOrden(vector<Ordenes*> ordenes, vector<Personas*> personas, vector<Negocios*> negocios){
    cout<<"Ingrese la posición del cliente que desea agregar una orden: ";
    int posPersona;
    cin>>posPersona;
    cout<<"Ingrese la posición del negocio de donde se pedirá la orden: ";
    int posNegocio;
    cin>>posNegocio;
    cout<<"Ingrese la posición del repartidor que entregará el pedido: ";
    int posRepartidor;
    cin>>posRepartidor;
    cout<<"Es comestible [S/N]: ";
    int comestible;
    bool tipo;
    if(comestible == 's' || comestible == 'S'){
        tipo = true;
    }else{
        tipo = false;
    }
    string estado = "En proceso";
    cout<<"1.- Confirmar orden"<<endl
        <<"2.- Cancelar orden"<<endl
        <<"Ingrese una opción: ";
    
    int opcion = 0;
    Clientes* clientes = dynamic_cast<Clientes*>(personas[posPersona]);
    Negocios* negocio = dynamic_cast<Negocios*>(personas[posNegocio]);
    Repartidores* repartidor = dynamic_cast<Repartidores*>(personas[posRepartidor]);
    cin>>opcion;
    if(opcion == 1){
        estado = "Confirmada";
        ordenes.push_back(new Ordenes(clientes, negocio, repartidor,tipo,estado));
        int pedidos = dynamic_cast<Clientes*>(personas[posPersona])->getPedidos();
        dynamic_cast<Clientes*>(personas[posPersona])->setPedidos(pedidos++);

        int ordenes = dynamic_cast<Repartidores*>(personas[posRepartidor])->getOrdenes();
        dynamic_cast<Repartidores*>(personas[posRepartidor])->setOrdenes(ordenes++);

        for (int i = 0; i < personas.size(); i++)
        {
            if(dynamic_cast<Empleados*>(personas[i])){
                int ordenesEmpleados = dynamic_cast<Empleados*>(personas[i])->getOrdenes();
                dynamic_cast<Empleados*>(personas[i])->setOrdenes(ordenesEmpleados++);
            }
        }
        string nombreFile = dynamic_cast<Clientes*>(personas[posPersona])->getNombre();
        nombreFile += ".txt";
        ofstream outFile;
        outFile.open(nombreFile);
        //nombre, edad, ubicación
        string nombre = clientes->getNombre();
        string salto = "\n";
        int edad = clientes->getEdad();
        string ubicacion = clientes->getDireccion();
        outFile<<"      FACTURA";
        outFile<<salto;
        outFile<<nombre;
        outFile<<edad;
        outFile<<ubicacion;
        outFile.close();
    }else{
        estado = "Cancelada";
        ordenes.push_back(new Ordenes(clientes, negocio, repartidor,tipo,estado));

    }
    return ordenes;
}

void listarOrdenes(vector<Ordenes*> ordenes){
    for (int i = 0; i < ordenes.size(); i++)
    {
        cout<<ordenes[i]->toString()<<endl;
    }
    
}