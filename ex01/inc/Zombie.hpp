#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
  private:
	std::string _name;
	int 		_id;

  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void annonce(void);
	void setName(std::string name);
	void setId(int id);
};

Zombie	*zombieHorde(int N, std::string name);

#endif // !ZOMBIE_H