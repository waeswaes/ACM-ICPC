#include <stdio.h>
#define max(a,b) ((a<b)?(b):(a))

void fastint(register int *n){
    register char c;
    *n = 0;
    while(c=getc(stdin)){
        switch(c){
            case ' ': return;
            case '\n': return;
            default: (*n) += *n+*n+*n+*n+*n+*n+*n+*n+*n+(c-'0'); break;
        }
    }
}


void putint(int x)
{
if (x) {
putint(x / 10);
putchar('0' + x % 10);
}
}

int main(){
    int c, i, j, pC1, pC2, pL1, pL2, r, temp, v;
    while(scanf("%d%d\n",&r,&c) && r){
        for(pL1 = pL2 = i = 0; i < r; i++){
            for(pC1 = pC2 = j = 0; j < c; j++){
                fastint(&v);
                temp = pC1;
                pC1 = max(pC1,v+pC2);
                pC2 = temp;
            }
            temp = pL1;
            pL1 = max(pL1,pC1+pL2);
            pL2 = temp;
        }
    putint(pL1);
    }
    return 0;
}
