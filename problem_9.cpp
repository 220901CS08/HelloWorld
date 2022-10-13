#include <iostream>
 
int main () {
    
    int n, reminder, count = 0;
    float sum = 0.0, average = 0.0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0){
        reminder = n % 10;
        sum += reminder;
        n /= 10;

        count++;
    }

    average = sum / count;

    printf("The sum of the digits %.0f\n", sum);
    printf("The average of the digits of the number %.1f\n", average);

    return 0;
}