#include<stdio.h>
int main () {
    int t1 = 1, t2 = 2, next, count = 0;
    while (t2 < 4000000) {
        if (t2 % 2 == 0) {
            count += t2;
        }
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("%d", count);
}