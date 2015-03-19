#include <stdio.h>
float sal(v, h){
      float s;
      s = v*h;
      return s;
}
int main(){
    float v, h;
    scanf("%f%f", &v, &h);
    printf("%f\n", sal(v, h));
    return 0;
}
