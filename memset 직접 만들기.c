//memset() 직접 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void* My_memset(void* p, char c, size_t num);//함수 선언
//p레퍼런스를 c로 초기화한다. num바이트 만큼

int main(void) {
	char buffer[50];
	My_memset(buffer, 'K', 50);//buffer의 처음 50바이트를 'K'으로 초기화
	//buffer==&buffer[0]
	printf("Buffer after memset: ");
	for (int i = 0; i < 50; i++) {
		printf("%c", buffer[i]);
	}
	return 0;
}


void* My_memset(void* p, char c, size_t num) {
	char* p2 = (char*)p;//char*형으로 바꾸어 1바이트 씩 읽기.
	for (int i = 0; i < num; i++) {
		p2[i] = c;
	}
	return p2;
}