#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while(str[i] != '\0')
		i++;
	return (i);
}