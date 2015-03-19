#include <stdio.h>
float media(a, b, c){
      float m;
      m = (a + b + c)/3;
      return m;
}
int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	printf("%f\n", media(a, b, c));
	return 0;
}
