#include <stdio.h>

//iki sayiyi degistiren fonksiyon
//sayi1 i sayi2 ye atýyor, sayi2 yi sayi1 e atýyor.


void swap(int *n1, int *n2);

int main()
{
    int sayi1 = 5, sayi2 = 10;
    int *sayi1P = &sayi1;
    int *sayi2P = &sayi2;
    printf("sayi1 ilk deger: %d\n",sayi1);
    printf("sayi2 ilk deger: %d\n",sayi2);

    swap( sayi1P, sayi2P);

    printf("sayi1 fonk. cagirildiktan sonra = %d\n", sayi1);
    printf("sayi2 fonk. cagirildiktan sonra = %d\n", sayi2);
    return 0;
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

}
