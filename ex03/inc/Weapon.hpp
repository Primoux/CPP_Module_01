#ifndef WEAPON_H
# define WEAPON_H

# include <string>
class Weapon
{
  private:
	std::string _type;

  public:
	Weapon(std::string);
	Weapon();
	~Weapon();
	std::string getType();
	void setType(std::string);
};

#endif // !WEAPON_H