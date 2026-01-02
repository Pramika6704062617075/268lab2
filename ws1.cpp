#include <stdio.h>
int main() {
    int a,b,c,d;
    int max1,min1,max2,min2,s;

    scanf("%d %d %d %d", &a,&b,&c,&d);

    max1 = (a>b)? a:b;
    min1 = (a<b)? a:b;

    max2 = (c>d)? c:d;
    min2 = (c<d)? c:d;

    s = (max1 > max2) ? ((min1 > max2) ? min1 : max2) : ((max1 > min2) ? max1 : min2);

    printf("%d", s);
    return 0;
}

