#include <iostream>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        
    }
    printf("\n");

    return 0;
    
}