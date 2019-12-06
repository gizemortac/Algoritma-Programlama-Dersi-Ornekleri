#include <stdio.h>
#define MAX_SIZE 100 // stringin maksimum uzunluðu
int main()
{
    char text[MAX_SIZE];
    int i;
    int count= 0;

    printf("bir kelime veya cumle giriniz: ");
    gets(text);

    for(i=0; text[i]!='\0'; i++)
    {
        count++;
    }

    printf("'%s' nin uzunlugu = %d", text, count);

    return 0;
}
