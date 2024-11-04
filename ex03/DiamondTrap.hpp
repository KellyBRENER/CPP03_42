/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:47:04 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 10:15:47 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class	DiamondTrap : public ScavTrap, public FragTrap {
	public :
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& src);
		~DiamondTrap();
		DiamondTrap&	operator=(const DiamondTrap& src);
		/*member functions*/
		void	attack(const std::string& target);
		void	whoAmI();
	private :
		std::string	_name;
};

#endif
