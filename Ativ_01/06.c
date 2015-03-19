#include <stdio.h>
float media(x, y, z, w){
      float med;
      med = (x + y + z + w)/4;
      return med;
}
int main(){
    float a, b, c, d, m;
    printf("Digite as medias "); scanf("%f%f%f%f", &a, &b, &c, &d);
    printf("%f\n", m);
    return 0;
}
