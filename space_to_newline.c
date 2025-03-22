#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
	char str[] = "hello my name is Chull Su.";
	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == ' ') {
			str[i] = '\n';
		}
	}
	printf("%s", str);
}




