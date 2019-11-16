#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;




int main()
//wyswietlanie zawartosci tablicy
{
	const int size = 20;
	
    int tab[size];
     
    srand(time(NULL));
	 
    for(int i = 0; i < size; i++)
    {
        tab[i] = rand() % 100;
        
    }
// Prezentacja danych
    for(int i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }
    cout << '\n';cout<<endl;
    
//sortowanie w porzadku rosnacym 
   	for (int i = 0; i < size - 1; i++){
   		for(int j = 0; j < size - 1; j++){
   			if (tab[j] > tab[j+1]){
   				swap(tab[j],tab[j+1]);
			   }
		   }
	   }
	
// Prezentacja danych
    for(int i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }
   cout << '\n';
	cout<<endl;	

//wartosc min, max, 
	
	cout <<"min:" << tab[0]; 
	cout<<endl;
	cout <<"max:" << tab[size-1];
	cout<<endl;

	
//mid

	
	
  
	float sum;
    float average;
	for(int i = 0; i < size; i++)
    {
        sum += tab[i]; 
    }	
    
    average = sum / size;
    
//wyswietlanie

cout<<"mid:"<< average;
    
	
	
	
	return 0;
    

}


