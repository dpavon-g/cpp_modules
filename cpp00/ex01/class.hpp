#ifndef CLASS_H
# define CLASS_H

class Person {
	
	private:
		int			id;
		std::string name;
		std::string last_name;
		std::string nickname;
		long		phone;
		std::string secret;

		
	public:
		std::string get_name() {
			return this->name;
		}
		void	set_name(std::string name) {
			this->name = name;
		}
		int get_id() {
			return this->id;
		}
		void set_id(int id) {
			this->id = id;
		}
		std::string get_last_name() {
			return this->last_name;
		}
		void set_last_name(std::string last_name) {
			this->last_name = last_name;
		}
		std::string get_nickname() {
			return this->nickname;
		}
		void set_nickname(std::string nickname) {
			this->last_name = nickname;
		}
		std::string get_secret() {
			return this->secret;
		}
		void set_secret(std::string secret) {
			this->last_name = secret;
		}
		long	get_phone() {
			return this->phone;
		}
		void	set_phone(long phone) {
			this->phone = phone;
		}
};

# endif
