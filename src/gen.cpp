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