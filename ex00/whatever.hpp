/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:43:46 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/17 20:29:00 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void    swap(T& x, T& y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template<typename T>
T const&  min(T const& x, T const& y)
{
    return ((x < y && x != y) ? x : y);
}

template<typename T>
T const&  max(T const& x, T const& y)
{
    return ((x > y && x != y) ? x : y);
}

#endif