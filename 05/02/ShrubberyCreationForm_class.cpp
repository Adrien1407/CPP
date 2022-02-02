/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm_class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:25:13 by adlancel          #+#    #+#             */
/*   Updated: 2022/01/27 12:52:12 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./ShrubberyCreationForm_class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	if(this != &obj)
		this->target = obj.target;
	return(*this);
}
bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw  Form::NotSignedException();
	if (this->getGradeExec() < executor.getGrade())
		throw	Bureaucrat::GradeTooLowException();
	std::string tree =
		"          .     .  .      +     .      .          .\n"
		"     .       .      .     #       .           .\n"
		"        .      .         ###            .      .      .\n"
		"      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
		"          .      . \"####\"###\"####\"  .\n"
		"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
		"  .             \"#########\"#########\"        .        .\n"
		"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
		"     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
		"                .\"##\"#####\"#####\"##\"           .      .\n"
		"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
		"      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
		"    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
		"            .     \"      000      \"    .     .\n"
		"       .         .   .   000     .        .       .\n"
		".. .. ..................O000O........................ ...... ...\n";
	std::string	file_name = (this->target + "_shrubbery");
	std::ofstream file;
	file.open(file_name.c_str());
	file << tree;
	file.close();
	return (true);
}
