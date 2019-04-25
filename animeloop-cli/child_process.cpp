#include <iostream>
#include <string>

#include "child_process.hpp"

using namespace std;

void child_process(string functor) {
    // so what?
    int status = system(functor.c_str());
    if (status) {
        cerr << "The child was killed or segfaulted or something." << endl;
    }
}