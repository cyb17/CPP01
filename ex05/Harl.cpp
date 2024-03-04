/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:09:06 by yachen            #+#    #+#             */
/*   Updated: 2024/03/04 18:00:26 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "Ah hah Segfault! Check again your code logic" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "No more infomations for the moment" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Be careful ！" << std::endl;	
}

void	Harl::error(void)
{
	std::cout << "Booom! You die " << std::endl;
}

void	complain(std::string level)
{
	void	functionPtr(Harl::
	if (level == "DEBUG")
	
}