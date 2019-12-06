
#include <stdio.h>
#define MAX_SIZE 100

//girilen karakterin dizide kaç tane olduðunun bulunmasi

int main()
{
    char str[MAX_SIZE];
    char toSearch;
    int i, count;

    printf("Bir cumle giriniz: ");
    gets(str);
    printf("Aramak istediginiz karakteri giriniz: ");

    scanf("%c",&toSearch);

    count = 0;
    i=0;
    while(str[i] != '\0')
    {
        if(str[i] == toSearch)
        {
            count++;
        }

        i++;
    }

    printf("'%c' karakteri %d kez kullanilmistir. ", toSearch, count);

    return 0;
}
