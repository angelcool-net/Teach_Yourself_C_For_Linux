#include <stdio.h>

#define GRAMS_PER_POUND 454

const int TARGET_YEAR = 2010;

int weight_in_grams;
int weight_in_pounds;
int year_of_birth;
int age_in_2010;

int main(void)
{
    printf("Enter your weight in pounds: ");
    scanf("%d", &weight_in_pounds);

    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth);

    weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
    age_in_2010 = TARGET_YEAR - year_of_birth;

    printf("\nYour weight in grams = %d.", weight_in_grams);
    printf("\nIn 2010 you were %d years old.\n", age_in_2010);

    return 0;
}