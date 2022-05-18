#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - split string without the use of strtok
 * 
 * Return: (0) success
 */

int main()
{
        char arr[100];
        int i = 0, len = 0;

        printf("Enter a string: ");
        fgets(arr, 100, stdin);

        len = strlen(arr);

        for ( i = 0; i < len; i++)
        {
                if (arr[i] == '=')
                {
                        arr[i] = '\0';
                }
                
        }
        puts(arr);

        return (0);
}