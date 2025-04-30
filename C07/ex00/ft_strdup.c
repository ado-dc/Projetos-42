#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*copy;

	i = 0;
	while (str[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
