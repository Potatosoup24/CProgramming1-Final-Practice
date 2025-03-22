//memset(),구조체_예시
#include <stdio.h>
#include <string.h>

//아무 구조체 하나 만듦.
struct Data {
	int a;
	float b;
	char c[10];
};

int main(void)
{
	struct Data my_Data; //구조체 변수 선언
	printf("구조체 변수가 차지하는 바이트 수 : %zu\n", sizeof(my_Data));

	//구조체변수(my_Data)의 모든 구성요소를 0으로 초기화
	memset(&my_Data, 0, sizeof(my_Data));//&my_Data레퍼런스를 sizeof(my_Data)바이트 만큼 0으로 초기화.

	printf("Data after memset : \n");
	printf("a :%d\n", my_Data.a);
	printf("b :%f\n", my_Data.b);
	printf("c :%s\n", my_Data.c);




	return 0;
}


//출력 결과
//구조체 변수가 차지하는 바이트 수 : 20
//Data after memset :
//a:0
//b : 0.000000
//c :

//c에서 아무것도 안나오는 이유->널문자의 아스키코드 번호가 0이라서. %s가 0을 받으면 \0으로 인식->문자열의 끝으로 인식

