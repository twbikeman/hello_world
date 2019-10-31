#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

string error(const char *str) {
  string s = str;
  return s;
}

int getInput() {
  string str;
  cin >> str;
  stringstream ss;
  ss << str;
  int i;
  ss >> i;
  if(ss.fail()) {
    //    cout << "error";
    throw error("error");
  }
  return i;
}

fstream * openFile(const char *str) {
  fstream *fs = new fstream();
  cout << str << endl;
  fs->open(str, ios::out);
  if (fs->is_open()) return fs;
  else
    throw error("can't open a file");
}



struct  dataStruct {
  enum shapeEnum {square, triangle, ellipse};
  shapeEnum shape;
};





int main(int argc, char *argv[]) {
  int i = 0;
  try {
  i = getInput();
  }
  catch(string e) {
    cout << e << endl;
  }
  cout << i << endl;

  
  fstream * test;
  try {
  test = openFile("savefile.txt");
  }
  catch(string e) {
    cout << e << endl;
  }
  cout << test << endl;
  *test << i << endl;
  test->close();
  

  dataStruct my;
  my.shape = dataStruct::ellipse;
  cout << my.shape << endl;
  return 0;
}
