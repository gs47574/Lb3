#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


static const size_t n = 100;
static int liczba;
 
int main()
{
    int tab[n];
    std::cout << "Podaj zakres: ";
    std::cin >> liczba;
 
    srand(static_cast<unsigned int>(time(NULL)));
 
    for(size_t i = 0; i < n; ++i)
    {
        tab[i] = rand() % liczba + 1;
    }
    // Prezentacja danych
    for(size_t i = 0; i < n; ++i)
    {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
    
	return 0;
    

}


