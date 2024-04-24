/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:47:37 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/13 21:20:19 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	imp;

	imp = 0;
	while (str[imp] != '\0')
	{
		if (str[imp] < 32 || str[imp] > 126)
		{
			return (0);
		}
		imp++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
	char a[] = "hola";
	char b[] = "\n";
	char c[] = "";
	int n;
	n = ft_str_is_printable(a);
	printf("%d\n", n);
	n = ft_str_is_printable(b);
	printf("%d\n", n);
	n = ft_str_is_printable(c);
	printf("%d\n", n);
}*/
