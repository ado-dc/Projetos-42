/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-dc <ado-dc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:24:31 by ado-dc            #+#    #+#             */
/*   Updated: 2025/05/16 13:15:28 by ado-dc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contpalavra(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_contpalavra(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
			result[j++] = ft_substr(s, k, i - k);
	}
	result[j] = NULL;
	return (result);
}
