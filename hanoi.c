#include <stdio.h>

int hanoi(int n)
{
	if (n == 1) return 1;
	else return 2*hanoi(n-1) + 1;
}

int main(int argc, char *argv[])
{
	int inum, cnt = 0;

	while (1) {
		scanf("%d", &inum);
		if (inum == 0) break;
		printf("Teste %d\n", ++cnt);
		printf("%d\n", hanoi(inum));
	}

	return 0;
}
