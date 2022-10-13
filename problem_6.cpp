#include <iostream>

int main(){

    int i = 450;
    int sum = 0;
    int count = 0;
    
    while(i <= 500){
        if(i % 8 == 0){
            count++;
            sum += i;
            printf("%d ", i);
        }

        i++;
    }
    printf("\nNumber of integers divisible by 8 is %d\n", count);
    printf("Sum of integers divisible by 8 is %d\n", sum);

    return 0;
}