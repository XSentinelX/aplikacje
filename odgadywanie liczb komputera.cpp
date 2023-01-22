#include <iostream>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));
  int number = rand() % 100 + 1;
  int userNumber;

  do{
    cout << "Podaj liczbę od 1 do 100:";
    cin >> userNumber;

    if (userNumber > number){
      cout << "Twoja liczba jest za duża" <<endl;
    
    } else if (userNumber < number) {
      cout << "Twoja liczba jest za mała" <<endl;
    }
  } while (userNumber != number);

  cout << "Brawo, to prawidłowa liczba";
} 