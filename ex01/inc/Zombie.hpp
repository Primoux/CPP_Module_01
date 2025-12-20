#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void annonce(void);
	void setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif // !ZOMBIE_H