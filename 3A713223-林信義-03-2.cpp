#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int bw;
	float bmi,h;
	
	printf("�п�J�z���魫(����):");
	scanf("%d",&bw);
	printf("�п�J�z������(����):");
	scanf("%f",&h);
		
	bmi=bw/(h*h);
	
	printf("�z��BMI�Ȭ�%f\n",bmi); 
	
	system("PAUSE");
	return 0;
}
