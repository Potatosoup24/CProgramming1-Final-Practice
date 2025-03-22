//strncpy()사용법
/*
기본형
char *strncpy(char *dest, const char *src, size_t n);

매개변수
dest: 복사될 문자열을 저장할 버퍼의 포인터.
src: 복사할 원본 문자열의 포인터.
n: 복사할 최대 문자 수.

반환값
dest 포인터를 반환합니다.

동작 방식
src 문자열에서 최대 n 문자만큼 dest로 복사합니다.
src의 길이가 n보다 작으면, dest의 남은 부분은 널 문자(\0)로 채워집니다.
src의 길이가 n보다 길면, dest에 정확히 n 문자만 복사되고 널 문자로 종료되지 않을 수 있습니다.
*/

#define _CRT_SECURE_NO_WARNINGS//이건 꼭 가장 먼저 써야 한다. 
#include <stdio.h>
#include <string.h>


int main() {
    char src[] = "hello";//h,e,l,l,o,'\0'
    char dest[10];

    // 처음 3개의 문자를 src에서 dest으로 복사한다.
    strncpy(dest, src, 3);//scr의 세 번째 글자까지가 desr로 복사됨. NULL문자는 복사되지 않음

    //출력할 때는 NULL문자로 문자열의 끝을 지정해 주어야 하므로 NULL을 끝에 추가해준다.
    dest[3] = '\0';//인덱스 3번째에 NULL을 추가해준다.hel 
    //이 코드가 없을 때의 결과
    //Source: hello
    //Destination: hel儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆 ? 俠j
    //NULL이 없어서 문자열의 끝을 모름.

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

/*
실행 결과
Source: hello
Destination: hel
*/

