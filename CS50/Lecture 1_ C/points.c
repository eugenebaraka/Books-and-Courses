# include <cs50.h>
# include <stdio.h>

int main(void)
{
    const int MINE = 2

    int points = get_int("How many points did you lose? ");

    if (points < MINE){
        printf("Wow..you are smarter than me \n");
    }
    else if (points > MINE){
        printf("May be a bit dumber? \n");
    }
    else {
        printf("We have the same exact IQ..wow \n");
    }
}