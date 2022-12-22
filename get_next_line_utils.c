/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:59:09 by aoner             #+#    #+#             */
/*   Updated: 2022/06/10 12:03:12 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *save, char const *bufferx)
{
	char	*p;
	size_t	i;
	size_t	m;

	if (!bufferx)
		return (NULL);
	i = 0;
	m = 0;
	p = (char *)malloc((ft_strlen(bufferx) + ft_strlen(save) + 1) \
	* sizeof(char));
	if (!p)
		return (NULL);
	while (save && save[i])
	{
		p[i] = save[i];
		i++;
	}
	free(save);
	while (bufferx[m])
		p[i++] = bufferx[m++];
	p[i] = '\0';
	return (p);
}

int	has_return(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
