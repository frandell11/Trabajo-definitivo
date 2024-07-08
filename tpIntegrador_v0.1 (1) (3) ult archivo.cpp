#include <iostream>
#include <cTime>
#include "menu.h"
#include "funciones.h"

using namespace std;

int main(){
srand(time(0));

//variables de tirada//

int dado[6]; int x; int y; int time; int puntajeJuego = 0; int puntajeJuego2 = 0; int conTiradas1 = 0; int conTiradas2 = 0;

//variables de usuarios//
string nombre;
int edad;
string nombre2;
int edad2;

//Variable de contador de rondas//
 int conrondas = 0;

//--------------------------------------------------------------------//

cout << "BIENVENIDOS JUGADORES!! " << endl;

system("pause");
system("cls");

cout << "LES VAMOS A PEDIR LOS DATOS DE CADA UNO... " << endl;
system("pause");
system("cls");

//Solicitud de datos del usuario//
cout << "INGRESE SU EDAD EL 1ER JUGADOR: ";
cin >> edad;

cout << "INGRESE SU NOMBRE EL 1ER JUGADOR: ";
cin.ignore();
getline(cin, nombre);

system("pause");
system("cls");

cout << "INGRESE SU EDAD EL 2DO JUGADOR: ";
cin >> edad2;

cout << "INGRESE SU NOMBRE EL 2DO JUGADOR: ";
cin.ignore();
getline(cin, nombre2);

cout << "NOMBRE: " << nombre << " TIENE " << edad << " ANOS DE EDAD " << endl;
cout << "NOMBRE: " << nombre2 << " TIENE " << edad2 << " ANOS DE EDAD " << endl;

system("pause");
system("cls");

cout << "BIENVENIDO " << nombre << " Y " << nombre2 << endl;
cout << endl;

system("pause");
system("cls");

//--------------------------------------------------------------------//

while(puntajeJuego < 100 && puntajeJuego2 < 100){

//variables de tirada JUGADOR 1//
int tiradaA = 0; int tiradaB = 0; int tiradaC = 0; int puntajeRonda = 0;

//Variables de tirada JUGADOR 2//
int tirada1 = 0; int tirada2 = 0; int tirada3 = 0; int puntajeRonda2 = 0;

//-------------------------------------------------------------------/

//numero de rondas//
conrondas++;
cout << "RONDA Nº: " << conrondas << endl;
cout << endl;

cout << "TIRADA Nº 1 " << endl;
cout << endl;
cout << "TURNO DE: " << nombre << endl;
cout << endl;

system("pause");

//tirada 1: Jugador 1//
for(x=0; x<6; x++){
  dado[x] = tirada();
  conTiradas1++;
}

//mostrar tirada 1: Jugador 1//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaA += dado[y];
}


/////////////////////////////////////////Sexteto A JUGADOR 1/////////////////////////////////
int numeroSexteto;

numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
    cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tiradaA = numeroSexteto * 10;
}


/////////////////////////////////////Escalera A JUGADOR 1///////////////////////////////////////
        bool valorEscalera1;

        valorEscalera1 = escalera(dado);

        if(valorEscalera1 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            break;
        }
        else
        {
            valorEscalera1 = false;
        }


cout << "TIRADA Nº 1 " << endl;
cout << endl;
cout << "TURNO DE: " << nombre2 << endl;
cout << endl;

system("pause");

//Tirada 1: JUGADOR 2//
for(x=0; x<6; x++){
  dado[x] = tirada();
  conTiradas2++;
}

//Mostrar tirada 1: JUGADOR 2//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tirada1 += dado[y];
 }


/////////////////////////////////////////Sexteto A JUGADOR 2///////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego2 = 0;
    cout << "MALA SUERTE CHE... " << nombre2 << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tirada1 = numeroSexteto * 10;
}


/////////////////////////////////////Escalera A JUGADOR 2///////////////////////////////////////
        bool valorEscaleraA;

        valorEscaleraA = escalera(dado);

        if(valorEscaleraA == true)
        {

            puntajeJuego2 >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre2 << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            break;
        }
        else
        {
            valorEscaleraA = false;
        }

