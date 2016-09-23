#ifndef SITIO_H
#define SITIO_H
#include <iostream>
using namespace std;
#include <list>



class Sitio
{
    public:
        Sitio(string nombre, int atractivo, double lat, double lon);
        virtual ~Sitio();
        string getNombre();
        void setNombre(string nombre);
        int getAtractivo();
        void setAtractivo(int atractivo);
        double getLatitud();
        void setLatitud(double latitud);
        double getLongitud();
        void setLongitud(double longitud);


    protected:

    private:
        string nombre;
        int atractivo;
        double lat;
        double lon;
};

#endif // SITIO_H
