#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * split_string - Splits a string into an array of words
 * @str: The string to split
 * @delim: The delimiter character to use for splitting
 *
 * Return: The array of words (strings) or NULL if memory allocation fails
 */
char **split_string(const char *str, char delim)
{
    char **words = NULL;
    int word_count = 0;
    int i, j, k;
    int len = strlen(str);

    /* Count the number of words */
    for (i = 0; i < len; ++i)
    {
        if (str[i] != delim)
        {
            word_count++;
            while (i < len && str[i] != delim)
                i++;
        }
    }

    /* Allocate memory for the array of words */
    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    /* Split the string into words */
    i = 0;
    j = 0;
    while (i < len)
    {
        if (str[i] != delim)
        {
            k = 0;
            while (i < len && str[i] != delim)
            {
                k++;
                i++;
            }

            /* Allocate memory for the current word */
            words[j] = (char *)malloc((k + 1) * sizeof(char));
            if (words[j] == NULL)
            {
                /* Memory allocation failed, free previously allocated memory */
                for (i = 0; i < j; ++i)
                    free(words[i]);
                free(words);
                return NULL;
            }

            /* Copy the word into the array */
            strncpy(words[j], str + i - k, k);
            words[j][k] = '\0';
            j++;
        }
        else
        {
            i++;
        }
    }

    words[j] = NULL; /* Mark the end of the array */

    return words;
}

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;
    int i;

    tab = split_string("      ALX School         #cisfun      ", ' ');
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }

    print_tab(tab);

    /* Free the allocated memory */
    for (i = 0; tab[i] != NULL; ++i)
        free(tab[i]);
    free(tab);

    return (0);
}

