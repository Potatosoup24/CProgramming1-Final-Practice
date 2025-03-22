#include <stdio.h>

int main(void)
{
	double height;
	printf("키를 입력하시오(m단위로) : ");
	scanf_s("%lf", &height);
	double weigth;
	printf("몸무게를 입력하시오(kg단위로) : ");
	scanf_s("%lf", &weigth);

	double BMI = 0;
	BMI += weigth / ((height) * (height));
	printf("당신의 BMI지수는 %lf", BMI);
}
