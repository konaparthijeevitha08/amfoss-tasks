#include <stdio.h>
#include <cs50.h> //include libraries

int main(void)
{
    string name = get_string("What is your name?\n");//get user input
    printf("Hello, %s", name); //print hello, user input
}