#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie(std::string name);
	~Zombie();
	void annonce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif // !ZOMBIE_H