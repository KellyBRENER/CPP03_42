/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:39:17 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/31 11:19:05 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;//health
	int			_attackDammage;
	int			_energyPoints;
public:
	/*constructor/destructor*/
	ClapTrap(void);
	ClapTrap(const std::string & name);
	ClapTrap(const ClapTrap & src);
	~ClapTrap();
	/*operator overload*/
	ClapTrap&	operator=(const ClapTrap& src);
	/*getter/setter*/
	std::string		getName(void) const;
	void			setName(const std::string & name);
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;

	/*member functions*/
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif
