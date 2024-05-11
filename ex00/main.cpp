/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:35:42 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 22:14:59 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{

	try {
            Bureaucrat    Bcrat3("Bureaucrat", 1);
            std::cout << Bcrat3 << std::endl;
			
            for (int i = 0; i < 150; i++)
            {
                std::cout << Bcrat3.getName() << " -> Increment grade" << std::endl;
                Bcrat3.incrementGrade();
                std::cout << Bcrat3 << std::endl;
            }
    }
	catch(std::exception & e) {
		std::cout << "Grade out of range : " << e.what() << std::endl;
	}

	try{
		Bureaucrat    Bcrat2("Bureaucrat", 150);
    	std::cout << Bcrat2 << std::endl;
			
		for (int j = 0; j < 150; j++)
            {
                std::cout << Bcrat2.getName() << " -> Decrement grade" << std::endl;
                Bcrat2.decrementGrade();
                std::cout << Bcrat2 << std::endl;
            }
	}
	catch(std::exception & e){
		std::cout << "Grade out of range : " << e.what() << std::endl;
	}
		
	
	return (0);
}