/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:10:02 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 17:10:04 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    if(!s)
        return;
    while(s[i] != '\0')
    {
        write(fd,&s[i],1);
        i++;
    }


}

/*
int main(void)
{
    char *str = "Hello World!";
    ft_putstr_fd(str,1);
    return(0);
}
*/
