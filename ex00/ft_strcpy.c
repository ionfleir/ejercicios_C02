/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-09 18:04:41 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/14 19:48:57 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	char src[] = "buenos dias";	
	argc = 0; 
	printf("la copia de dest es %s", ft_strcpy(src, argv[1]));
	return (0);
}*/
