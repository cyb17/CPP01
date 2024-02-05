/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:10:41 by yachen            #+#    #+#             */
/*   Updated: 2024/02/05 16:14:04 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
	private:

		std::string	type;

	public:

		Weapon( std::string weaponDescription );
		~Weapon();
		
		const std::string&	getType();
		void				setType( std::string otherType);
};

#endif