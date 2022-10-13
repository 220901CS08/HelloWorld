#include <iostream>

int main () {

    int n;
    int sum = 0;

    while(n != 0){
        scanf("%d", &n);
        sum += n;
    }
    printf("Sum is equal to %d", sum);
}
