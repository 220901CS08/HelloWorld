#include <iostream>

int main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0){
        printf("The depth is 0\n");
    }else{
    
    
    for (int i = n; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");
    }

    return 0;
}