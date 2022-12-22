/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:58:43 by aoner             #+#    #+#             */
/*   Updated: 2022/06/10 12:12:09 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>

char	*ft_get_line(char *save);
char	*ft_save(char *save);
size_t	ft_strlen(const char *s);
char	*ft_read_and_save(int fd, char *save);
int		has_return(char *str);
char	*ft_strjoin(char *s1, char const *s2);
char	*get_next_line(int fd);

#endif
