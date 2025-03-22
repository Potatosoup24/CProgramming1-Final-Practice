//문자열을 거꾸로 출력하는 프로그램, 거꾸로 된 문자열 저장
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strlen은 널문자를 포함하지 않은 길이를 반환한다.
int main(void) {
	char str[] = "C is a general-purpose, imperative computer  programming language, supporting structured  programming, lexical variable scope and recursion,  while a static type system prevents many unintended  operations.";
	char reverse_str[256];//적당히 넉넉하게 공간 마련.
	printf("문자열을 단순히 거꾸로 출력:\n");
	for (int i = 0; i < strlen(str); i++) {//0~strlen(str)-1 
		reverse_str[i] = str[strlen(str) - 1 - i];
		//빈 문자열에 거꾸로 된 문자열 저장. strlen(str)-1~0. 마지막 NULL은 복사하지 않는다
		//마지막문자(NULL아님)~처음문자 까지 저장.
		printf("%c", str[strlen(str) - 1 - i]); //strlen(str)-1~0. NULL을 제외하고 출력
	}                                      //마지막 문자(NULL아님)~처음문자 까지 출력 
	printf("\n\n");
	reverse_str[strlen(str)] = NULL;//마지막에 널문자 추가. strlen(str)번 인덱스에 추가
	//0~strlen(str-1)번째 까지는 실질적 문자들. 실질적 문자들 strlen(str)개
	printf("저장된 문자열 :\n %s", reverse_str);
	return 0;
}


