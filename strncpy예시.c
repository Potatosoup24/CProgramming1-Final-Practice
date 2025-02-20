//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char src[] = "hello";
//    char dest[10];
//
//    strncpy(dest, src, sizeof(dest));
//
//    printf("Source: %s\n", src);
//    printf("Destination: %s\n", dest);
//
//    return 0;
//}
//가장 일반적인 형태




//마지막에 널문자 추가해주기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "hello";
    char dest[6];//사이즈가 딱 맞는다. 문자열 끝쪽을 신경써주어야겠다. 

    strncpy(dest, src, sizeof(dest) - 1); //null 이전 까지만 복사. 5개만 복사
    //dest가 받을 수 있는 만큼만(char* dest에게 할당된 메모리를 넘지 않기 위함)

    //h,e,l,l,o 만 복사 null은 안 함
    dest[sizeof(dest) - 1] = '\0'; //5번 인덱스. 즉, 6번째 자리에 null 추가해주기. 
    ///h,e,l,l,o,\0 끝에 널문자가 있으므로 문자열이 정상적으로 출력될 것이다.
    //사실 이러한 일은 "sizeof(dest) - 1" 가 충분히 크다면 하지 않아도 될 일이긴 하다.
    //만약 char dest[6];대신 char dest[8];으로 했으면 7개의 값을 복사해서 가져오는 것이다
    //7개 까지 복사할 것이 없으므로 6개만 h,e,l,l,o,\0 으로 채우고 나머지는 \0으로 전부 채운다
    // char dest[8]={h,e,l,l,o,\0,\0,\0}으로 자동으로 되는 것이다.
    //어차피 빈 자리는 NULL문자로 채워주므로 구지 마지막에 NULL을 추가할 필요가 없어지는 것이다
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

