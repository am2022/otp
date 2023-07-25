#ifndef GEN_H
#define GEN_H

#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace std;

class gen{
    private:
        string ch; //chars
        int pass_len;
        string o_password;
    public:
        gen();
        gen(string u_ch);
        int set_pass_len(int u_pass_len);
        string password();
};

#endif