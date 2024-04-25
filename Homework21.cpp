#include "Class.h"


int main() {

    std::string nume; 
    unsigned varsta, optiune; 


    std::cout << "Introdu numele si varsta animalului de companie: "; 
    std::cin >> nume >> varsta; 

    std::cout << "Animalul este pisica sau caine? (1.Pisica, 2.Caine): "; 
    std::cin >> optiune; 

    switch (optiune)
    {
    case 1: 
    {
        bool dispozitie;
        std::string rasa;
        
        std::cout << "Introdu rasa pisicii: ";
        std::cin >> rasa;
        std::cout << "Pisica este fericita sau nu? (1 pentru 'da' si 0 pentru 'nu'): ";
        std::cin >> dispozitie;
        
        Pisica pisica(nume, varsta, rasa, dispozitie);
        
        pisica.printInfo();
        pisica.toarce();
    }
        break;

    case 2:
    {
        std::string rasa;
        std::string proprietar;

        std::cout << "Introdu rasa cainelui: ";
        std::cin >> rasa;
        std::cout << "Introdu proprietarul cainelui: ";
        std::cin >> proprietar;

        Caine caine(nume, varsta, rasa, proprietar);
        caine.printInfo();
        caine.latra();
    }
        break;

    default: 
        std::cout << "Optiune incorecta!" << std::endl;
    }



    return 0;
}
