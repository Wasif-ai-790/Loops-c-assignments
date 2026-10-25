#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for (int j = 0; j < t; j++)
    {
        int n;
    int isPrime = 1;   

    scanf("%d", &n);

    if (n < 2)
        isPrime = 0;   

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;   
            break;         
        }
    }

    if (isPrime == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    }
    
    

    return 0;
}