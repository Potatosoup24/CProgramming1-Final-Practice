// gets()사용법
#include <stdio.h>

int main(void)
{
	char str[50];
	int i;

	printf("문자열 입력 : ");
	gets(str);//문자열 입력받기
	//gets는 키보드로부터 "한 줄"을 입력받는 표준 입출력 함수
	//문자열 끝에 입력되는 엔터(\n)를 NULL(\0)으로 바꿔 읽어들임
	//공백이 포함된 문자열 입력 가능
	//gets()는 시작 위치만 알 수 있으므로 저장공간을 벗어날 위험이 있다.(메모리 침범 주의)
	printf("%s\n", str);//그냥 출력하기

	for (i = 0; str[i] != '\0'; i++) {//NULL(\0)문자가 나올 때 까지. 문자열 끝 까지 출력
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}


/*문자열 입력 : hello world
hello world
hello world
*/
