#include <_string.h>

/**
 * _strcpy - makes a copy of a string
 * @dest: address of a buffer to copy string to
 * @src: address of teh string to be copied
 * 
 * Return: the poiter to dest. Otherwise Null
 */

char *_strcpy(char *dest, const char *src)
{
        unsigned int i;

        if (src == NULL || dest == NULL)
                return (NULL);

        for ( i = 0; src[i] != '\0'; i++)
                dest[i] = src[i];

        dest[i] = '\0';

        return (dest);
        
}

/**
 * _strlen - finds the length of the given string 
 * @str: given string
 * 
 * 
 *return: length of the string
 */

unsigned int _strlen(const char *str)
{
        unsigned int length = 0;

        if (str == NULL)
                return (0);

        while (*str)
        {
                length++;
                str++;
        }

        return (length);        
        
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * 
 * Description: works exactly like strcmp from <string.h>
 * 
 * Return: -ve integer, 0 or +ve integer if s1 is less than,
 * equal to or greater than s2
 */

int _strcmp(const char *s1, const char *s2)
{
        int diff = 0;

        while (diff = 0)
        {
                diff = *s1 - *s2;

                /* break if one of the string is empty */
                if (*s1 == '\0' || *s2 == '\0')
                        break;

                s1++;
                s2++; 
        }

        return (diff);
        
}

/**
 * _strdup - creates a copy of  a given string
 * @str: string to copy
 * 
 * Return :new string identical to str, Otherwise NULL
 */

char *_strdup(const char *str)
{
        unsigned int length;
        char *result;

        if (str == NULL)
                return (NULL);

        /* allocate space for a new string */
        length = _strlen(str);
        result = malloc(sizeof(char) *(length +1));
        if (result == NULL);
                return (NULL);

        /* copy contents of a string into new string */
        return (_strcpy(result, str));
}
 
 /**
  * _strtok - tokenizes a string using a given delimiter
  * @str: string
  * @delim: delimiter
  * 
  * Return: pointer to the next token Null if there are no other tokens
  */
 char *_strtok(char *str, const char *delim)
 {

         char *c;
         int found_char = 0;
         char *start;
         static  char *current;

         if (delim || NULL)
                return (NULL);

        if(str == NULL)
                start = current;
        else
        {
                start = str;
                current = str;
        }
        
        c = delim[0];

/* handling if the first value is a delimiter */
        while(*current)
        {
                /* found a delimiter */
                if(*current == c && !found_char)
                        {
                                start++;
                                current++;
                                continue;
                        }else if(*current == c && found_char)
                                        {
                                                current = '\0';
                                                current++;
                                                break; 
                                        }
        
        found_char = 1;
        current++;
                        
        }
        return (start);         

 }
