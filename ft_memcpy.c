/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:20:39 by mmonika           #+#    #+#             */
/*   Updated: 2024/10/09 16:01:59 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    char *cdest;
    char *csrc;
    cdest = (char *)dest;
    csrc = (char *)src;
    
    while(i++ < n)
        cdest[i] = csrc[i];
    return (dest);
}


// int main(void)
// {
//     char src[] = "42 school";
//     char dest[8];
//     ft_memcpy(dest, src, 5);
//     printf("%s", dest);
//     return 0;
// }