#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "piste3d.h"

double etaisyys(Piste3D piste1, Piste3D piste2)
{
    double xLasku = pow((piste1.x - piste2.x), 2);
    double yLasku = pow((piste1.y - piste2.y), 2);
    double zLasku = pow((piste1.z - piste2.z), 2);
    double kaava = sqrt(xLasku + yLasku + zLasku);
    return kaava;



}

void tulosta(Piste3D pisteet, int tarkkuus)
{

    printf("(%.*f, %.*f, %.*f)",
           tarkkuus, pisteet.x, tarkkuus, pisteet.y, tarkkuus, pisteet.z);


}
