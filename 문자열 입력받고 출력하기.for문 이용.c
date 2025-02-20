//문자열 입력받고 출력하기.for문 이용
#include <stdio.h>

int main(void)
{
	char str[2001];

	fgets(str, sizeof(str), stdin);

	//printf("%s\n",str);
	//printf("%s\n",&str[0]);
	//방법1
	//%s는 널문자 가 나올 때 까지 읽는다.

	for (int i = 0; *(str+i) != '\0';i++)//방법2 문자열에 대한 이해가 필요
	{//NULL문자 전 까지만 출력. 
		printf("%c", *(str+i));
	}
	printf("\n");
	return 0;
}
