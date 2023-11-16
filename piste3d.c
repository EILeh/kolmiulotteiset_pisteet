#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "piste3d.h"

double etaisyys(Piste3D piste1, Piste3D piste2)
{
    printf("\n");



}

void tulosta(Piste3D pisteet, int tarkkuus)
{

    printf("(%.*lf, %.*lf, %.*lf)",
           tarkkuus, pisteet.x, tarkkuus, pisteet.y, tarkkuus, pisteet.z);


}
