#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float high,weight,BMI;
	printf("�п�J�z������:");
	scanf("%f",&high);
	printf("�п�J�z���魫:");
	scanf("%f",&weight);
	float x = high*high*0.0001;

	printf("�z��BMI�O:%f\n",weight/x);
	
    system("pause");
	return 0;
}
