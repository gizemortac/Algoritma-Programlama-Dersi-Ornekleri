//dizideki elemanlarýn ortalamasýný bulan, pointer geri donduren bir fonksiyon kullanarak
//bir program yazýn.



#include <stdio.h>
int *ortalama(int x,int y, int z)
{
    int toplam=x+y+z;
    int *sonuc;
    *sonuc=toplam/3;
    printf("fonksiyonda hesaplanan deger(ortalama): %d",*sonuc);
    printf("\nfonksiyonun geri dondurecegi deger: %d",sonuc);
    return sonuc;


}
int main()
{
   int a=5;
   int b=4;
   int c=8;

    printf("\nfonksiyonun geri dondurdugu deger: %d",ortalama(a,b,c));


    return 0;
}
