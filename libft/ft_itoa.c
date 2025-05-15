/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-dc <ado-dc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:44:11 by ado-dc            #+#    #+#             */
/*   Updated: 2025/05/15 16:15:45 by ado-dc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int				len;
	unsigned int	nb;

	len = 0;
	if (n <= 0)
	{
		len++;
		nb = (unsigned int)(-((long)n));
	}
	else
		nb = (unsigned int)n;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nb;

	len = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		nb = (unsigned int)(-((long)n));
	else
		nb = (unsigned int)n;
	while (len--)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
		if (n < 0 && len == 0)
			str[0] = '-';
	}
	return (str);
}
