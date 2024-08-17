/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:32:15 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/11 16:32:18 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i +1;
	}
	dest[i] = '\0';
	return (dest);
}
int	main()
{
	char src[] = "bem vjhbjindo a 42";
	char dest[] = "um patoasdasdasd";
	ft_strcpy(dest, src);
	printf("origin: %s\n destino: %s\n", src, dest);
	
}
