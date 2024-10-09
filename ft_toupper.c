/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:47:29 by mmonika           #+#    #+#             */
/*   Updated: 2024/10/09 16:05:03 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}


// int main(void)
// {
//     char str[] = "v";
//     ft_toupper(str);
//     printf("%s\n", str);
//     return 0;
// }