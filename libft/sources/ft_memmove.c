

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;

	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	if (dest > src)
	{
		while (n > 0)
		{
			pdest[n - 1] = psrc[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (pdest);
}
