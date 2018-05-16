#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <time.h>

extern "C" double Fun1(double*, int);
extern "C" int Fun2(char*, char, int);

int main(){

	srand(time(NULL));

	const char* ascii= "abcdefghijklmnoprstuwxyzABCDEFGHIJKLMNOPRSTUWXYZ0123456789";
	int asciiLen = 58;

	int x = 15;
	double tab[15];
	char znaki[15];
	char znak = 'a';
	int tmp;
	cout << sizeof(char) << endl;
	for (int i = 0; i < x; i++){
		tab[i] = rand()%10000 / 10.0;
		tmp = rand()%asciiLen;
		znaki[i] = ascii[tmp];
		//znaki[i] = rand()%(122-97+1)+97;
		cout << tab[i] << " ";
	}
    
	cout << endl;
	for(int j=0; j<x; j++){
        cout<<znaki[j]<<" ";
    }
    cout << endl;
    cout << "Srednia: " << Fun1(tab, x) << endl;
	cout << "Wystapienia znaku " << znak << ": " << Fun2(znaki, znak, x) << endl;
    getch();

	return 0;
}