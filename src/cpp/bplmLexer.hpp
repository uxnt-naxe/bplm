#include <string>
// using namespace std;

namespace Bplm {
    class Lexer {
        public:   
            // std::string code;
            std::string buffer; //保存的源文件代码
            // bool isDigit(char c);
            Lexer(std::string buffer);
    };
}