#include <stdio.h>

int main(){
  int n;
  while (scanf("%d", &n) == 1 && n){
    int mi = 0, mp = 0, ji = 0, jp = 0,i, j;
    for (i=0; i<n; ++i){
      scanf("%d", &j);
      mi += j%2;
      mp += !(j%2);
    }
    for (i=0; i<n; ++i){
      scanf("%d", &j);
      ji += j%2;
      jp += !(j%2);
    }

    mp = (mp-ji<0)?0:mp-ji;
    mi = (mi-jp<0)?0:mi-jp;
    printf("%d\n", mi+mp);
  }
  return 0;
}
