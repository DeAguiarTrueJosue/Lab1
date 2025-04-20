#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int decision;
	int maxNumber;

	printf("Welcome to the pattern generation\n");

	do
	{
		printf("To start, please select the pattern you wish to see:\n");
		printf("1 - Right triangle\n");
		printf("2 - Number piramid\n");
		printf("3 - Diamond pattern\n");
		printf("4 - Hollow square\n");
		scanf_s("%i", &decision);

	} while (decision < 0 || decision > 4);

	do
	{
		printf("To start the selected pattern, please choose a number between 1 and 10\n");
		scanf_s("%i", &maxNumber);

	} while (maxNumber < 0 || maxNumber > 10);

	switch (decision)
	{
	case 1:system("cls");
		for (int i = 1; i <= maxNumber; i++)
		{
			for (int x = 1; x <= i; x++) {
				printf("%i", x);
			}
			printf("\n");
		}
		break;
	case 2:system("cls");
		for (int i = 1; i <= maxNumber; i++)
		{
			for (int x = 1; x <= maxNumber * 2 - 1; x++) {
				if (maxNumber - i < x && maxNumber - i < maxNumber * 2 - x) {
					printf("%i", i);
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		break;
	case 3:system("cls");
		for (int i = 1; i <= maxNumber * 2 - 1; i++)
		{
			for (int x = 1; x <= maxNumber * 2 - 1; x++) {
				if (abs(maxNumber - i) < x && abs(maxNumber - i) < maxNumber * 2 - x) {
					printf("0");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		break;
	case 4:system("cls");
		for (int i = 1; i <= maxNumber; i++)
		{
			for (int x = 1; x <= maxNumber; x++) {
				if (i != 1 && i != maxNumber && x != 1 && x != maxNumber) {
					printf(" ");
				}
				else {
					printf("%i", x);
				}
			}
			printf("\n");
		}
		break;
	default: printf("%i", decision);
		break;
	}

	return 0;
}