#include <stdio.h>

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a; //a==&a[0]
	printf("a[0]=%d, a[1]=%d, a[2]=%d\n",a[0],a[1],a[2]);
	printf("a[0]=%d, a[1]=%d, a[2]=%d\n", p[0], p[1], p[2]);
	printf("a[0]=%d, a[1]=%d, a[2]=%d\n",*(p+0),*(p+1),*(p+2) );
	printf("a[0]=%d, a[1]=%d, a[2]=%d\n",*(a+0),*(a+1),*(a+2) );
	printf("a[0]=%d, a[1]=%d, a[2]=%d\n", *(&p[0]), *(&p[1]), *(&p[2]));//이런 비효율적 코드를 쓸 일은 없지만
	printf("a[0]=%d, a[1]=%d, a[2]=%d\n", *(&a[0]), *(&a[1]), *(&a[2]));//이해는 꼭 하고 있어야 한다.
	
	return 0;
}