#include "Sitio.h"
#include <iostream>

using namespace std;
//ctor
Sitio::Sitio(string nombre, int atractivo, double lat, double lon)
{
      this->nombre = nombre;
      this->atractivo = atractivo;
      this->lat = lat;
      this->lon = lon;
}

Sitio::~Sitio()
{
    //dtor
}

string Sitio::getNombre() {
    return this->nombre;
}

void Sitio::setNombre(string nombre) {
    this->nombre = nombre;
}

int Sitio::getAtractivo() {
    return this->atractivo;
}

void Sitio::setAtractivo(int atractivo) {
    this->atractivo = atractivo;
}

double Sitio::getLatitud() {
    return this->lat;
}

void Sitio::setLatitud(double latitud) {
    this->lat = latitud;
}

double Sitio::getLongitud() {
    return this->lon;
}

void Sitio::setLongitud(double longitud) {
    this->lon = longitud;
}
