/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:55:27 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/14 16:17:49 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 65 && str[letter] <= 90)
			str[letter] = str[letter] +32;
		letter++;
	}
	return (str);
}

/*#include <stdio.h>

int main(int argc, char *argv[])
{
	argc = 0;
	printf("%s", ft_strlowcase(argv[2]));
	return (0);
}*/
