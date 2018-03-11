#include <stdio.h>
#include <stdlib.h>
//Factorial of a number
int fact(int);
int main()
{   int n;
    int temp ;
    printf("Enter the number");
    scanf("%d",&n);

    temp = fact(n);
    printf("Factorial of number is %d", temp);
}
int fact(n)
{
    int temp ;

    if(n>=1)
    {
        return(n* fact(n - 1));
    }

    return 1;

}
