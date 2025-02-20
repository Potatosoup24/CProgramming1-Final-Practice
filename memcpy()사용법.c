//memcpy()사용법
#include <stdio.h>
#include <string.h>

int main(void)
{
	char source[] = "Hello, World";
	char destination1[20];
	char destination2[20];

	//source 문자열의 길이만큼 복사
	memcpy(destination1, source, strlen(source) + 1);//+1은 NULL까지 포함. 정상적으로 출력

	memcpy(destination2, source, strlen(source));//NULL 미포함. 출력 결과 이상하게 나옴
	//코드 원형
	// void *memcpy(void *dest, const void *src, size_t n);
	//매개변수
//dest: 데이터를 복사할 대상 메모리 블록의 포인터입니다.
//src : 복사할 소스 메모리 블록의 포인터입니다.
//n : 복사할 바이트 수를 나타내는 size_t 타입의 값입니다.
//반환값
//dest : 대상 메모리 블록의 포인터를 반환합니다.
//동작 원리
//memcpy 함수는 소스 메모리 블록(src)의 내용을
//  지정된 바이트 수(n만큼) 만큼 대상 메모리 블록(dest)으로 복사합니다.
// 소스와 대상 메모리 블록이 겹치지 않는 경우에만 제대로 동작하며, 
// 겹치는 경우에는 예상치 못한 결과가 발생할 수 있습니다.
// 겹치는 영역에 대한 복사는 memmove 함수를 사용해야 합니다.

//사용 시에 널문자까지 복사할 수 있도록 신경써야 한다.
	printf("source : %s\n", source);
	printf("destination1 : %s\n", destination1);
	printf("destination2 : %s\n", destination2);//이상한 출력 결과

	return 0;
}

/*
source : Hello, World
destination1 : Hello, World
destination2 : Hello, World儆儆儆儆儆儆儆儆儆儆儆儆儆儆終 5
*/
//쓰래기 값 같이 출력됨


