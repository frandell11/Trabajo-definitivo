#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED

void juego()
{

    int opc;
    do
    {
        cout << "---------------------------- " << endl;
        cout << "1. JUEGO INDIVIDUAL " << endl;
        cout << "2. JUEGO MULTIJUGADOR (2 JUGADORES) " << endl;
        cout << "---------------------------- " << endl;
        cout << "0. VOLVER ATRAS " << endl;
        cout << "OPCION PARA SELECCIONAR ";
        cin >> opc;

        switch(opc)
        {
        case 1;
        void Juego1jugador()
{
    int dado[6];
    int x;
    int y;
    int puntajeJuego = 0;

//variables de usuario//
    string nombre;
    int edad;

//Variable de contador de rondas//
    int conrondas = 0;

    cout << "BIENVENIDO!! " << endl;

    system("pause");
    system("cls");

    cout << "TE VAMOS A PEDIR LOS DATOS ANTES DE ARRANCAR EL JUEGO... " << endl;
    system("pause");
    system("cls");

//Solicitud de datos del usuario//
    cout << "INGRESE SU EDAD: ";
    cin >> edad;

    cout << "INGRESE SU NOMBRE: ";
    cin.ignore();
    getline(cin, nombre);

    system("pause");
    system("cls");

    cout << "NOMBRE: " << nombre << " TIENE " << edad << " ANOS DE EDAD " << endl;

    system("pause");
    system("cls");

    cout << "BIENVENIDO " << nombre << endl;
    cout << endl;

    system("pause");
    system("cls");

//--------------------------------------------------------------------//

    while(puntajeJuego < 100)
    {
//variables de tirada JUGADOR//
        int tiradaA = 0;
        int tiradaB = 0;
        int tiradaC = 0;
        int puntajeRonda = 0;

//numero de rondas//
        conrondas++;
        cout << "RONDA Nº: " << conrondas << endl;
        cout << endl;

        cout << "TIRADA Nº 1 " << endl;
        cout << endl;

        system("pause");

//tirada 1://
        for(x=0; x<6; x++)
        {
            dado[x] = tirada();
        }

//mostrar tirada 1://
        for(y=0; y<6; y++)
        {
            cout << dado[y] << endl;
            tiradaA += dado[y];
        }


/////////////////////////////////////////Sexteto A/////////////////////////////////
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


/////////////////////////////////////Escalera A///////////////////////////////////////
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

        cout << endl;
        cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaA << " PUNTOS." << endl;

        system("pause");
        system("cls");

//////////////////////////////////////////////////////////////////////////////////

        cout << "TIRADA Nº 2 " << endl;
        cout << endl;

        system("pause");

//tirada 2//
        for(x=0; x<6; x++)
        {
            dado[x] = tirada();
        }

//mostrar tirada 2//
        for(y=0; y<6; y++)
        {
            cout << dado[y] << endl;
            tiradaB += dado[y];
        }

/////////////////////////////////////////Sexteto B/////////////////////////////////
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


/////////////////////////////////////Escalera B///////////////////////////////////////
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

        cout << endl;
        cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaB << " PUNTOS." << endl;

        system("pause");
        system("cls");

        cout << "TIRADA Nº 3 " << endl;
        cout << endl;

        system("pause");

//tirada 3//
        for(x=0; x<6; x++)
        {
            dado[x] = tirada();
        }

//mostrar tirada 3//
        for(y=0; y<6; y++)
        {
            cout << dado[y] << endl;
            tiradaC += dado[y];
        }

/////////////////////////////////////////Sexteto C/////////////////////////////////
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


/////////////////////////////////////Escalera C///////////////////////////////////////
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

        cout << endl;
        cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaC << " PUNTOS." << endl;

        system("pause");

//////////////////////////////////////////////////////////////////////////////////

//Puntaje de la ronda JUGADOR 1//
        if(tiradaA > tiradaB && tiradaA > tiradaC)
        {
            puntajeRonda = tiradaA;
        }
        else if(tiradaB > tiradaA && tiradaB > tiradaC)
        {
            puntajeRonda = tiradaB;
        }
        else
        {
            puntajeRonda = tiradaC;
        }
        cout << "EL PUNTAJE MAXIMO DE LA RONDA " << conrondas << " PARA EL JUGADOR " << nombre << " ES: "  << puntajeRonda << "." << endl;

        cout << endl;
        system("pause");
        system("cls");

//--------------------------------------------------------------------/

//Suma de puntaje de Juego total para JUGADOR//

        puntajeJuego += puntajeRonda;
        cout << "PUNTAJE TOTAL DE JUEGO JUGADOR " << nombre << " ES: " << puntajeJuego << "." << endl;

//------------------------------------------------------------------/

//Ganador del juego//

        if(puntajeJuego >= 100)
        {
            cout << "FELICITACIONES " << nombre << " HAS GANADO  LA PARTIDA!! " << endl;
        }



    }

}


            break;

        case 2;

            break;

        case 0;
            break;


        }

    }
    while(true);
}

#endif // JUEGO_H_INCLUDED
