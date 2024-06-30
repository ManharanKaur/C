// Pointers in C

#include <stdio.h>

void update(int *a,int *b) {
    int sum, difference;
    sum = *a + *b;
    if (*a >= *b) {
        difference = *a - *b;
    }
    if ( *b >= *a) {
        difference = *b - *a;
    }
    *a = sum;  
    *b = difference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
