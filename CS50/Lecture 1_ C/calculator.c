# include <cs50.h>
# include <stdio.h>

// Code chunk 1
int main(void)
{
    printf("Hellow, Baraka \n");
}

// Code chunk 2
int main(void)
{
    int number_one = get_int("Type in a number:  ");
    int number_two = get_int("Type in another one: ");

    int sum = number_one + number_two;

    printf("The sum of the two numbers is %i \n", sum);
}

// Code chunk 2
int main(void)
{
    long number_one = get_long("Type first number:  ");
    long number_two = get_long("Type second number:  ");

    long sum = number_one + number_two;

    printf("The sum is %li\n", sum);
}