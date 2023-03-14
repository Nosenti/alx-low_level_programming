#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer or NULL
 */

int count_words(char *str)
{
	int i, count, in_word;

	count = 0;
	in_word = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
	}
	return (count);
}

void copy_word(char *str, int i, char *word)
{
	int j;

	j = 0;
	while (str[i] && str[i] != ' ')
	{
		word[j++] = str[i++];
	}
	word[j] = '\0';
}

char **strtow(char *str)
{
	int i, j, num_words, word_len;
	char **words, *word;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ')
		{
			i++;
		}

		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != ' ')
		{
			word_len++;
		}
		if (word_len > 0)
		{
			word = (char *)malloc((word_len + 1));
			if (word == NULL)
			{
				for (i = 0; i < j; i++)
				{
					free(words[i]);
				}
				free(words);
				return (NULL);
			}
			copy_word(str, i, word);
			words[j++] = word;
			i += word_len;
		}
	}
	words[j] = NULL;
	return (words);
}
