/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:33:37 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 11:33:42 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == NULL || s == NULL)
		return (dest);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

/*
**Test

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[];
    char dest[6];

    src[] = "Hello";
    ft_memcpy(dest, src, 6);
    printf("ft_memcpy value: %s\n", dest);
    memcpy(dest, src, 6);
    printf("memcpy value: %s\n", dest);
    return (0);
}
*/
