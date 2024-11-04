/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:47:04 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 10:15:47 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class	ScavTrap : public ClapTrap {
	public :
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& src);
		~ScavTrap();
		ScavTrap&	operator=(const ScavTrap& src);
		/*member functions*/
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
