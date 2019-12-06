/**
 * C program to find reverse of any number using recursion
 */
 
#include <stdio.h>
#include <math.h>


/* Fuction declaration */
int reverse(int num);


int main()
{
    int num, rev;

    /* Input number from user */    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    /* Call the function to reverse number */
    rev = reverse(num); 
    
    printf("Reverse of %d = %d", num, rev);
    
    return 0;
}


/**
 * Recursive function to find reverse of any number
 */
int reverse(int num)
{
    // Find total digits in num
    int digit = (int) log10(num);
    
    // Base condition
    if(num == 0)
        return 0;
    
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}