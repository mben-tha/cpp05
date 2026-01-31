/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:00:07 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/31 18:02:20 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class	RobotomyRequestForm : public	AForm
{
public:
	RobotomyRequestForm(std::string target, std::string name, int sign_grade, int execute_grade);
	RobotomyRequestForm(RobotomyRequestForm const& copy);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm const& copy);

	virtual void	executeF();

private:
	std::string	m_target;
};