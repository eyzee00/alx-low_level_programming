#include "main.h"
#include <stdlib.h>
/**
 * word_count - calculate number of substrings in a string
 * @str: string being operated on
 * Return: number of words
 */
int word_count(char *str)
{
	int i, count = 0;

	for (i = 0; *(str + i) != 0; i++)
	{
		if (*str == 32)
			str++;
		else
		{
			for (; *(str + i) != 32 && *(str + i) != 0; i++)
				str++;
			count++;
		}
	}
	return (count);
}
/**
 * free_curr_grid - frees the grid from the heap memory
 * @string: the grid to be freed
 * @index: the index where malloc failed
 * Return: void
 */
void free_curr_grid(char **grid, int index)
{
	while (index > 0)
		free(grid[--index]);
	free(grid);
}

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
	int word_counter = 0, row = 0, column = 0, sub_len = 0;
	char **wordlist, *current_word;

	if (str == 0 || *str == 0)
		return (NULL);
	word_counter = word_count(str);
	if (word_counter == 0)
		return (NULL);
	wordlist = (char **)malloc((word_counter + 1) * sizeof(char *));
	if (wordlist == NULL)
		return (NULL);
	while (*str != 0 &&  row < word_counter)
	{
		if (*str == 32)
			str++;
		else
		{
			current_word = str;
			while (*str != 32 && *str != 0)
			{
				sub_len++;
				str++;
			}
			wordlist[row] = (char *)malloc((sub_len + 1) * sizeof(char));
			if (wordlist[row] == NULL)
			{
				free_curr_grid(wordlist, row);
				return (NULL);
			}
			while (*current_word != 32 && *current_word != 0)
			{
				wordlist[row][column] = *current_word;
				current_word++;
				column++;
			}
			wordlist[row][column] = '\0';
			row++; column = 0; sub_len = 0; str++;
		}
	}
	return (wordlist);
}
