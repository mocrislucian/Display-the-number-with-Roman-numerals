#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(void)
{
    int number;

    printf("Enter your number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        if(number >= 10)
        {
            printf("X");
            number -= 10;
        }

        else if(number >= 9)
        {
            printf("IX");
            number -= 9;
        }

        else if(number >= 5)
        {
            printf("V");
            number -= 5;
        }

        else if(number >= 4)
        {
            printf("IV");
            number -= 4;
        }

        else if(number >= 1)
        {
            printf("I");
            number -= 1;
        }
    }
}