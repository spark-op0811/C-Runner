#include <stdio.h>
#include <math.h>
int main() {
    int a;
    int b;
    int c=2;
    int d=2;
    for(a=0;a<1000;a++) {
        for(b=0;b<1000;b++){
            for (c=2;c<1000;c++){
                for (d=2;d<1000;d++) {
                    
                    if (pow(a,c)-pow(b,d)==2) {
                        printf("|||||||(%d^%d,%d^%d)|||||||",a,c,b,d);
                
                    }
                }
            }
            
        }
        
    }
}
