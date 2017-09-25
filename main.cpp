#include <iostream>
#include<string>

using namespace std;

int main(void)
{
    int rok_urodzenia=1997;
    int aktualny_rok=2017;
    string imie="Bartosz";
    string nazwisko="Konopko";

    cout << "Witam, nazywam sie "<< imie <<" "<< nazwisko << " i mam " << aktualny_rok - rok_urodzenia << " lat " << endl;
    return 0;
}
