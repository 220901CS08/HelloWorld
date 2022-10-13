#include <iostream>

int main(){

    int n;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of negative number doesn't exists\n");
    }else{
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d equals to %d\n", n,factorial);
    }
    
    return 0;
}