#include "gen.h"

gen::gen(){
    this->ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
}

gen::gen(string u_ch){
    this->ch = u_ch;
}