/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:54:28 by yachen            #+#    #+#             */
/*   Updated: 2024/02/05 16:05:24 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon weapon ) : name( name ), weapon(weapon)
{
}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	weapon.getType()
}