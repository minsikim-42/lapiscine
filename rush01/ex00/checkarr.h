/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heelee <heelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 02:20:20 by heelee            #+#    #+#             */
/*   Updated: 2020/11/29 02:45:00 by heelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKARR_H
# define CHECKARR_H

int		ft_checkcol(int *arr, int input[][4], int col);
int		ft_b(int *arr, int col);
int		ft_checkrow(int *arr, int arrlength, int startnum, int endnum);
int		checkarrendnum(int *arr, int arrlength);
int		checkarrstartnum(int *arr, int arrlength);

#endif
