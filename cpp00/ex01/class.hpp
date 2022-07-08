#ifndef CLASS_H
# define CLASS_H

class Person {
	
	private:
		std::string name;
		
	public:
		std::string get_name() {
			return this->name;
		}
		void	set_name(std::string name) {
			this->name = name;
		}
};

# endif
