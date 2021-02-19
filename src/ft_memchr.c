#include "../libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int						i;
	unsigned char	*s_aux;
	unsigned char	c_aux;

	s_aux = (char*)s;
	c_aux = (char)c;
	i = 0;

	while (i < n)
	{
		if (*s_aux[i] == c_aux)
			return (s_aux[i]);
		i++;
	}
	return (NULL);
}
