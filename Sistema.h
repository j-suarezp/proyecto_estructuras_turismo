#include "Sitio.h"
#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


class Sistema
{
    public:
        Sistema();
        virtual ~Sistema();
        list<Sitio> getL_sitios();
        void setL_sitios(list<Sitio> l_nueva);
        int getCantidad_sitios();
        void setCantidad_sitios(int cant_nueva);
        int getCantidad_atractivos();
        void setCantidad_atractivos(int cant_nueva);
        bool crearSitio (string nombre, int atractivo, double latitud, double longitud);
        string leerArchivo(const char* archivo);
        void imprimirLista();
        int cantSitios (int atractivo);
    protected:

    private:
        list<Sitio> l_sitios;
        int cantidad_sitios;
        int cantidad_atractivos;
};

#endif // SISTEMA_H
