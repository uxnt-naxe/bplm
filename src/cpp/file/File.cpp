#include "File.hpp"
#include <sstream>
#include <fstream>

// using namespace std;

/*
    Bplm
        File
            path (xxxx)
            name (xxxx)
            Read   (xxxx)
            Write  (xxxx, xxxx)
*/

namespace Bplm
{
    File::File(/* args */) {
        // NeonPlusthis->path = path; 
    }

    File::~File() {
    }
    
    File::File(std::string path)
    {
        this->path = path;
    }

    std::string File::Read(std::string path)
    {
        this->path = path;
        std::ifstream File;
        File.open(this->path);
        if (!File.is_open())
        {
            File.close();
            return this->path + " " + "File Open Error!\n";
        }
        //将rdbuf返回的缓冲区转换成string
        std::stringstream buffer;
        buffer << File.rdbuf();
        File.close();
        return buffer.str();
    }

    std::string File::Read()
    {
        std::ifstream File;
        File.open(this->path);
        if (!File.is_open())
        {
            File.close();
            return this->path + " " + "File Open Error!\n";
        }
        //将rdbuf返回的缓冲区转换成string
        std::stringstream buffer;
        buffer << File.rdbuf();
        File.close();
        return buffer.str();
    }

    void File::Write(std::string path, std::string buffer) {
        this->path = path;
        std::fstream ouf(this->path, std::ios_base::out | std::ios_base::binary);
        ouf.write(buffer.data(), strlen(buffer.data()));
        ouf.close();
    }

    void File::Write(std::string buffer) {
        std::fstream ouf(this->path, std::ios_base::out | std::ios_base::binary);
        ouf.write(buffer.data(), strlen(buffer.data()));
        ouf.close();
    }
}
