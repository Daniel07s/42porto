/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:44:47 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/02 12:44:54 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	numero;

	numero = '0';
	while (numero <= '9')
	{
		write(1, &numero, 1);
		numero = numero +1;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
}
*/
