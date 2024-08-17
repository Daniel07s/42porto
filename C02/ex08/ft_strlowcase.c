/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:10:47 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/12 12:10:49 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*int	main()
{
	char	*slin;
	char	*slin1;
	char	*slin2;
	char	*slin3;	
	char txt[] = "ZECAPAGODINHO";
	char txt1[] = "PAOCOMOVO";
	char txt2[] = "CERVEJA";
	char txt3[] = "PISCINE";
	
	slin = ft_strlowcase(txt);
	printf("Resultado do texto em minusculo: %s\n", slin);
	
	slin1 = ft_strlowcase(txt1);
	printf("Resultado do texto em maiuscula: %s\n", slin1);
	
	slin2 = ft_strlowcase(txt2);
	printf("Resultado do texto em numeros: %s\n", slin2);
	
	slin3 = ft_strlowcase(txt3);
	printf("Resultado do texto em simbulos: %s\n", slin3);
}*/
