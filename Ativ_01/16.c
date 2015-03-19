#include <stdio.h>
float novo(s){
      s = s + s*5/100;
      s = s - s*7/100;
      return s;
}
int main(){
    int s;
    printf("Digite o salário base: "), scanf("%f", &s);
    printf("O novo salário é %f\n", novo(s));
    return 0;
}
