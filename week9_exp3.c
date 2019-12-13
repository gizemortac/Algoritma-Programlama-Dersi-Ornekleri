#include <stdio.h>
//pointerlari kullanarak dizinin elemanlarini sondan basa dogru yazdiriniz.
//dizinin eleman sayisini ve elemanlari kullanicidan aliniz.


void main()
{
   int n, i, arr1[15];
   int *pt;

   printf("dizinin eleman sayisini giriniz : ");
   scanf("%d",&n);
   pt = &arr1[0];
   printf("%d elemanli dizi icin elemanlari giriniz : \n",n);
   for(i=0;i<n;i++)
      {
	  printf(" eleman %d : ",i+1);
	  scanf("%d",pt);
	  pt++;
	  	  }

   pt = &arr1[n - 1];

   printf("\n Dizinin elemanlari sondan basa dogru asagidaki gibidir :");

   for (i = n; i > 0; i--)
   {
      printf("\n eleman - %d : %d  ", i, *pt);
      pt--;
   }
printf("\n\n");
}
