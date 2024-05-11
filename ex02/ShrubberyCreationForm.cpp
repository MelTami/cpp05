/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:17:40 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 21:35:04 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): AForm(src)
{
	// Copy constructor
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// Destructor
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this == &src)
		return (*this);
	this->_target = src._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::ofstream file;
    std::string filename = this->_target + "_shrubbery";
    file.open(filename.c_str());
    if (file.is_open())
    {
        file << "              _{\\ _{\\{\\/}/}/}__                           _{\\ _{\\{\\/}/}/}__" << std::endl;
        file << "             {/{/\\}{/{/\\}(\\}{/\\} _                       {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
        file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _                  {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
        file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}              {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
        file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}              {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
        file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}             _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
        file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}           {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
        file << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}           _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
        file << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}         {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
        file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}         {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
        file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)           {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
        file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}          {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
        file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}           {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
        file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}             {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
        file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)               (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
        file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}                     {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
        file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}                        {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
        file << "              {){/ {\\/}{\\/} \\}\\}                          {){/ {\\/}{\\/} \\}\\}" << std::endl;
        file << "              (_)  \\.-'.-/                                 (_)  \\.-'.-/" << std::endl;
        file << "          __...--- |'-.-'| --...__     Shrubberies     __...--- |'-.-'| --...__" << std::endl;
        file << "   _...--'   .-'   |'-.-'|  ' -.  ''--.._________...--'   .-'   |'-.-'|  ' -.  ''--..__" << std::endl;
        file << " -'    ' .  . '    |.'-._| '  . .  '   ''._- _-'    ' .  . '    |.'-._| '  . .  '   ''._" << std::endl;
        file << " .  '-  '    .--'  | '-.'|    .  '  . ' . . ' -' '-  '    .--'  | '-.'|    .  '     . '" << std::endl;
        file << "          ' ..     |'-_.-|                             ' ..     |'-_.-|               -" << std::endl;
        file << "  .  '  .       _.-|-._ -|-._  .  '  .    '  . .  '  .       _.-|-._ -|-._  .  '  .   '" << std::endl;
        file << "              .'   |'- .-|   '.                            .'   |'- .-|   '." << std::endl;
        file << "  ..-'   ' .  '.   `-._.--   .'  '  - .        ..-'   ' .  '.   `-._.--   .'  '  - ." << std::endl;
        file << "   .-' '        '-._______.-'     '  .   . .    .-' '        '-._______.-'     '  ." << std::endl;
        file << "    .       .    .   .    ' '-.                     .       .    .   .    ' '-. '" << std::endl;
        file.close();
        std::cout << filename << " created successfully!" << std::endl;
    }
    else
    {
        std::cout << "Error creating file '" <<  filename << "'" << std::endl;
    }
}

