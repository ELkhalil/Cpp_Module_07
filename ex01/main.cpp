/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:59:51 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/20 12:13:15 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() 
{
    size_t size = 5;

    // int checks
    int intArray[size] = {1, 2, 3, 4, 5};
    std::cout << "Printing the intArray before : " << std::endl;
    iter(intArray, size, print_value);
    std::cout << std::endl << "intArray After Multiplication : " << std::endl;
    iter(intArray, size, multiply_value);
    iter(intArray, size, print_value);
    std::cout << std::endl << "-----------" << std::endl;

    // double checks
    double doubleArray[size] = {1.10, 2.20, 3.30, 4.40, 5.50};
    std::cout << "Printing the original doubleArray:" << std::endl;
    iter(doubleArray, size, print_value);
    std::cout << std::endl << "doubleArray After Multiplication : " << std::endl;
    iter(doubleArray, size, multiply_value);
    iter(doubleArray, size, print_value);
    std::cout << std::endl << "-----------" << std::endl;
    
    // char checks
    char charArray[size] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "Printing the charArray :" << std::endl;
    iter(charArray, size, print_value);

    // char checks
    std::string stringArray[size] = {"hello", "world", "this", "is", "a test"};
    std::cout << std::endl << "Printing the stringArray:" << std::endl;
    iter(stringArray, size, print_value);

    return 0;
}
