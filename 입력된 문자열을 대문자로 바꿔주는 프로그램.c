#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* upper_Alpha(char* str); //함수 선언

int main(void)
{
	char str[256];
	printf("문자열을 입력하시오:");
	fgets(str, sizeof(str), stdin);

	printf("대문자로 변환:");

	printf("%s", upper_Alpha(str));

	return 0;

}

char* upper_Alpha(char* str) { //함수 정의

	for (int i = 0; ; i++) {
		if (str[i] == '\0') {
			str[i] = '\0';
			break;
		}

		str[i] = str[i]-32;//대소문자의 널문자 차이 32
	}
	return str;
}