#include "bplmLexer.hpp"

    // ernx(plug,"plug");
    // MAKE_NAME(Bool,"bool"),
	// MAKE_NAME(String,"string"),
   //  KeyWordName(import, "import");
   //  import, "import"
   //  string, "string"

    // const int var = 60;
    // identifier (标识符)
    // import  function

    std::string identifier[] = {
        "plug", "var", "func",
        "if", "else", "elsif",
        "while", "for", "return",
        "true", "false", "null",
        "main"
    };


    

namespace Bplm {

    void regex(std::string regex) {

    }

    void regexKeyWord(std::string regex) {

    }

    Lexer::Lexer(std::string buffer) {

        // regexKeyWord(, "plug");

        printf("%s",buffer.data());
        this->buffer = buffer;
    }


  

    // bool Lexer::isDigit(char c) {
    //     return c >= '0' && c <= '9';
    // }

}




    // KeyWordName(func, "func");





/*
i18nString KeyWord[] = {
    L"plug", 
    L"static", 
    L"fn", L"num", L"text", L"string", 
    L"return", 
    L"bool", L"true", L"false", L"null", 
    L"if", L"elif", L"else", L"for", L"while", L"break" 
};
*/



/*
    plug
    static
    fn
    num
    text
    string
    return
    bool
    true
    false
    null
    if
    elif
    else
    for
    while
    break
*/


// public class Lexer
// {
//     
// }

