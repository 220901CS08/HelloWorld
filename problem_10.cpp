#include <iostream>

int main () {

    int n;
    int p;
    int res = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter a pow of number: ");
    scanf("%d", &p);

    while(p != 0){
        res *= n;
        p--;
    }

    printf("%d\n", res);
    return 0;
}