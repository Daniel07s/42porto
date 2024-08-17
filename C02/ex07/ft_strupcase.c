/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:34:45 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/12 11:34:47 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
int	main()
{
	char	*caps;
	char	*caps1;
	char	*caps2;
	char	*caps3;	
	char txt[] = "umpatoafogandonumaoiscina";
	char txt1[] = "comoeuresolvo";
	char txt2[] = "tentativa";
	char txt3[] = "creu";
	
	caps = ft_strupcase(txt);
	printf("Resultado do texto em minusculo: %s\n", caps);
	
	caps1 = ft_strupcase(txt1);
	printf("Resultado do texto em maiuscula: %s\n", caps1);
	
	caps2 = ft_strupcase(txt2);
	printf("Resultado do texto em numeros: %s\n", caps2);
	
	caps3 = ft_strupcase(txt3);
	printf("Resultado do texto em simbulos: %s\n", caps3);
}
/*#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int 	i;
	
	i = 1;
	while (i < argc)
	{
		printf("%s ", ft_strupcase(argv[i]));
		i++;
	}
	return (0);
}

