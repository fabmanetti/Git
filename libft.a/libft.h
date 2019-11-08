/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:15:22 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/08 18:40:01 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char*	ft_strchr(const char *s, int c);
char*	ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, int n);
long	ft_strlcpy(char *dst, const char *src, unsigned int size);
long	ft_strlcat(char *dst, const char *src, unsigned int size);
