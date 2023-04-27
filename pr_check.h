#ifndef PR_CHECK_H
#define PR_CHECK_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <stdlib.h>

using namespace std;

class pr_check {
    public:
        // constructor
        pr_check();

        // functions for pr_check to work
        void store_graph(int argc, char* argv[]);
        bool check_cycle();
        bool exceed_6();
    private:
        unordered_map<string, vector<vector<string>>> graph; 

};

#endif