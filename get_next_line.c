/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselezen <aselezen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:37:31 by aselezen          #+#    #+#             */
/*   Updated: 2026/05/15 18:39:25 by aselezen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// char *get_next_line(int fd)
// {
//     size_t BUFFER_SIZE;

//     if (!BUFFER_SIZE)
//     BUFFER_SIZE = 1;
// }

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	buf[BUFFER_SIZE + 1];
	int	bytes;
	char	*remainer = NULL;
	char	*line;
	char	*nl;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);

	line = ft_strdup("");
	while ((bytes = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[bytes] = '\0';
		nl = ft_strchr(buf, NEW_LINE);
		if (nl)
		{
			*nl = '\0';
			line = ft_strjoin(line, buf);
			remainer = ft_strdup(nl + 1);
			break;
		}
		else
			line = ft_strjoin(line, buf);
	}

	printf("Line %s\n", line);
	printf("Remainer %s\n", remainer);
	free(line);
	free(remainer);
	close(fd);
}

// static char *get_line(char **remainder)
// {
    
// }