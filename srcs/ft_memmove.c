/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:59:18 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/09 17:04:59 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;
	unsigned char *ptr_src;
	size_t position;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	position = n;

	while (position)
	{
		if (1)
		{
			ptr_dest[position] = ptr_src[position]; // dst == buffer
			printf("1 -");
		}
		else
		{	
			ptr_dest [position - 1] = ptr_src [position - 1]; // dst != buffer
			printf("2 -");

		}
		position--;
	}

		printf("dest %s  ", ptr_dest);

return (&ptr_dest[0]);
}
