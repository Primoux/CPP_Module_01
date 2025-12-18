#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	~Zombie();
	void annonce(void);
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
};

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << "died for the science" << std::endl;
}

#endif // !ZOMBIE_H