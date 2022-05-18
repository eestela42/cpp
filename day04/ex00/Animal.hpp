#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

	class Animal
	{
	protected :
		std::string type;
	public:
		Animal(/* args */);
		~Animal();
		Animal(const std::string type);
		Animal( Animal &tmp);

		std::string	getType() const;

		Animal &operator=(Animal &rsa);

		virtual void makeSound() const;


	};
	


#endif