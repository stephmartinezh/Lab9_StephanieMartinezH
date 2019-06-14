Main: Main.o Personas.o Clientes.o Repartidores.o Empleados.o Negocios.o Productos.o Ordenes.o
	g++ Main.o Personas.o Clientes.o Repartidores.o Empleados.o Negocios.o Productos.o Ordenes.o -o Main

Main.o: Main.cpp Personas.h Clientes.h Repartidores.h Empleados.h Negocios.h Productos.h Ordenes.h
	g++ -c Main.cpp

Personas.o: Personas.cpp Personas.h
	g++ -c Personas.cpp

Clientes.o: Clientes.cpp Clientes.h Personas.h
	g++ -c Clientes.cpp

Repartidores.o: Repartidores.cpp Repartidores.h Personas.h
	g++ -c Repartidores.cpp

Empleados.o: Empleados.cpp Empleados.h Personas.h
	g++ -c Empleados.cpp

Negocios.o: Negocios.cpp Negocios.h Productos.h
	g++ -c Negocios.cpp

Productos.o: Productos.cpp Productos.h 
	g++ -c Productos.cpp

Ordenes.o: Ordenes.cpp Ordenes.h Clientes.h Negocios.h Repartidores.h
	g++ -c Ordenes.cpp