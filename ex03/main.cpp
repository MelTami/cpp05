/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:35:42 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 21:49:21 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	srand(time(NULL));

	Bureaucrat	ness("Ness", 2);
	Bureaucrat	hero("Hero", 150);
	Bureaucrat	rob("Rob", 75);
	AForm		*form;
	Intern		intern;

	form = intern.makeForm("robotomy request", "Donkey Kong");
	rob.signForm(*form);
	rob.executeForm(*form);
	delete form;
	form = intern.makeForm("presidential pardon", "Diddy Kong");
	rob.signForm(*form);
	rob.executeForm(*form);
	delete form;
	form = intern.makeForm("shrubbery creation", "Dixie Kong");
	rob.signForm(*form);
	rob.executeForm(*form);
	delete form;

	form = intern.makeForm("robotomy request", "Donkey Kong");
	hero.signForm(*form);
	hero.executeForm(*form);
	delete form;
	form = intern.makeForm("presidential pardon", "Diddy Kong");
	hero.signForm(*form);
	hero.executeForm(*form);
	delete form;
	form = intern.makeForm("shrubbery creation", "Dixie Kong");
	hero.signForm(*form);
	hero.executeForm(*form);
	delete form;

	form = intern.makeForm("robotomy request", "Donkey Kong");
	ness.signForm(*form);
	ness.executeForm(*form);
	delete form;
	form = intern.makeForm("presidential pardon", "Diddy Kong");
	ness.signForm(*form);
	ness.executeForm(*form);
	delete form;
	form = intern.makeForm("shrubbery creation", "Dixie Kong");
	ness.signForm(*form);
	ness.executeForm(*form);
	delete form;
}