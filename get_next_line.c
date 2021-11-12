#include "get_next_line.h"
char	*ft_read_left_str(int fd, char *left_str)
{
	char	*buff;
	int		rd_b;

	buff = malloc((BUFF_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_b = 1;
	while (!ft_strrchr(left_str, '\n') && rd_b != 0)
	{
		rd_b = read(fd, buff, BUFF_SIZE);
		if (rd_b == -1)
		{
			free (buff);
			return (NULL);
		}
		buff[rd_b] = '\0';
		left_str = ft_strjoin(left_str, buff);
	}
	free (buff);
	return (left_str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*left_str;

	if (fd < 0 || BUFF_SIZE <= 0)
		return (0);
	left_str = ft_read_left_str(fd, left_str);
	if (!left_str)
		return (NULL);
	line = ft_get_line(left_str);
	left_str = ft_new_left(left_str);
	return (line);
}