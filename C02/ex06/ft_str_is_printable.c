/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:57:56 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/12 10:57:57 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i = i +1;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int	main()
{
	int	print;
	int	print1;
	int	print2;
	int	print3;	
	char txt[] = "umpatoafogandonumaoiscina";
	char txt1[] = "\n";
	char txt2[] = "147369";
	char txt3[] = "!@#@$%#;";
	
	print = ft_str_is_printable(txt);
	printf("Resultado do texto em minusculo: %d\n", print);
	
	print1 = ft_str_is_printable(txt1);
	printf("Resultado do texto em maiuscula: %d\n", print1);
	
	print2 = ft_str_is_printable(txt2);
	printf("Resultado do texto em numeros: %d\n", print2);
	
	print3 = ft_str_is_printable(txt3);
	printf("Resultado do texto em simbulos: %d\n", print3);
}*/
