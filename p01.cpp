//This is Benjamin Millars number guessing game
#include <cstdlib>
#include <ctime>
using namespace std;


int main {
/*
  initialize random seed. Do this only once at the beginning of the main-function
*/
srand ( time(NULL) );
int randomNumber; // this variable will hold the random number
int offmeter;
/*
 generate secret number: between 1 and 10. Change the 10 to a different value to
 generate random numbers up to that maximum value
*/
randomNumber = rand() % 10 + 1;
cout << "guess a number between 1 and 10" << endl;
cin>>guess1;
offmeter= randomNumber - guess1;
if(offmeter<0)
offmeter = offmeter*(-1);
if(randomNumber==guess1)
cout<<"congradulations you won a game that is based on lucka dn no skill"<<endl;
if(randomNumber!=guess1)
cout<<"Sorry you lose and to be exact you lost by " << offmeter << endl;
}
