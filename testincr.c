#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;

	for (i = 0; i < 10; i++){
		printf("N = %d\n", i);
		printf("Incr(%d)\n", incr(i));
		//printf("Incr2(%d)\n", incr2(i, i));
	}
	return 0;
}