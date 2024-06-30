// For Loops in C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    //pointer points towards value inside array of strings
    char *num[] = {"","one","two","three","four","five","six","seven","eight","nine"};
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n",num[i]);
        }
        if (i > 9){
            if(i % 2 == 0){
                printf("even\n");
            }
            else if (i % 2 == 1) {
                printf("odd\n");
            }
        }
    }

    return 0;
}
