#include <iostream>

int main(){
    
    int i = 1;
    int n;
    int sum = 0;

    while (i <= 5)
    {
        scanf("%d", &n);
        sum += n;

        i++;
    }
    printf("%d\n", sum);
    

    return 0;
}