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

        if(comandos[0] == "cargar")
            opcion = 1;
        if(comandos[0] == "cantSitios")
            opcion = 2;
        if(comandos[0] == "obtenerSitio")
            opcion = 3;
        if(comandos[0] == "crearSitio")
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
                sistema.imprimirLista();
            }
                break;
            case 2:
                {

                }
                break;
            case 3:
                {

                }
                break;
            case 4:
                {

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
