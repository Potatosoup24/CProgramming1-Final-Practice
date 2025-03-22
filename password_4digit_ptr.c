#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(a, b);

int main(void)
{
	int arr1[4];
	printf("비밀번호 4자리를 정하시오 (num1-num2-num3-num4 형식으로):");
	scanf("%d-%d-%d-%d", arr1, arr1 + 1, arr1 + 2, arr1 + 3);
	int arr2[4];
	printf("비밀번호를 입력하여 로그인하시오 (num1-num2-num3-num4 형식으로): ");
	scanf("%d-%d-%d-%d", arr2, arr2 + 1, arr2 + 2, arr2 + 3);

	int index = 0;//index가 4일 때 비밀번호 일치
	for (int i = 0; i <= 3; i++)
	{
		if (func(*(arr1 + i), *(arr2 + i)) == 1)//불일치
		{
			printf("틀림");
			break;
		}
		else//번호 하나가 일치
		{
			index++;
		}
	}
	if (index == 4) {
		printf("정답!! 비밀번호 일치");
	}
}

int func(a, b) {
	if (a == b) {
		return 0;//일치
	}
	else {
		return 1;//불일치
	}
}

