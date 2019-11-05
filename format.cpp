#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;
    ss << "test";
    cout <<  ss.str() << endl;
    ss.str("");
    cout << ss.str() << endl;
}