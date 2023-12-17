#include <stdio.h>
#include <math.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    for(a=200;a<500;a++) {
        for(b=200;b<500;b++){
            for (c=200;c<500;c++){
                for (d=200;d<500;d++) {
                    if (pow(a,c)-pow(b,d)==2) {
                        printf("|||||||(%d^%d,%d^%d)|||||||",a,c,b,d);
                    }
                }
            }
        }
    }
    printf("완료");
}
