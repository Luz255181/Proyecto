#include <stdio.h>
#include <stdlib.h>

int run(int dia, int mes, int anio)
{
    int valido = 0;
    if(anio%4 == 0)
    {
        if (mes == 2)
        {
            if((1<=dia) && (dia<=29))
                valido = 1;
            else
                    valido = 0;
        }
        else
        {
            if(mes == 4 || mes == 6|| mes == 9 || mes == 11)
            {
                if((1<=dia) && (dia<=30))
                    valido = 1;
                else
                    valido = 0;
            }
            else
            {

                if(mes == 1 || mes == 3 || mes == 5 || mes  == 7 || mes == 8 || mes == 10 || mes == 12)
                    {
                        if((1<=dia) && (dia<=31))
                            valido = 1;
                        else
                            valido = 0;
                    }
                else
                    valido = 0;
            }
        }
    }
    else
        {
        if (mes == 2)
        {
            if((1<=dia && dia<=28))
                valido = 1;
            else
                    valido = 0;
        }
        else
        {
            if(mes == 4 || mes == 6|| mes == 9 || mes == 11)
            {
                if((1<=dia) && (dia<=30))
                    valido = 1;
                else
                    valido = 0;
            }
            else
            {

                if(mes == 1 || mes == 3 || mes == 5 || mes  == 7 || mes == 8 || mes == 10 || mes == 12)
                    {
                        if((1<=dia) && (dia<=31))
                            valido = 1;
                        else
                            valido = 0;
                    }
                else
                    valido = 0;
            }
        }
    }
    return valido;
}
