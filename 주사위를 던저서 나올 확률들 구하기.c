//주사위를 던져서 나올 확률 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	//처음에는 모두 0으로 초기화. 
	double num1 = 0;//1이 나온 횟수
	double num2 = 0;
	double num3 = 0;
	double num4 = 0;
	double num5 = 0;
	double num6 = 0;
	double NUM;//주사위를 몇번 던질지
	printf("주사위를 던질 횟수를 입력:");
	scanf("%lf", &NUM);

	srand(time(NULL));//난수 초기화는 반복문 바깥에 해 주어야 한다

	for (int i = 0; i <= NUM - 1; i++) {

		int random_num = rand() % 6 + 1;
		switch (random_num)
		{
		case 1:
			num1++;
			break;
		case 2:
			num2++;
			break;
		case 3:
			num3++;
			break;
		case 4:
			num4++;
			break;
		case 5:
			num5++;
			break;
		case 6:
			num6++;
			break;
		}
	}
	printf("1이 나올 확률 %lf\n", num1 / NUM);
	printf("2이 나올 확률 %lf\n", num2 / NUM);
	printf("3이 나올 확률 %lf\n", num3 / NUM);
	printf("4이 나올 확률 %lf\n", num4 / NUM);
	printf("5이 나올 확률 %lf\n", num5 / NUM);
	printf("6이 나올 확률 %lf\n", num6 / NUM);
}


//주사위를 던질 횟수를 입력 : 10000000
//1이 나올 확률 0.166667
//2이 나올 확률 0.166691
//3이 나올 확률 0.166628
//4이 나올 확률 0.166683
//5이 나올 확률 0.166722
//6이 나올 확률 0.166610

//주사위를 엄청 많이 던지니 어느정도 비슷하게 나오는 것을 볼 수 있다.
