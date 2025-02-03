#include<stdio.h>
#include<conio.h>
#include<string.h>

/*

Q2. Frequency Counter
Develop a program that counts the frequency of each character in a given string.

*/
void main()
{
    char str[100]; // To store the input string
    int freq[256] = {0}; // To store the frequency of each character (ASCII values)
    int i;
    clrscr();

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Calculate the frequency of each character
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++; // Increment the frequency of the character
    }

    // Display the frequency of each character
    printf("Frequency of each character in the string:\n");
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0) // Print only if the character exists in the string
        {
            printf("'%c' occurs %d times\n", (char)i, freq[i]);
        }
    }

    getch();
}