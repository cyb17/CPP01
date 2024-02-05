/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:45:53 by yachen            #+#    #+#             */
/*   Updated: 2024/02/05 16:01:08 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{	
	private:
		
		Weapon		weapon;
		std::string	name;

	public:

		HumanA();
		~HumanA();
		void	attack();
};

#endif