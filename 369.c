#include <stdio.h>
#include <conio.h>

#pragma warning (disable : 4996)

int main(void)
{
	int max;

	char str[10];

	int i, j, k, five = 0;

	int jjak = 0;

	printf("How many 369 do you want?  ");
	scanf("%d", &max);
	puts("");

	for (i = 1; i <= max; i++) {
		itoa(i, str, 10);

		j = 0;
		while (str[j] != NULL) {
			if (str[j] == '3' || str[j] == '6' || str[j] == '9') {
				jjak++;
			}
			j++;
		}

		if (jjak > 0) {
			for (k = 0; k < jjak; k++) {
				printf("¦");
			}
			printf("\t");
		}
		else {
			printf("%d\t", i);
		}
		jjak = 0;


		five++;

		if (five == 5) {
			puts("");
			puts("- - - - - - - - - - - - - - - - - - -");
			five = 0;
		}
	}

	_getch();
	return 0;
}