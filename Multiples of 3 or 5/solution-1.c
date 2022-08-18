#include<stdio.h>
int main () {
    int x = 0;
    for(int i; i < 1000; i++) {
        if (3 * i <= 1000) {
            x += 3 * i;
        }
        if (5 * i <= 1000) {
            x += 5 * i;
        }
    }
    printf("%d", x);
}