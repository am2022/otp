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
    public:
        gen();
        gen(string u_ch);
};

#endif