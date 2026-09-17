/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:14:49 by ltrento           #+#    #+#             */
/*   Updated: 2023/11/04 15:57:29 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **matrice, int i)
{
	while (--i >= 0)
	{
		free(matrice[i]);
		matrice[i] = NULL;
	}
	free(matrice);
	matrice = NULL;
	return (NULL);
}

static char	**ft_matrice(char const *s, char **matrice, int n_word, char c)
{
	int	i;
	int	j;
	int	len;
	int	count;

	i = 0;
	j = 0;
	while (i < n_word)
	{
		while (s[j] == c)
			j++;
		len = 0;
		while (s[j + len] != c && s[j + len] != '\0')
			len++;
		matrice[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!matrice[i])
			return (free_all(matrice, i));
		matrice[i][len] = '\0';
		count = len;
		while (len-- > 0)
			matrice[i][len] = s[j + len];
		j = j + count;
		i++;
	}
	return (matrice);
}

static int	ft_find_words(const char *s, char c)
{
	int	flag;
	int	words;

	flag = 0;
	words = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			words++;
			flag = 1;
		}
		s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		n_word;
	char	**matrice;

	if (s == NULL || *s == '\0')
	{
		matrice = ft_calloc(1, sizeof(char *));
		return (matrice);
	}
	n_word = ft_find_words(s, c);
	matrice = ft_calloc((n_word + 1), sizeof(char *));
	if (!matrice)
		return (NULL);
	matrice[n_word] = NULL;
	return (ft_matrice(s, matrice, n_word, c));
}