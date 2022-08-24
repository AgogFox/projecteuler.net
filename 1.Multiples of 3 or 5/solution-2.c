#include<stdio.h>
int main () {
    int x = 0;
    for (int i = 1; 3 * i <= 1000; i++) {
        x += 3 * i;
    }
    for (int i = 1; 5 * i <= 1000; i++) {
        x += 5 * i;
    }
    printf("%d", x);
}