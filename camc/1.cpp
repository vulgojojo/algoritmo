#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[] ) {
float n1,n2,n3,n4,md;
printf("Digite a primeira nota: ");
scanf("%f",&n1);
printf("Digite a segunda nota: ");
scanf("%f",&n2);
printf("Digite a terceira nota: ");
scanf("%f",&n2);
printf("Digite a quarta nota: ");
scanf("%f",&n2);
md=(n1+n2+n3+n4)/4;
if (md>=7){
	printf("Aluno alcancou a media: %.2f \n", md);
	printf ("Aprovado. \n");
	}
else {
	printf("Aluno nao alcancou a media: %.2f \n", md);
	printf("Reprovado. \n");
}
system("PAUSE");
return 0;
}

