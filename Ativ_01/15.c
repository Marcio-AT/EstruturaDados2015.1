#include <stdio.h>
float novo(s, p){
      s = s + s*p/100;
      return s;
}
int main(){
    float s, p;
    printf("Digite o salario: "); scanf("%f", &s);
    printf("Digite o percentual: "); scanf("%f", &p);
    printf("%f", novo(s, p));
    return 0;
}
