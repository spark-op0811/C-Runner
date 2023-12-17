#include <stdio.h>
#include <math.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    for(a=100;a<200;a++) {
        for(b=100;b<200;b++){
            for (c=100;c<200;c++){
                for (d=100;d<200;d++) {
                    if (pow(a,c)-pow(b,d)==2) {
                        printf("|||||||(%d^%d,%d^%d)|||||||",a,c,b,d);
                    }
                }
            }
            printf(a, b, c, d);
        }
    }
}
