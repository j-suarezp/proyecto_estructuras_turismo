#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <vector>
#include "Sistema.h"


int main()
{

Sistema sistema;

    while(true)
    {
        int opcion = 0;
        char bf[200];
        cin.getline(bf,200,'\n');

        vector<string> comandos;
        char* token;

        token = strtok(bf, " ");

        while(token != NULL)
        {
            comandos.push_back(token);
            token = strtok(NULL, " ");
        }

        if(comandos[0] == "cargar" && comandos.size() == 2)
            opcion = 1;
        if(comandos[0] == "cantSitios" && comandos.size() < 3 )
            opcion = 2;
        if(comandos[0] == "obtenerSitio")
            opcion = 3;
        if(comandos[0] == "crearSitio" && comandos.size() == 5)
            opcion = 4;
        if(comandos[0] == "modificarSitio")
            opcion = 5;
        if(comandos[0] == "eliminarSitio")
            opcion = 6;

        switch (opcion)
        {
            case 1: {
                const char* ruta = comandos[1].c_str();
                cout<<comandos[1]<<sistema.leerArchivo(ruta)<<endl;
            }
                break;
            case 2:
                {
                    if(comandos.size() == 1)
                        cout<<"El sistema tiene "<<sistema.getCantidad_sitios()<<" sitios."<<endl;
                    else
                    {
                        const char* param = comandos[1].c_str();
                        cout<<"El sistema tiene "<<sistema.cantSitios(atoi(param))<<" sitios de tipo "<<comandos[1]<<endl;
                    }
                }
                break;
            case 3:
                {

                }
                break;
            case 4:
                {
                    const char* p_atr = comandos[2].c_str();
                    const char* p_lat = comandos[3].c_str();
                    const char* p_lon = comandos[4].c_str();

                    if (sistema.crearSitio(comandos[1], atoi(p_atr), atof(p_lat), atof(p_lon)))
                    {
                        cout<<"El sitio "<<comandos[1]<<" de tipo "<<atoi(p_atr)<<" en (["<<atof(p_lat)<<"], ["<<atof(p_lon)<<"]) ha sido creado."<<endl;
                    }
                    else
                        cout<<"Ha ocurrido un error a la hora de crear el sitio."<<endl;

                }
                break;
            case 5:
                {

                }
                break;
            case 6:
                {

                }
                break;
            case 0:
                cout<<"Comando incorrecto, por favor intente nuevamente."<<endl;
                break;


        }
    }
    return 0;
}
