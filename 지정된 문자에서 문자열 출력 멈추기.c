#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//지정된 char변수와 동일한 char이 특정 문자열에 있을때 그곳 까지만 출력하는 프로그램
int main(void) {
	char str[256];
	char ch;
	printf("중간에 나오면 끊고 싶은 문자를 입력하시오(한 글자): ");
	scanf("%c", &ch);
	printf("문자열을 적당히 입력하시오(최대 255글자,공백없이) : ");
	scanf("%s", &str[0], sizeof(str));
	for (int i = 0; i < 199; i++) {
		if (str[i] == ch) {
			printf("%c\n", str[i]);
			break;
		}
		else {
			printf("%c\n", str[i]);
		}
	}
}
/*
중간에 나오면 끊고 싶은 문자를 입력하시오(한 글자): n
문자열을 적당히 입력하시오(최대 255글자,공백없이) : confused
c
o
n
*/