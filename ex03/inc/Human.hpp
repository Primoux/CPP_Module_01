#ifndef HUMAN
# define HUMAN

# include "Weapon.hpp"
# include <string>

class HumanA
{
  private:
	std::string _name;
	Weapon &_weapon;

  public:
	void attack();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

class HumanB
{
  private:
	Weapon *_weapon;
	std::string _name;

  public:
	void attack();
	void setWeapon(Weapon &weapon);
	HumanB(std::string name);
	~HumanB();
};

#endif // !HUMAN