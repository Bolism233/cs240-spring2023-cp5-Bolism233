#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// adjacency list representation
class registration {
    public:
        registration();

        bool pr_check();
        string sch_check();
        void waitlist();

    private:
        // unordered map

    
}

/* BFS to make sure things can be finished in 6 semesters
count prereq of courses in distance, too
fail if number/distance = 7 */

/* DFS to check for circular dependency, or cycle
when you hit the vertex that is grey */


#endif