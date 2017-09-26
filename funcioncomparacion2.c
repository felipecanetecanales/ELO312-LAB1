#include "stdio.h"

unsigned long int v1=8;
unsigned long int v2=8;
unsigned int par1=0;
unsigned int par2=0;
unsigned int p1,p2;
unsigned long int vb1,vb2;

int lab1_comparar(unsigned long int var1,unsigned long int var2, unsigned long int paridad1, unsigned long int paridad2)
{
  var1 ^= var1 >> 8;
  var1 ^= var1 >> 4;
  var1 ^= var1 >> 2;
  var1 ^= var1 >> 1;
  paridad1 = var1 & 1;
    while (var2)
{
  paridad2 = !paridad2;
  var2 = var2 & (var2 - 1);
}
return var1,var2,paridad1,paridad2;
}

void main (void)
{
  vb1,vb2,p1,p2=lab1_comparar(v1,v2,par1,par2);
  printf("variable 1:%d y su paridad: %d \n",vb1,p1);
  printf("variable 2:%d y su paridad: %d \n",vb2,p2);
}
  