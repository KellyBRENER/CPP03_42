/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:47:04 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 11:20:54 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class	FragTrap : public ClapTrap {
	public :
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& src);
		~FragTrap();
		FragTrap&	operator=(const FragTrap& src);
		/*member functions*/
		void	highFivesGuys(void);
};

#endif
