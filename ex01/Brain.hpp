#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>
# include <string>

class Brain {

public:
	Brain();
	Brain(Brain const & original);
	virtual ~Brain();
	Brain & operator=(Brain const & rhs);

private:
	std::string _ideas[100];
};

#endif
