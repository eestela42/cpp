#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

	class WrongAnimal
	{
	protected :
		std::string type;
	public:
		WrongAnimal(/* args */);
		~WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal( WrongAnimal &tmp);

		std::string	getType() const;

		WrongAnimal &operator=(WrongAnimal &rsa);

		void makeSound() const;


	};
	


#endif