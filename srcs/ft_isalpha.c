/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:45:03 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/07 22:03:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*    #include <ctype.h>
*
*    isalpha  -  int isalpha(int c);
*
*	 RETURN VALUE
*       The  values returned are nonzero 
* 		if the character c falls into the tested class,
*       and zero if not.
**/

#include "../includes/libft.h"
#include "libft.h"

int	ft_isalpha(int c)
{	
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
