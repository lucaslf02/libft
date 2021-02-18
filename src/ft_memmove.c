#include "../libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dest_aux;
	char	*src_aux;

	i = 0;
	dest_aux = (char*)dest;
	src_aux = (char*)src;
	
	if (dest_aux < src_aux)
		while (len >= 0)
		{
			dest_aux[len] = src_aux[len];
			lem--;
		}
	else
		while (i < len)
		{
			dest_aux[i] = src_aux[i];
			i++;
		}

	return (dest);
}