/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:06:08 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/13 20:45:11 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	alft;

	alft = 0;
	while (str[alft] != '\0')
	{
		if (str[alft] < 65 || str[alft] > 90)
		{
			return (0);
		}
		alft++;
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
	char a[] = "HOLAMUNDO";
	char b[] = "12345678";
	char c[] = "";
	int n;
	n = ft_str_is_uppercase(a);
	printf("%d\n", n);
	n = ft_str_is_uppercase(b);
	printf("%d\n", n);
	n = ft_str_is_uppercase(c);
	printf("%d\n", n);
	return (0);
}*/
