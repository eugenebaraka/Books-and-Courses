# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int number = get_int("What number are you testing parity for? ");

    if (number % 2 == 0){
        printf("%i is even \n", number);
    }
    else {
        printf("%i is odd \n", number);
    }
}