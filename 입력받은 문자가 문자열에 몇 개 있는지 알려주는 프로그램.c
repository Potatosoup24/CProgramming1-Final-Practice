#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int alpha_count(char* str, char c);//char* str배열에 문자 c가 몇 개 있는지 반환

int main(void) {

	char c;//입력할 문자
	printf("문자를 입력하시오:");
	scanf("%c", &c);
	char str[] = "C is a general-purpose, imperative computer  programming language, supporting structured  programming, lexical variable scope and recursion,  while a static type system prevents many unintended  operations.";
	printf("%c의 수는 %d개 입니다", c, alpha_count(str, c)); //str==&str[0]
	return 0;
}


int alpha_count(char* str, char c)
{
	int nums_of_alpha = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == c) {   //*(str+i)=c 이렇게 써도 됨.
			nums_of_alpha++;
		}
	}
	return nums_of_alpha;
}
