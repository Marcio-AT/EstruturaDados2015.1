#include <stdio.h>
float medp(na, nb, nc, pa, pb, pc){
     float m;
     m = (na*pa + nb*pb + nc*pc)/(pa + pb + pc);
     return m;
}
int main(){
	float na, nb, nc;
	int pa, pb, pc;
	printf("Digite as notas\n");
	scanf("%f", &na);
	scanf("%f", &nb);
	scanf("%f", &nc);
	printf("Digite os pesos\n");
    scanf("%d", &pa);
    scanf("%d", &pb);
    scanf("%d", &pc);
	printf("%f\n", medp(na, nb, nc, pa, pb, pc));
	return 0;
}
