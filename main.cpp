#include "pr_check.h"

int main (){
ifstream myfile;
myfile.open("shopping_list.txt");
string myline;
if ( myfile.is_open() ) {
while ( myfile ) { // equivalent to myfile.good()
    getline (myfile, myline);
    cout << myline << '\n';
}
}
else {
    cout<< "Couldn't open file\n";
}
return 0;
}