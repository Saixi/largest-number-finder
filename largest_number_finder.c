#include <stdio.h>

int main(void) {
 
	float i, number;
	i = 0;

	for(;;) {

		printf("Enter a number: ");
		scanf("%f", &number);

		if (number == 0)
			break;
		else if (number > i)
			i = number;

	}

	printf("The largest number entered was %.2f", i);

	return 0;
}
