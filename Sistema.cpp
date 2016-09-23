#include "Sistema.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Sistema::Sistema()
{
    this->cantidad_sitios = 0;
    //ctor
}

Sistema::~Sistema()
{
    //dtor
}

list<Sitio> Sistema::getL_sitios()
{
    return this->l_sitios;
}

void Sistema::setL_sitios(list<Sitio> l_nueva)
{
    this->l_sitios = l_nueva;
}


int Sistema::getCantidad_sitios()
{
    return this->cantidad_sitios;
}

void Sistema::setCantidad_sitios(int cant_nueva)
{
    this->cantidad_sitios = cant_nueva;
}

int Sistema::getCantidad_atractivos()
{
    return this->cantidad_atractivos;
}

void Sistema::setCantidad_atractivos(int cant_nueva)
{
    this->cantidad_atractivos = cant_nueva;
}

bool Sistema::crearSitio (string nombre, int atractivo, double latitud, double longitud) {
    if(latitud >= (2.95) && latitud <= (3.25) && longitud >= (-73.6) && longitud <= (-73.4))
    {
        Sitio sitio(nombre, atractivo, latitud, longitud);
        l_sitios.push_back(sitio);
        this->cantidad_sitios++;
        return true;
    }

    return false;
}

string Sistema::leerArchivo(const char* archivo) {
    string nombre;
    int atractivo = 0;
    double latitud = 0;
    double longitud = 0;
    char *token;
    char linea[200];
    ifstream entrada(archivo,ios::in);
    if(!entrada) {
        return " fallo";
    }
    entrada.getline(linea,200,'\n');

    token=strtok(linea, "\t");
    setCantidad_sitios(atoi(token));
    token = strtok(NULL, "\t");
    setCantidad_atractivos(atoi(token));

    while (entrada) {


        entrada.getline(linea,200,'\n');
        token=strtok(linea, "\t");
        while(token != NULL)
        {

            nombre = token;
            token = strtok(NULL, "\t");
            atractivo = atoi(token);
            token = strtok(NULL, "\t");
            latitud = atof(token);
            token = strtok(NULL, "\t");
            longitud = atof(token);
            token = strtok(NULL, "\t");
            crearSitio(nombre, atractivo, latitud, longitud);

        }


    }
    return " cargado";
}

void Sistema::imprimirLista () {
    for (list<Sitio>::iterator it = l_sitios.begin(); it != l_sitios.end(); it++) {
        cout<<it->getNombre()<<" "<<it->getAtractivo()<<" "<<it->getLatitud()<<" "<<it->getLongitud()<<endl;
    }
}

int Sistema::cantSitios (int atractivo) {
    int cantidad =  0;
    for (list<Sitio>::iterator it = l_sitios.begin(); it != l_sitios.end(); it++){
        if (it->getAtractivo() == atractivo) {
            cantidad++;
        }
    }
    return cantidad;
}
