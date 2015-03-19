#include <stdio.h>
float area(l){
      float a;
      a = l*l; a = 2*a;
      return a;
}
int main(){
    float l;
    scanf("%f", &l);
    printf("%f\n", area(l));
    return 0;
}
