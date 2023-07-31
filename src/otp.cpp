#include <iostream>
#include <string>
#include "gen.cpp"

using namespace std;

int main(){
    string ch; //to get characters
    string pass_length;

    cout<<"enter chars:";
    cin>>ch;

    gen generate(ch);

    cout<<"ente length of password:";
    cin>>pass_length;
}