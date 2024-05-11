/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:17:34 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 21:46:38 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): AForm(src)
{
	// Copy constructor
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// Destructor
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this == &src)
		return (*this);
	this->_target = src._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << "** drilling noises... **" << std::endl;
    srand(time(0));
    if (rand() % 2)
        std::cout <<  this->_target << " has been robotomized successfully!"  << std::endl;
    else
        std::cout <<  this->_target << " robotomy failed!" << std::endl;
}

