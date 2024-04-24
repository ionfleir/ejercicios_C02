/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:41:29 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/14 19:32:09 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	digt;

	digt = 0;
	while (str[digt] != '\0')
	{
		if (str[digt] < 48 || str[digt] > 57)
		{
			return (0);
		}
		digt++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	argc = 0;
	printf("este es el valor %d",  ft_str_is_numeric(argv[1]));
	return (0);
}*/
