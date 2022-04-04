#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age;
	bool teenager = false;

	printf("Age: ");
	scanf("%d", &age);

	if (age >= 13 && age <= 19) {
		teenager = true;
	}

	printf("Teenager: %s\n", teenager ? "true" : "false");

	return 0;
}