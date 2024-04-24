/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:23:16 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/16 18:06:03 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 97 && str[letter] <= 122)
			str[letter] = str[letter] -32;
		letter++;
	}
	return (str);
}
/*#include <stdio.h>

int main(int argc, char *argv[])
{
	argc = 0;
	printf("%s", ft_strupcase(argv[1]));
	return (0);
}*/
