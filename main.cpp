#include "header.h"

int main() {
    cout << "Kjære spiller, velg et tall mellom 0 - " << size-1 << endl;
    int tall;
    cin >> tall;
    system("clear");
    
    string fasit = list[tall];
    long int fasit_lenght = fasit.length();
    fasit_split(fasit, fasit_lenght);
    ask();
    
    return 0;
}

