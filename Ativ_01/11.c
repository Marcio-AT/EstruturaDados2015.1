#include <stdio.h>
float celsius(f){
      float c;
      c = (5*(f*32)/9);
      return c;
}
int main(){
	float c, f;
	scanf("%f", &f);
	printf("%f", celsius(f));
	return 0;
}
