#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	string chose1,chose2,chose3,chose4,chose5;
	srand (time(NULL));
	string word1[] ={ "bean", "tree", "hat", "trick", "mouse"};
	string word2[] ={ "key", "bar", "chip", "hand", "foot"};
	string word3[] ={ "screen", "disc", "table", "chair", "banner"};
	string word4[] ={ "can", "bottle", "hack", "bowl", "plant"};
	string word5[] ={ "grass", "walk", "run", "mario", "luigi"};	
	chose1=word1[ rand() % 5 + 1];
	chose2=word2[ rand() % 5 + 1];
	chose3=word3[ rand() % 5 + 1];
	chose4=word4[ rand() % 5 + 1];
	chose5=word5[ rand() % 5 + 1];
	
	cout << chose1 << endl;
	cout << chose2 << endl;
	cout << chose3 << endl;
	cout << chose4 << endl;
	cout << chose5 << endl;
}
