#include <iostream>
#include <string>
#include "gen.cpp"

using namespace std;

int main(){
    string ch; //to get characters
    string pass_length;
    string expire_time;

    cout<<"enter chars:";
    cin>>ch;

    gen generate(ch);

    cout<<"ente length of password:";
    cin>>pass_length;
    int i_pass_length;

    try{
        i_pass_length = stoi(pass_length);
    }
    catch(exception& e){
        cerr << "enter a number!" << '\n';
    }

    cout<<"enter expire time in second(enter 0 for unlimited expire time):";
    cin>>expire_time;

    if(stoi(expire_time) < 0){
        cout<<"invalid input!";
        return 0;
    }
    
    generate.set_pass_len(i_pass_length);
    string password = generate.password();
    cout<<"password: "<<password;

    int i_expire_time = stoi(expire_time);
    if(i_expire_time == 0){
        return 0;
    }
    else{
        generate.expire_time(i_expire_time);
        cout<<"\npassword expired!";
    }
}