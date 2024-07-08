#include <iostream>
#include "menu.h"
#include "funciones.h"
#include "juego.h"

using namespace std;

int main(){
    srand(time(0));

    void menu(){

 int seleccion;
do{

    system ("cls");
    cout << "---------------------" << endl;
    cout << "1. JUGAR " << endl;
    cout << "2. ESTADISTICAS "<< endl;
    cout << "3. CREDITOS " << endl;
    cout << "---------------------" << endl;
    cout << "0. SALIR DEL JUEGO " << endl;
    cout << "OPCION PARA SELECCIONR: ";
    cin >> seleccion;

    switch(seleccion)
    {

       case 0;
       return ;
       break;

       case 1;
         juego();

         break;

       case 2;

          break;

       case 3;

          break;
    }

  }

while (true);

}


     return 0;
}
