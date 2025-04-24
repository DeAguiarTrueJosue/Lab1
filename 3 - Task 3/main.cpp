#include <stdio.h>
#include <stdlib.h>


int main()
{
	int highestScore = 0;
	int lowestScore = 100;
	float avarageScore = 0;
	int perfectScores = 0;
	int aboveAvarageScores = 0;
	int amount = 0;

	int numberEntered = 0;

	printf("This is your personal score analyser\n");

	do
	{
		printf("Please, enter a number between 1-100:");
		scanf_s("%i", &numberEntered);
		system("cls");

		if (numberEntered >= 0 && numberEntered <= 100) {
			amount++;
			if (numberEntered > highestScore)
			{
				highestScore = numberEntered;
			}
			if (numberEntered < lowestScore)
			{
				lowestScore = numberEntered;
			}
			if (amount != 0)
			{
				avarageScore = (avarageScore * (amount - 1) + numberEntered) / amount;
			}
			if (numberEntered == 100) { perfectScores++; }
			if (numberEntered >= 70) { aboveAvarageScores++; }

			printf("The number you entered was %i\n", numberEntered);
			if (numberEntered >= 90)
			{
				printf("Excelent!\n");
			}else if (numberEntered >= 70)
			{
				printf("Good!\n");
			}else if (numberEntered >= 50)
			{
				printf("Avarage.\n");
			}else
			{
				printf("Needs improvement.\n");
			}
			printf("Your highest score was %i\n", highestScore);
			printf("Your lowest score was %i\n", lowestScore);
			printf("Your avarage score was %.1f\n", avarageScore);
			printf("The amount of perfect scores you got was %i\n", perfectScores);
			printf("The amount of scores above avarage you got was %i\n", aboveAvarageScores); 

		}
		else {
			if (amount == 0) {
				printf("You need to inout at least one valid number\n");
				numberEntered = 1;
			}
		}
	} while (numberEntered > 0);

	return 0;
}