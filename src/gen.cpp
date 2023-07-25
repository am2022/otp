#include "gen.h"

gen::gen(){
    this->ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
}

gen::gen(string u_ch){
    this->ch = u_ch;
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
    int ch_len = ch.length();

    for(int i = 0;i < this->pass_len;i++){
        this->o_password[i] = this->ch[rand()%ch_len];
    }

    return this->o_password;
}