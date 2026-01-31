/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:51:57 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/31 18:17:24 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class	ShrubberyCreationForm : public	AForm
{
public:
	ShrubberyCreationForm(std::string target, std::string name, int sign_grade, int execute_grade);
	ShrubberyCreationForm(ShrubberyCreationForm const& copy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& copy);

	virtual void	executeF();

private:
	std::string	m_target;
};