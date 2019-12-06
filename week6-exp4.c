#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    int i;

    printf("bir cumle yaziniz: ");
    gets(text1);

    for(i=0; text1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }

    text2[i] = '\0';

    printf("alinan cumle = %s\n", text1);
    printf("kopyalanan cumle = %s\n", text2);
    printf("kopyalanan karakter sayisi = %d\n", i);

    return 0;
}
