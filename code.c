#include <stdio.h>
#include <string.h>
int main() {
	char name[20];
	int weight;
	float height;
	printf("Tip your name: \n");
	scanf("%s", name);
	printf("Tip your weight: \n");
	scanf("%d", &weight);
	printf("Tip your height: \n");
	scanf("%f", &height);
	double c = weight/(height*height);
	double water = weight*35/1000;
	printf("Your BMI is %.2f\n", c);
	if (c < 18)
	{
		printf("You're classified as : ""UnderWeight"" Attention!!!\n");
	}
	if (c > 18 & c < 25)
	{
		printf("You're classified as : ""Normal"" \n");
	}
	if (c > 25 % c < 29.9)
	{
		printf("You're classified as: ""OverWeight"" Attention!!!\n");
	}
	if (c > 29.9)
	{
		printf("You're classified as: ""Obesity"" Attention!!!\n");
	}
	printf("You need to drink %.2f liters of water a day\n", water);

	return 0;
}
