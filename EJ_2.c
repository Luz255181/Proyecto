#include <stdio.h>
#include <stdlib.h>

int seg = 0, min = 0, horas = 0;
int run(long int st)
{
    seg = (int)st%60;
    min = (int)st/60;
    horas = (int)min/60;
    min = (int)min%60;
    printf("La convercion a horas, minutos y segundos es: %d hs %d min %d seg", horas, min, seg);
    return 1;
}
