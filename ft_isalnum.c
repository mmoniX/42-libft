/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:30:46 by mmonika           #+#    #+#             */
/*   Updated: 2024/10/09 17:46:39 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)

{
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}


// int main(void)
// {
//     char *str = "GSH5$£££^4322AGE";
//     int n = ft_isalnum(str);
//     n = n + '0';
//     write (1, &n, 1);
//     write (1, "\n", 1);
//     return 0;
// }