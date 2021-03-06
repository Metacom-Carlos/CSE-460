#ifndef VIRTUALMACHINE_H
#define VIRTUALMACHINE_H
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct status{
		enum{   carry, 
                greater, 
                equal, 
                less, 
                overflow,

                };
             };

class VirtualMachine {
    int msize;
    int rsize;
    int pc, ir, sr, sp, clock;
    vector<int> mem;
    vector<int> r;
    int base, limit;
public:
    VirtualMachine(): msize(256), rsize(4), clock(0) 
    { 
        mem = vector<int>(msize); 
        r = vector<int>(rsize); 
    }
    void run(fstream&, fstream&, fstream&);
    int get_clock();
}; // VirtualMachine

#endif
