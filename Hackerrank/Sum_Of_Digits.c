// Sum of Digits of a 5 Digit number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //n = abcde
    if (n >= 10000 && n <= 99999) {
        int sum;
        //int a, b, c, d, e;
        // a = n % 10; 
        // b = (n / 10) % 10;
        // c = (n / 100) % 10;
        // d = (n / 1000) % 10;
        // e = (n / 10000) % 10;
        // sum = a + b + c + d + e;
        
        sum = (n % 10) + ((n / 10) % 10) + ((n / 100) % 10) + ((n / 1000) % 10) + ((n / 10000) % 10);
        printf("%d",sum);
    }
    else {
    printf("Invalid Input");
    }
    return 0;
}
