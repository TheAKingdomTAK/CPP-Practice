#include <iostream>

using namespace std;

int main() {
  bool stopped = false;
  
  while(!stopped) {
    string input;
    getline(cin >> ws, input);
    
    if (input == "hello") {
      cout << "Hi" << endl;
    } else if (input == "stop") {
      cout << "stopping" << endl;
      stopped = true;
    }
  }
  
}
