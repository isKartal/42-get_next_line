/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:00:53 by iskartal          #+#    #+#             */
/*   Updated: 2023/08/30 02:38:03 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4

# endif

int		ft_strlen(char const *s);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*find_line(char *str);
char	*ft_strchr(char *s, int c);
char	*new_str(char *str);

#endif
