#include <stdio.h>
float area(r){
      float a;
      a = 3.141592*r*r;
      return a;
}
int main(){
    float r;
    scanf("%f", &r);
    printf("%f\n", area(r));
    return 0;
}
