/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselezen <aselezen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 19:09:04 by aselezen          #+#    #+#             */
/*   Updated: 2026/05/14 20:09:45 by aselezen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
    size_t len;

    len = 0;
    if (!str)
        return (len);
    while(str[len])
        len++;
    return (len);
}

char *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    while (*s)
    {
        if ((unsigned char) *s == (unsigned char) c)
            return ((char *)s);
        s++;
    }
    if ((unsigned char) *s == (unsigned char) c)
            return ((char *)s);
    return (NULL);
}