#include "Class.h"


//-----------------Implementari pentru clasa Animal-----------------

Animal::Animal(std::string_view nume, unsigned varsta) : nume(nume), varsta(varsta) 
{
}


void Animal::set_nume(std::string_view nume)
{
	this->nume = nume; 
}

void Animal::set_varsta(unsigned varsta)
{
	this->varsta = varsta; 
}

const std::string Animal::get_nume() const
{
	return this->nume;
}

const unsigned Animal::get_varsta() const
{
	return this->varsta;
}


//-----------------Implementari pentru clasa Caine-----------------

Caine::Caine(std::string_view nume, unsigned varsta, std::string_view rasa, std::string_view proprietar)
			: Animal(nume, varsta), rasa(rasa), proprietar(proprietar)
{
}

void Caine::set_rasa(std::string_view rasa)
{
	this->rasa = rasa;
}

void Caine::set_proprietar(std::string_view proprietar)
{
	this->proprietar = proprietar; 
}

const std::string Caine::get_rasa() const
{
	return this->rasa;
}

const std::string Caine::get_proprietar() const
{
	return this->proprietar;
}

void Caine::printInfo() const
{
	std::cout << "[ Nume : " << this->get_nume() << ", varsta : " << this->get_varsta()
		      << ", rasa : " << this->rasa << ", proprietar : " << this->proprietar 
			  << " ]" << std::endl;
}

void Caine::latra() const
{
	std::cout << "Ham, ham, ham!" << std::endl;
}

//-----------------Implementari pentru clasa Pisica-----------------

Pisica::Pisica(std::string_view nume, unsigned varsta, std::string_view rasa, bool dispozitie)
	: Animal(nume, varsta), rasa(rasa), esteFericita(dispozitie)
{
}

void Pisica::set_rasa(std::string_view rasa)
{
	this->rasa = rasa; 
}

void Pisica::set_dispozitie(bool dispozitie)
{
	this->esteFericita = dispozitie; 
}

const std::string Pisica::get_rasa() const
{
	return this->rasa;
}

const bool Pisica::get_dispozitie() const
{
	return esteFericita;
}

void Pisica::printInfo() const
{	
	std::cout << std::boolalpha;
	std::cout << "[ Nume : " << this->get_nume() << ", varsta : " << this->get_varsta()
		<< ", rasa : " << this->rasa << ", dispozitie : " << esteFericita <<  " ]" << std::endl;
}

void Pisica::toarce() const
{
	if (esteFericita) {
		std::cout << get_nume() << " toarce: Brrr! Brrr!" << std::endl;
	}
	else {
		std::cout << get_nume() << " nu este fericita și nu poate toarce." << std::endl;
	}
}
