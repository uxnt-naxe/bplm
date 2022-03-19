#include<iostream>
using namespace std;


// const int var = 60;

// identifier (标识符)
char* identifier[] = {
      "import", "var", "function",
      "if", "else", "elsif",
      "while", "for", "return",
      "true", "false", "null",
      "main"
};




int main() {

    for(int to = 0; 7 > to; to++) {
        //<id, import>
        cout << "<id, " << identifier[to] << ">" << endl;
    }

    return 0;
}
