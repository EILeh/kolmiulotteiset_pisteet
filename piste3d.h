#ifndef PISTE3D_H_INCLUDED
#define PISTE3D_H_INCLUDED

struct Piste3D {
    double x,
    double y,
    double z
};

double etaisyys(double piste1, double piste2);

void tulosta(double pisteet, int tarkkuus);

#endif
