#include <cs50.h>
#include <stdio.h> 

// an integer has a total of 32 bits to represent it
// 32 gives us 2^32 permutations 

int main(void)
{
    // prompt use for x
    int first_number = get_int("x: ");

    //prompt user for y
    int second_number = get_int("y: ");

    // perform additon
    printf("%i \n", first_number + second_number);
}


// change integers to long to be able to use big numbers
int main(void)
{
        long num1 = get_long("x: ");
        long  num2 = get_long("y: ");
        printf("%li\n", num1 + num2);
        printf("Hellow, Baraka!\n");
}
