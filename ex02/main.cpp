/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:55:54 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/20 22:35:59 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

void    TestingIntArray ( void )
{
    unsigned int size = 10;
    {
        std::cout << "Empty Array Test Begin: " << std::endl;
        Array<int> emptyArray;
        std::cout << emptyArray;
        std::cout << "-------Test End-----------" << std::endl;
    }

    {
        std::cout << "Array of " << size << "integers begin: " << std::endl;
        Array<int> intArray(size);
        std::cout << "testing the operator[]: " << std::endl;
        for(unsigned int i = 0; i < intArray.size(); i ++)
            intArray[i] = i * i;
        std::cout << intArray;
        std::cout << "-------Test End-----------" << std::endl;
        std::cout << "testing The copy constructor: " << std::endl;
        Array<int> copieArray(intArray);
        std::cout << "new array data is: " << std::endl;
        std::cout << copieArray;
        std::cout << "testing The copy Assignement operator: " << std::endl;
        Array<int> assigneArray;
        assigneArray = copieArray;
        std::cout << "new array data is after copy assignement: " << std::endl;
        std::cout << assigneArray;
    }
}

void    TestingStringArray( void )
{
    unsigned int size = 10;
    {
        std::cout << "String Empty Array Test Begin: " << std::endl;
        Array<std::string> emptyArray;
        std::cout << emptyArray;
        std::cout << "-------Test End-----------" << std::endl;
    }

    {
        std::cout << "Array of " << size << "Strings begin: " << std::endl;
        Array<std::string> stringArray(size);

        std::cout << "testing the operator[]: " << std::endl;
        for(unsigned int i = 0; i < stringArray.size(); i ++)
            stringArray[i] = "Dummy String";
        
        std::cout << stringArray;
        std::cout << "-------Test End-----------" << std::endl;

        std::cout << "testing The copy constructor: " << std::endl;
        Array<std::string> copieArray(stringArray);
        std::cout << "new array data is: " << std::endl;
        std::cout << copieArray;
        std::cout << "testing The copy Assignement operator: " << std::endl;
        Array<std::string> assigneArray;
        assigneArray = copieArray;
        std::cout << "new array data is after copy assignement: " << std::endl;
        std::cout << assigneArray;
    }
}

int main() 
{
    TestingIntArray();
    TestingStringArray();
    return 0;
}
