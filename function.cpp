#include "header.h"

void fasit_split(string fasit, int fasit_length) {
    for(int i = 0; i < fasit_length; i++) {
        fChar* f = new fChar();
        f->bokstav = fasit[i];
        vec.push_back(f);
    }
}

void ask() {
    print_list();
    cout << endl << "Gjett en bokstav: ";
    string svar;
    cin >> svar;
    fasit_match(svar);
}

void fasit_match(string c) {
    bool error = true;
    bool done = false;
    int count = 0;
    
    for(int i = 0; i < vec.size(); i++) {
        if (c == vec[i]->bokstav) {
            vec[i]->correct = true;
            error = false;
        }
    }
    for(int a = 0; a < vec.size(); a++) {
        if(vec[a]->correct == true) count++;
    }
    if(error == true) cout << "Ingen match funnet! Prøv igjen." << endl << endl;
    if(vec.size() == count) cout << "Du har alle riktige! Gratulerer med dagen!";
    ask();
}

void print_list(){
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i]->correct == false) cout << "_";
        else cout << vec[i]->bokstav;
    }
}
