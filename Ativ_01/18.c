#include <stdio.h>
float area(b, h){
      float a;
      a = (b*h)/2;
      return a;
}
int main(){
    float b, h;
    printf("Digite a base: "); scanf("%f", &b);
    printf("Digite a altura: "); scanf("%f", &h);
    printf("%f", area(b, h));
    return 0;
}
