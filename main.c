#include <stdio.h>
#include <stdlib.h>
#include "piste3d.h"

int main()
{
    Piste3D pisteet[3] = {{1.0, 2.5, -4.0}, {-1.0, -3.5, -7.0}, {4.5, -0.5, 1.5}};
    int i = 0;
    int j = 0;
    int tarkkuus = 1;
    for(i = 0; i < 3; ++i)
    {
      for(j = i+1; j < 3; ++j)
      {
        printf("Pisteiden ");
        tulosta(pisteet[i], tarkkuus);
        printf(" ja ");
        tulosta(pisteet[j], tarkkuus++);
        printf(" etäisyys: %.3f\n", etaisyys(pisteet[i], pisteet[j]));
      }
    }
    return 0;
}
