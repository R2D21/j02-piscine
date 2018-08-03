/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:49:04 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/02 18:44:46 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		aff(char f, char m, char l)
{
	ft_putchar(f);
	ft_putchar(m);
	ft_putchar(l);
	if (f != '7' || m != '8' || l != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	l++;
	return (l);
}

void	ft_print_comb(void)
{
	char f;
	char m;
	char l;

	f = '0';
	m = '1';
	l = '2';
	while (f <= '7' && m <= '8' && l <= '9')
	{
		l = aff(f, m, l);
		if (l == '9' + 1)
		{
			l = m + 1;
			m++;
		}
		if (m == '8' + 1)
		{
			m = f + 1;
			f++;
		}
		if (l == m)
			l++;
		if (m == f)
			m++;
	}
}
