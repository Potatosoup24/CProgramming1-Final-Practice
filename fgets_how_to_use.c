//fgets()사용법
#include <stdio.h>

int main(void)
{
	char str[5];
	int i;

	printf("문자열 입력 : ");
	//fgets()는 입력된 문자열의 끝에 \0을 붙여서 읽어들임
	//입력받을 수 있는 최대 문자의 갯수를 지정할 수 있음
	//범위를 벗어나면 입력 버퍼로부터 저장되지 않음

	fgets(str, sizeof(str), stdin);//str에 입력 받음. 
	/*
	기본형
	char *fgets(char *str, int n, FILE *stream);

	str: 읽어들인 문자열을 저장할 버퍼(배열)입니다.
	n: 읽어들일 최대 문자 수입니다. 이 값은 버퍼의 크기보다 작거나 같아야 합니다.
	stream: 입력을 읽어들일 스트림을 지정합니다. 예를 들어, 파일 스트림이나 표준 입력 스트림이 될 수 있습니다.
	*/
	printf("%s\n", str);//방법1

	for (i = 0; str[i] != NULL; i++) {//방법2
		printf("%c", str[i]);
	}
	return 0;
}


/*
문자열 입력 : Hello World
Hell 
Hell
*/
//최대 입력 크기가 NULL포함 다섯 개 뿐이다. 5개만 읽어서 이렇게 나온다.
