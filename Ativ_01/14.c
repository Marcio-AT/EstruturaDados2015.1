#include <stdio.h>
float novo(s){
      s = s + s/4;
      return s;
}
int main(){
    float s;
    printf("Digite o salario a ser corrigido: "); scanf("%f", &s);
    printf("O novo salário é %f\n", novo(s));
    return 0;
}
