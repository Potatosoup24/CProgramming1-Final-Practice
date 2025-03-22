//memcpy 직접 만들기(사용자 정의 함수)
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

void My_memcpy(char* a, char* b, int c);


int main(void) {
	char source[] = "Hello, World";//아무 문자열 하나.
	//char* source=""; 이런 형식도 가능.
	char destination1[20];
	char destination2[20];

	//source 문자열의 길이만큼 복사. strlen()은 널문자를 제외한 char*의 길이를 리턴하는 함수.
	My_memcpy(destination1, source, strlen(source) + 1);//+1은 NULL까지 포함시키기 위함. 정상적으로 출력

	My_memcpy(destination2, source, strlen(source));//NULL 미포함. 출력 결과 이상하게 나옴

	printf("source : %s\n", source);
	printf("destination1 : %s\n", destination1);
	printf("destination2 : %s\n", destination2);//이상한 출력 결과

	return 0;
}

void My_memcpy(char* a, char* b, int c) {//char*타입 변수 a가 가리키는 레퍼런스에 b가 가리키는 레퍼런스에 담겨있는
	for (int i = 0; i < c; i++) {//것들을 c글자 만큼 값복사. (원본에는 영향X)
		*(a + i) = *(b + i);//간접참조 연산(역참조)
	}
}



