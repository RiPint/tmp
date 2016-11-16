#include "libft.h"

char		*ft_strndup(const char *str, size_t n)
{
	char	*str_copy;
	int	size;
	int	count;

	if (!n || !str || !*str)
		return (NULL);
	str_copy = NULL;
	count = 0;
	size = (int)ft_strlen(str);
	str_copy = malloc(size * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);
	while (count != size && n--)
	{
		str_copy[count] = str[count];
		count++;
	}
	str_copy[count] = '\0';
	return (str_copy);
}
