#include <stdio.h>
#include <math.h>
int main() {
    int a;
    int b;
    int c=2;
    int d=2;
    for(a=0;a<100;a++) {
        for(b=0;b<100;b++){
            for (c=2;c<100;c++){
                for (d=2;d<100;d++) {
                    printf("%d %d %d %d  %f\n",a,c,b,d,pow(a,c)-pow(b,d));
                    if (pow(a,c)-pow(b,d)==2) {
                        printf("|||||||(%d^%d,%d^%d)|||||||",a,c,b,d);
                
                    }
                }
            }
            
        }
        
    }
}
