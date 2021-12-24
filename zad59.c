//Program ce izracunat povrsinu plasta valjka.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14
//Funkcija za izracunavanje povrsinu plasta valjka
int plast(int radijus, int visina)
{
	float pov_plast;
	pov_plast=(float)2*PI*radijus*visina;
    return pov_plast;
}
  

int main()
{
    int radijus;
    int visina;
    printf("Unesi radijus i visinu\n");
    scanf("%d %d",&radijus,&visina);
    // Poziv funkcije.
    float M= plast(radijus, visina);
    printf("Povrsina plasta valjka je: %.2f",M);
    return 0;
}
