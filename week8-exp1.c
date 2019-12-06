#include <stdio.h>

//POINTERLAR
//bir degiskenin adresi baska bir degiskende saklanabilir.Adres tutan degiskene pointer denir.
int main()
{
  int var = 5;

  int *varP = &var;

  printf("var degiskeninin degeri: %d\n", var);
  printf("var degiskeninin adresi: %d\n", &var);  //Notice, the ampersand(&) before var.

  printf("varP isimli pointerin degeri: %d\n", varP);
  printf("varP isimli pointerdaki adreste bulunan deger: %d\n",*varP);
  return 0;
}
