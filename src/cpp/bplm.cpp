/*** slant - bplm
 *        __          __        
 *       / /_  ____  / /___ ___ 
 *      / __ \/ __ \/ / __ `__ \
 *     / /_/ / /_/ / / / / / / /
 *    /_.___/ .___/_/_/ /_/ /_/ 
 *         /_/                  
 */

#include<iostream>
#include "bplmFile.hpp"
#include "bplmLexer.hpp"
// using namespace std;
template<class T>
int getLength(T& arr) { return sizeof(arr) / sizeof(arr[0]); }

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");          // Linux MinGW GCC MSVC
    std::ios::sync_with_stdio(false);    // Linux gcc     

std::wcout <<
R"(
    __          __        
   / /_  ____  / /___ ___ 
  / __ \/ __ \/ / __ `__ \
 / /_/ / /_/ / / / / / / /
/_.___/ .___/_/_/ /_/ /_/ 
     /_/                  
     
)";
    // wcout << L"Uxnt Naxe 2021-2024" << endl;
    std::wcout << L"bplm 0.0.1 (2024/3/4)" << std::endl;
    std::wcout << L"" << std::endl;

    Bplm::File file = Bplm::File("code.bplm");
    //file.Write("Heee");
    Bplm::Lexer tenr = Bplm::Lexer(file.Read());

        


    
    return 0;
}






  //  int to = 0;
  //  for (const auto &element : identifier) {
  //       // wcout << "<id, " << identifier[to] << "> "  << endl;
  //          txtlog += "<id, " + element + "> " + "\n";
  //       to++;
  //  }




  // file.Write("ro.txt", txtlog);
    // printf("%s",file.Read().data());

    // lexer(source);

    // i18nString source = OtneReadFile("code.otne");
    // wcout << source << endl;
    // lexer(source);
    // return 0;

    // for(int to = 0; getLength(identifier) > to; to++) {
    //     //<id, import>
    //     wcout << "<id, " << identifier[to] << ">" << endl;
    // }