cout << endl;
cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaA << " PUNTOS." << endl;
cout << endl;
cout << "EL JUGADOR " << nombre2 << " OBTUVO " << tirada1 << " PUNTOS. " << endl;

system("pause");
system("cls");

//////////////////////////////////////////////////////////////////////////////////

cout << "TIRADA Nº 2 " << endl;
cout << endl;
cout << "TURNO DE: " << nombre << endl;
cout << endl;

system("pause");

//tirada 2 JUGADOR 1//
for(x=0; x<6; x++){
    dado[x] = tirada();
    conTiradas1++;
}

//mostrar tirada 2 JUGADOR 1//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaB += dado[y];
}

/////////////////////////////////////////Sexteto B JUGADOR 1/////////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
    cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tiradaB = numeroSexteto * 10;
}


/////////////////////////////////////Escalera B JUGADOR 1///////////////////////////////////////
        bool valorEscalera2;

        valorEscalera2 = escalera(dado);

        if(valorEscalera2 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            break;
        }
        else
        {
            valorEscalera2 = false;
        }


cout << "TIRADA Nº 2 " << endl;
cout << endl;
cout << "TURNO DE: " << nombre2 << endl;
cout << endl;

system("pause");

//Tirada 2: JUGADOR 2//
for(x=0; x<6; x++){
  dado[x] = tirada();
  conTiradas2++;
}

//Mostrar tirada 2: JUGADOR 2//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tirada2 += dado[y];
 }


/////////////////////////////////////////Sexteto B JUGADOR 2/////////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego2 = 0;
    cout << "MALA SUERTE CHE... " << nombre2 << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tirada2 = numeroSexteto * 10;
}


/////////////////////////////////////Escalera B JUGADOR 2///////////////////////////////////////
        bool valorEscaleraB;

        valorEscaleraB = escalera(dado);

        if(valorEscaleraB == true)
        {

            puntajeJuego2 >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre2 << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            break;
        }
        else
        {
            valorEscaleraB = false;
        }

cout << endl;
cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaB << " PUNTOS." << endl;
cout << endl;
cout << "EL JUGADOR " << nombre2 << " OBTUVO " << tirada2 << " PUNTOS. " << endl;

system("pause");

//////////////////////////////////////////////////////////////////////////////////

cout << "TIRADA Nº 3 " << endl;
cout << endl;
cout << "TURNO DE: " << nombre << endl;
cout << endl;

system("pause");

//tirada 3 JUGADOR 1//
for(x=0; x<6; x++){
    dado[x] = tirada();
    conTiradas1++;
}

//mostrar tirada 3 JUGADOR 1//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaC += dado[y];
}

/////////////////////////////////////////Sexteto C JUGADOR 1/////////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
    cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tiradaC = numeroSexteto * 10;
}


/////////////////////////////////////Escalera C JUGADOR 1///////////////////////////////////////
        bool valorEscalera3;

        valorEscalera3 = escalera(dado);

        if(valorEscalera3 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            break;
        }
        else
        {
            valorEscalera3 = false;
        }

cout << "TIRADA Nº 3 " << endl;
cout << endl;
cout << "TURNO DE: " << nombre2 << endl;
cout << endl;

system("pause");

//Tirada 3: JUGADOR 2//
for(x=0; x<6; x++){
  dado[x] = tirada();
  conTiradas2++;
}

//Mostrar tirada 3: JUGADOR 2//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tirada3 += dado[y];
 }

/////////////////////////////////////////Sexteto C JUGADOR 2/////////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
    cout << "MALA SUERTE CHE... " << nombre2 << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tirada3 = numeroSexteto * 10;
}

/////////////////////////////////////Escalera C JUGADOR 2///////////////////////////////////////
        bool valorEscaleraC;

        valorEscaleraC = escalera(dado);

        if(valorEscaleraC == true)
        {

            puntajeJuego2 >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre2 << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            break;
        }
        else
        {
            valorEscaleraC = false;
        }

