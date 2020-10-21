#include <stdio.h>
#include <math.h>

int main (void)
{
float T1 = 0.010735, T2 = 0.007, T3 = 0.0047941;//temps de propagation
    float D1, D2, D3;  //distance relative
    float xBC, yBC=0;//coordonées vecteurs BC (base clé)
    float xT=0, yT=0;//coordonnées telephone
    float xC, yC;//coordonnées clé
    const float v=340;//vitesse du son
    int pxT=300, pyT=400;//dimensions repère
    int pxBC,pyBC;//vecteur BC en pixel
    int pxC, pyC;//position clé en pixel
    D1 = 3.65;
    D2 = 2.38; //distance 2 TC
    D3 = 1.63;//distance 3
    printf("D1 = %f ; D2 = %f ; D3 = %f;\n", D1, D2, D3);

    yC = (pow(D1, 2) + pow(D2, 2) - (pow(D3, 2))) / (2*D1);//calcul x clé - forme jamboard
    printf("yC = %f\n", yC);

    xC = sqrt((pow(D2, 2)) - (pow(yC, 2)));//calcul y clé - forme jamboard
    printf("xC = %f\n", xC);

    return (0);
    }
