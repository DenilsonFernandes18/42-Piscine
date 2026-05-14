/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:04:27 by denferna          #+#    #+#             */
/*   Updated: 2024/12/11 20:04:33 by denferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	if (c >= 'A' && c >= 'Z')
		return (1);
	return (ft_is_number(c));
}

int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}
