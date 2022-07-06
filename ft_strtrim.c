/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:53:50 by lguedes           #+#    #+#             */
/*   Updated: 2022/07/06 18:53:51 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	int		i_start;
	int		i_end;

	if (!s1)
		return (NULL);
	i_end = ft_strlen(s1) - 1;
	i_start = 0;
	while (s1[i_start] != '\0' && ft_strchr(set, s1[i_start]))
	{
		i_start++;
	}
	while (s1[i_end] != '\0' && ft_strchr(set, s1[i_end]) && i_end > i_start)
	{
		i_end--;
	}
	str1 = ft_substr(s1, i_start, i_end - i_start + 1);
	return (str1);
}
