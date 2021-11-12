#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFF_SIZE
# define BUFF_SIZE 1000
#endif

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_get_line(char *left_str);
char	*ft_new_left(char *left_str);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(char *str);

#endif