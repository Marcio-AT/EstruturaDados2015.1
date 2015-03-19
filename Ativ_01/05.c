#include <stdio.h>
float soma(x, y){
      float w;
      w = x + y;
      return w;
}
int main(){
    float a, b, s;
    printf("Digite um numero ");
    scanf("%f", &a);
    printf("Digite um numero ");
    scanf("%f", &b);
    printf("%f\n", soma(a, b));
    return 0;
}
