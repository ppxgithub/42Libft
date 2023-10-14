/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praewpruettipongsapuk <praewpruettipong    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:50:48 by praewpruett       #+#    #+#             */
/*   Updated: 2023/10/14 17:51:04 by praewpruett      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dst;
	s = (const char *)src;
	while (d < s && i < len)
	{
		*(d + i) = *(s + i);
		i++;
	}
	while (d > s && len > 0)
	{
		*(d + (len - 1)) = *(s + (len - 1));
		len--;
	}
	return (dst);
}