cout << endl;
cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaC << " PUNTOS." << endl;
cout << endl;
cout << "EL JUGADOR " << nombre2 << " OBTUVO " << tirada3 << " PUNTOS. " << endl;

system("pause");

//////////////////////////////////////////////////////////////////////////////////


//Puntaje de la ronda JUGADOR 1//
if(tiradaA > tiradaB && tiradaA > tiradaC){
    puntajeRonda = tiradaA;
}
else if(tiradaB > tiradaA && tiradaB > tiradaC){
    puntajeRonda = tiradaB;
}
else {
    puntajeRonda = tiradaC;
}
cout << "EL PUNTAJE MAXIMO DE LA RONDA " << conrondas << " PARA EL JUGADOR " << nombre << " ES: "  << puntajeRonda << "." << endl;

//---------------------------------------------------------------------//

//Puntaje de la ronda JUGADOR 2//
if(tirada1 > tirada2 && tirada1 > tirada3){
    puntajeRonda2 = tirada1;
}
else if(tirada2 > tirada1 && tirada2 > tirada3){
    puntajeRonda2 = tirada2;
}
else {
    puntajeRonda2 = tirada3;
}
cout << "EL PUNTAJE MAXIMO DE LA RONDA " << conrondas << " PARA EL JUGADOR " << nombre2 << " ES: "  << puntajeRonda2 << "." << endl;


cout << endl;
system("pause");
system("cls");

//--------------------------------------------------------------------/

//Suma de puntaje de Juego total para JUGADOR 1//

puntajeJuego += puntajeRonda;
cout << "PUNTAJE TOTAL DE JUEGO JUGADOR " << nombre << " ES: " << puntajeJuego << "." << endl;

//Suma de puntaje de Juego total para JUGADOR 2//
puntajeJuego2 += puntajeRonda2;
cout << "PUNTAJE TOTAL DE JUEGO JUGADOR " << nombre2 << " ES: " << puntajeJuego2 << "." << endl;

//------------------------------------------------------------------/

//Ganador del juego//

if(puntajeJuego >= 100 && puntajeJuego2 < 100)
{
cout << "FELICITACIONES " << nombre << " HAS GANADO  LA PARTIDA!! " << endl;
}
else if(puntajeJuego2 >= 100 && puntajeJuego < 100)
{
cout << "FELICITACIONES " << nombre2 << " HAS GANADO LA PARTIDA!! " << endl;
}


//En caso de haber empate//

while(puntajeJuego >= 100 && puntajeJuego2 >= 100)
{

if(conTiradas1 < conTiradas2)
{
cout << "FELICITACIONES " << nombre << " HAS GANADO LA PARTIDA POR LLEGAR A 100 O MAS PUNTOS EN MENOS TIRADAS. " << endl;
break;
}
else if(conTiradas2 < conTiradas1)
{
cout << "FELICITACIONES " << nombre2 << " HAS GANADO LA PARTIDA POR LLEGAR A 100 O MAS PUNTOS EN MENOS TIRADAS. " << endl;
break;
}
else
{
cout << "FELICITACIONES A " << nombre << " Y A " << nombre2 << " HAN TERMINADO EN EMPATE POR LLEGAR A 100 PTS EN LA MISMA CANTIDAD DE TIRADAS! " << endl;
break;
}

}

}
return 0;
}


int tirada(){
    return rand ()% 6+1;
}

int sexteto(int vecDado[])
{
    int x;
    int cont = 0;
    int numero = vecDado[0];
    for(x = 0; x < 6; x++)
    {
        if(numero == vecDado[x])
        {
            cont++;
        }
    }
    if(cont == 6)
    {
        return numero;
    }
    else
    {
        return 0;
    }
}


bool escalera(int vecDado[6])
{
    bool esEscalera;
    int cont = 0;
    int x;
    for(x = 0; x < 6; x++)
    {
        int y;
        for(y = x+1; y < 6; y++)
        {
            if(vecDado[x] == vecDado[y])
            {
                cont++;
            }
        }
    }
    if(cont == 0)
    {
        esEscalera = true;
    }
    else
    {
        esEscalera = false;
    }
    return esEscalera;
}




