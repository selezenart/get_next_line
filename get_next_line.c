/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselezen <aselezen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:37:31 by aselezen          #+#    #+#             */
/*   Updated: 2026/05/14 19:24:53 by aselezen         ###   ########.fr       */
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
	int		fd;
	char	buf[30];
	int		bytes;

	fd = open("test.txt", 0);

	bytes = read(fd, buf, 6);
	buf[bytes] = '\0';

	printf("%s\n", buf);

	close(fd);
}