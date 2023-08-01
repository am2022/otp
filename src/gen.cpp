#include "gen.h"

gen::gen(){
    this->ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
}

gen::gen(string u_ch){
    if(u_ch == "std-all"){
        this->ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    }
    else{
        this->ch = u_ch;
    }
}

int gen::set_pass_len(int u_pass_len){
    if(u_pass_len > 0){
        this->pass_len = u_pass_len;
    }
    else{
        return 0;
    }
}

string gen::password(){
    srand(time(0));
    int ch_len = this->ch.length();
    string pass;

    for(int i = 0;i < this->pass_len;i++){
        int j = rand()%ch_len;
        pass += this->ch[j];
    }

    this->o_password = pass;

    return pass;
}