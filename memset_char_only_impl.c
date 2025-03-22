//memset() 직접 만들기 : 아직 char배열에서만 구현 가능함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void My_memset(char* p, char c, size_t num);

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


void My_memset(char* p, char c, size_t num) {
	for (int i = 0;i<num; i++) {
		*(p + i) = c;//*(p+0),*(p+1),*(p+2).....이 모두 char c로 초기화
		num--;
	}
}
