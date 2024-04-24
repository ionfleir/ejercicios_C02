/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:30:08 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/13 17:02:52 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main()
{
	char a[] = "holamundo";
	char b[] = "1123_45";
	char c[] = "";
	int n;
	n = ft_str_is_lowercase(a);
	printf("%d\n", n);
	n = ft_str_is_lowercase(b);
	printf("%d\n", n);
	n = ft_str_is_lowercase(c);
	printf("%d\n", n);
	return(0);
}*/
