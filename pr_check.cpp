
#include "pr_check.h"

using namespace std;

pr_check::pr_check(){}

void pr_check::store_graph(int argc, char* argv[]){
    string filename, myline;
    ifstream myfile;

    filename = argv[1];
    myfile.open(filename);
    if (myfile.is_open()) {
        while(myfile) {
            getline (myfile, myline);
            cout << myline << endl;
        }
        myfile.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

}

int main() {
    pr_check object;

    vector<vector<string>> prereqs;
    vector<string> course1;
    vector<string> course2;
    vector<string> course3;

    course1.push_back("MATH_314");
    course1.push_back("MATH_330");
    course2.push_back("CS_240");
    course3.push_back("WRIT_111");

    prereqs.push_back(course1);
    prereqs.push_back(course2);
    prereqs.push_back(course3);

    graph.insert(make_pair("CS_375", prereqs));

    unordered_map<string, vector<vector<string>>>::iterator iter;
    for (iter = graph.begin(); iter != graph.end(); iter++) {
        cout << iter->first << " " << endl;
        for (int i = 0; i < prereqs.size(); i++) {
        cout << "    ";
        for (int j = 0; j < prereqs[i].size(); j++) {
            cout << prereqs[i][j] << " ";
        }
        cout << endl;
        }
        cout << endl;
    }

}
