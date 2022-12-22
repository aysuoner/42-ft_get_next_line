/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:59:32 by aoner             #+#    #+#             */
/*   Updated: 2022/06/10 12:17:15 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <unistd.h>
# include <stdlib.h>

char	*ft_get_line(char *save);
char	*ft_save(char *save);
size_t	ft_strlen(const char *s);
char	*ft_read_and_save(int fd, char *save);
int		has_return(char *str);
char	*ft_strjoin(char *save, char const *bufferx);
char	*get_next_line(int fd);

#endif
