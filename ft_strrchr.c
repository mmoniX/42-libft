/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:02:33 by mmonika           #+#    #+#             */
/*   Updated: 2024/10/10 12:37:50 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	i = len;
	while (str[i - 1] != '\0')
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}

// int main(void)
// {
//     char str[] = "hi there!";
//     int ch = 'e';
//     char *res = ft_strrchr(str, ch);
//     printf("%s\n", res);
//     return (0);
// }