//memset()사용법
#include <stdio.h>
#include <string.h>

int main(void)
{
	char buffer[50];

	memset(buffer, 0, 50);//buffer의 처음 50바이트를 0으로 초기화
	//buffer==&buffer[0]

	printf("Buffer after memset: ");
	for (int i = 0; i < 50; i++) {
		printf("%c", buffer[i]);
	}

	return 0;
}


//출력 결과
//Buffer after memset: 00000000000000000000000000000000000000000000000000

