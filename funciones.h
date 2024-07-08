#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

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


#endif // FUNCIONES_H_INCLUDED
