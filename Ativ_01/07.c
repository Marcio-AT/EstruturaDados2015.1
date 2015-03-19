#include <stdio.h>
float conv(m){
      float c;
      c = 100*m;
      return c;
}
int main(){
    float m;
    scanf("%f", &m);
    printf("%f\n", conv(m));
    return 0;
}
