/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:54:41 by mmonika           #+#    #+#             */
/*   Updated: 2024/10/09 16:01:48 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *cs1;
    char *cs2;
    
    i = 0;
    cs1 = (char *)s1;
    cs2 = (char *)s2;
    while ((cs1[i] != '\0' || cs2[i] != '\0') && i < n)
    {
        if (cs1[i] != cs2[i])
            return (cs1[i] - cs2[i]);
        i++;
    }
    return (0);
}


// int main (void)
// {
//     char s1[] = "Gdi";
//     char s2[] = "gdhes";
//     int func = ft_memcmp(s1, s2, 2);
//     int lib = memcmp(s1, s2, 2);
// 	printf("function: %i\nlibrary: %i\n", func, lib);
// 	return(0);
// }