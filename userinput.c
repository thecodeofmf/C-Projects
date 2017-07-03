/*This file is a simple program that takes user input
* until the user enters the '|' character.  The program
* then takes the user input and echos it back to the system.
*/

#include <stdio.h>

int main(void)
{
    char ch;
    
    while ((ch = getchar()) != '|')
        putchar(ch);

    return 0;
}

