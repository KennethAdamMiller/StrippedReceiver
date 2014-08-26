#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  for (unsigned int i=1;i < argc; i++) {
    cout << argv[i] << endl;
  }
}
