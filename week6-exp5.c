#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i, j;

    printf("ilk kelimeyi giriniz: ");
    gets(str1);
    printf("ikinci kelimeyi giriniz: ");
    gets(str2);

    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }

    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("kelimelerin birlestirilmis hali = %s", str1);

    return 0;
}
