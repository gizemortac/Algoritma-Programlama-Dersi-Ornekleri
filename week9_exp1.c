#include <stdio.h>
int UzunlukHesapla(char*);

void main()
{
   char* dizi[25];
   int l;

   printf("Dizi elemanlarini giriniz : ");
   gets(dizi);

   l = UzunlukHesapla(dizi);
   printf("dizinin uzunlugu  : %d ", l);
   printf("\n\n");

}

int UzunlukHesapla(char* ch) // ch dizinin ilk elemanýnýn adresini tutuyor. ( &str1[0]  )
{
   int ctr = 0;
   while (*ch != '\0')
   {
      ctr++;
      ch++;
   }
   return ctr;
}
