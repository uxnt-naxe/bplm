#include<iostream>
using namespace std;


template<class T>
int getLength(T& arr) { return sizeof(arr) / sizeof(arr[0]); }


// const int var = 60;
// identifier (标识符)
// import  function
char* identifier[] = {
      "plug", "var", "func",
      "if", "else", "elsif",
      "while", "for", "return",
      "true", "false", "null",
      "main"
};


/*** slant - bplm
 *        __          __        
 *       / /_  ____  / /___ ___ 
 *      / __ \/ __ \/ / __ `__ \
 *     / /_/ / /_/ / / / / / / /
 *    /_.___/ .___/_/_/ /_/ /_/ 
 *         /_/                  
 */


int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "");          // Linux MinGW GCC MSVC
    ios::sync_with_stdio(false);    // Linux gcc     

    wcout <<
R"(
    __          __        
   / /_  ____  / /___ ___ 
  / __ \/ __ \/ / __ `__ \
 / /_/ / /_/ / / / / / / /
/_.___/ .___/_/_/ /_/ /_/ 
     /_/                  
     
)";

    // wcout << L"Uxnt Naxe 2021-2024" << endl;
    wcout << L"bplm 0.0.1 (2024/3/4)" << endl;
    wcout << L"" << endl;

    int to=0;
    for (const auto &element : identifier) {
         wcout << "<id, " << identifier[to] << "> "  << endl;
         to++;
    }

   // wcout << endl;

    // i18nString source = OtneReadFile("code.otne");
    // wcout << source << endl;
    // lexer(source);
    // return 0;

    // for(int to = 0; getLength(identifier) > to; to++) {
    //     //<id, import>
    //     wcout << "<id, " << identifier[to] << ">" << endl;
    // }

    return 0;
}
