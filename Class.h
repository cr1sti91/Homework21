#pragma once
#include <string>
#include <iostream>


class Animal 
{
private: 
	//Variabile membru
	std::string nume; 
	unsigned varsta; 

protected: 
	//Constructor
	Animal(std::string_view nume, unsigned varsta);

	//Setters
	void set_nume(std::string_view nume); 
	void set_varsta(unsigned varsta); 

	//Getters
	const std::string get_nume() const; 
	const unsigned get_varsta() const;
};


class Caine : public Animal
{
private: 
	//Variabile membru
	std::string rasa; 
	std::string proprietar; 

public: 
	//Constructor
	Caine(std::string_view nume, unsigned varsta, std::string_view rasa, std::string_view proprietar);

	//Setters
	void set_rasa(std::string_view rasa); 
	void set_proprietar(std::string_view proprietar); 

	//Getters
	const std::string get_rasa() const; 
	const std::string get_proprietar() const;

	//Metode
	void printInfo() const; 
	void latra() const; 
};


class Pisica : public Animal
{
private:
	//Variabile membru
	std::string rasa;
	bool esteFericita{ true };

public:
	//Constructor
	Pisica(std::string_view nume, unsigned varsta, std::string_view rasa, bool dispozitie);

	//Setters
	void set_rasa(std::string_view rasa);
	void set_dispozitie(bool dispozitie); 

	//Getters
	const std::string get_rasa() const;
	const bool get_dispozitie() const; 

	//Metode
	void printInfo() const;
	void toarce() const;
};