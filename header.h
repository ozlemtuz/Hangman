#include <iostream>
#include <string>
#include <vector>
using namespace std;

static const int size = 7;
static string list[] = {"computer", "engineering", "calculator", "charger", "laptop", "whiteboard", "students"};

struct fChar {
    string bokstav;
    bool correct = false;
};

static vector<fChar*> vec;
void fasit_split(string, int);
void fasit_match(string);
void print_list();
void ask();
