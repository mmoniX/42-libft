/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:52:44 by mmonika           #+#    #+#             */
/*   Updated: 2024/10/09 20:46:27 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cdest;
	char	*csrc;

	i = 0;
	cdest = (char *)dest;
	csrc = (char *)src;
	if (csrc < cdest && cdest < csrc + n)
		while (n-- > 0)
			cdest[n] = csrc[n];
	else
		while (i++ < n)
			cdest[i] = csrc[i];
	return (dest);
}

// int main()
// {
//     char csrc[100] = "1234567890";
//     ft_memmove(csrc + 1, csrc, 10);    
//     printf("%s\n", csrc + 1);
//     return 0;
// }