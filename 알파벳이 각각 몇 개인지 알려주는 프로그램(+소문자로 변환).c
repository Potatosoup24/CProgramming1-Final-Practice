#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> //tolower을 쓰기 위함.

int alpha_count(char* a, char b);//a배열에 문자 b가 몇 개 있는지 반환

int main(void) {
	char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing  elit. Suspendisse sagittis nisi at dapibus semper.  Ut quis sapien vulputate, pharetra sapien vel,  commodo diam. Nam tincidunt nulla sit amet neque  iaculis, at interdum erat ultrices. Donec nec  turpis sagittis, malesuada dui ut, pellentesque  magna. Integer ultricies pharetra ex ut semper. Pellentesque ex orci, rhoncus vitae dolor in, vulputate volutpat felis.Fusce quis ornare purus.";
	//긴 문자열 아무거나

	for (int i = 0; i != NULL; i++) {
		tolower(str[i]);  //소문자로 바꾸기
	}

	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";//모든 알파벳 소문자들. 26개

	for (int i = 0; i < 26; i++) {
		printf("%c의 수: %d 개 \n", alpha[i], alpha_count(str, alpha[i]));//char* str 문자열에 alpha[i]가 몇개인지 리턴,
		//alpha[0]~alpha[25]  a~z
	}
	return 0;
}


int alpha_count(char* a, char b) { //a배열에서 문자 b가 몇 개 있는지 반환하는 함수 정의
	int nums_of_alpha = 0; //처음에는 0부터 카운트
	for (int i = 0; a[i] != '\0'; i++) { //a 배열에 NULL문자가 나올 때 까지 읽어준다. i<26으로 하면 안된다. 
		//i<26으로 하면 위의 경우에서"만" 사용가능한 함수가 되어버린다. 
		if (a[i] == b) {                     //문자열을 끝까지 읽어야 하는데 i<26으로 하면 26글자만 읽는다.
			nums_of_alpha++;                //알파벳이 26글자인 것과 문자열을 끝까지 읽는 것을 혼동하지 말자
		}                                    //위의 main()의 반복문은 알파벳 각각을 대입해야 하기 때문에 i<26이 맞다.
	}
	return nums_of_alpha;
}


