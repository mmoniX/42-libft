/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:35:03 by mmonika           #+#    #+#             */
/*   Updated: 2024/10/09 16:01:37 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    char *cstr;

    cstr = (char *)str;
    i = 0;
    while (cstr[i] != '\0' && i < n)
    {
        if (cstr[i] == c)
            return (&str[i]);
        i++;
    }
    return(0);
}


// int main(void)
// {
//     char str[] = "hi there!";
//     int ch = 'e';
//     char *func = ft_memchr(str, ch, 6);
//     char *lib = memchr(str, ch, 6);
// 	printf("function: %s\nlibrary: %s\n", func, lib);
//     return (0);
// }