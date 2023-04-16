

// program sprawdzający czy wprowadzona liczba rzeczywista jest liczbą szczęśiwą czy nie.

#include <iostream>
using namespace std;
 
                            /* Metoda zastosowana: bool na "Szczęśliwy Numerek":
                            'true if' jeśli wpisana liczba rzeczywista jest szczęśliwa 
                             false jeśli nie jest szczęśliwa.*/

bool SzczesliwyNumerek(int n)
{
                            /*W obliczeniach posłużyłam się liczbą 1 i liczbą 7 (jedynymi jednocyfrowymi liczbami szczęśliwymi). 
                            Liczba nie może być liczbą szczęśliwą, jeśli w dowolnym kroku suma kwadratu cyfr jest 
                            liczbą jednocyfrową z wyjątkiem 1 lub 7 */ 
    if (n == 1 || n == 7)
        return true;
    int sum = n, x = n;
                            /* Ten loop działa dopóki suma kwadratów wprowadzonych liczb
                            nie jest jednocyfrową liczbą*/ 
    while (sum > 9) {
        sum = 0;
                             // Ten loop znajduje sumę kwadratów cyfr
        while (x > 0) {

            int d = x % 10;
            sum += d * d;
            x /= 10;
        }
        if (sum == 1)
       

            return true;
        x = sum;
    }
    if (sum == 7)
        return true;
    return false;
}
 
int main()
{
                            /*zmienna do zastosowania w 'do while' na końcu, 
                            jeśli użytkownik zechce uruchomić sprawdzanie liczby ponownie: */
char repeat;
do {


                            //liczba którą będziemy sprawdzać określona jako n:

    int n; 

                            //użytkownik wprowadza liczbę rzeczywistą n do sprawdzenia z klawiatury:

    cout << "Wprowadź liczbę do sprawdzenia: " << endl;
    cin >> n; 


}

