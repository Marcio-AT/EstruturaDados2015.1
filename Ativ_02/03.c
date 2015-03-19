#include <stdio.h>
float maior(a, b){
      if(a > b || a == b)
           return a;
      else
           return b;
}
int main(){
    float a, b, c;
    printf("Digite dois números: "); scanf("%f", a); scanf("%f", b);
    c = maior(a, b);
    printf("%f\n", c);
    return 0;
}
