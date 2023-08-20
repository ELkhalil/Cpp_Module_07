/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:59:51 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/20 22:17:42 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() 
{
    // int checks
    int intArray[5] = {1, 2, 3, 4, 5};
    std::cout << "Printing the intArray before : " << std::endl;
    iter(intArray, 5, print_value);
    std::cout << std::endl << "intArray After Multiplication : " << std::endl;
    iter(intArray, 5, multiply_value);
    iter(intArray, 5, print_value);
    std::cout << std::endl << "-----------" << std::endl;

    // double checks
    double doubleArray[5] = {1.10, 2.20, 3.30, 4.40, 5.50};
    std::cout << "Printing the original doubleArray:" << std::endl;
    iter(doubleArray, 5, print_value);
    std::cout << std::endl << "doubleArray After Multiplication : " << std::endl;
    iter(doubleArray, 5, multiply_value);
    iter(doubleArray, 5, print_value);
    std::cout << std::endl << "-----------" << std::endl;
    
    // char checks
    char charArray[5] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "Printing the charArray :" << std::endl;
    iter(charArray, 5, print_value);

    // char checks
    std::string stringArray[5] = {"hello", "world", "this", "is", "a test"};
    std::cout << std::endl << "Printing the stringArray:" << std::endl;
    iter(stringArray, 5, print_value);

    return 0;
}
