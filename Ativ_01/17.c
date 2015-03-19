#include <stdio.h>
float novo(s){
    s = s + 50 - s/10;
    return s;
}
int main(){
    float s;
    printf("Digite o salário base: "); scanf("%f", &s);
    printf("Novo salário: %f\n", novo(s));
    return 0;
}
