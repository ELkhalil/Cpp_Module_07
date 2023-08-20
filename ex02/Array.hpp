/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:54:57 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/20 22:34:33 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <ostream>
#include <stdexcept>

template<typename T>
class Array
{
public:
    Array           ( void );
    Array           ( unsigned int n );
    Array           ( Array const& other );
    ~Array          ( void );

    Array&          operator= ( Array const& other );
    T&              operator[] ( unsigned int index );
    T const&        operator[](size_t index) const;
    unsigned int    size( void ) const;
    T*              get_array( void ) const;
private:
    T*              _array;
    unsigned int    _size;
};

template<typename T>
std::ostream& operator<<(std::ostream& out, Array<T> const& tmp);

#include "Array.tpp"

#endif