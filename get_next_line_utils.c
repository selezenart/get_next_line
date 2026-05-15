/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselezen <aselezen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 19:09:04 by aselezen          #+#    #+#             */
/*   Updated: 2026/05/15 15:10:08 by aselezen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
    size_t len;

    len = 0;
    if (!str)
        return (len);
    while (str[len])
        len++;
    return (len);
}

char *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    while (*s)
    {
        if ((unsigned char)*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    if ((unsigned char)*s == (unsigned char)c)
        return ((char *)s);
    return (NULL);
}

char *ft_strdup(const char *s1)
{
    size_t len;
    char *copy;
    size_t i;

    if (!s1)
        return (NULL);
    len = ft_strlen(s1);
    copy = malloc(len + 1);
    if (!copy)
        return (NULL);
    i = 0;
    while (i < len)
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

char *ft_strjoin(char *s1, const char *s2)
{
    size_t len1;
    size_t len2;
    char *joined;
    size_t i;

    if (!s1 && !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    joined = malloc(len1 + len2 + 1);
    if (!joined)
    {
        free(s1);
        return (NULL);
    }
    i = 0;
    while (i < len1)
    {
        joined[i] = s1[i];
        i++;
    }
    while (*s2)
    {
        joined[i++] = *s2++;
    }
    joined[i] = '\0';
    free(s1);
    return (joined);
}