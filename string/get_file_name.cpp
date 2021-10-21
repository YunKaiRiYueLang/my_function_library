
#include<string>
const char dir_separators[] = "/\\";
// get file name(include extension name if have)
std::string get_file_name(const std::string path){
    size_t position=path.find_last_of(dir_separators);
    if(position==std::string::npos){
        return path;
    }
    return path.substr(position+1);
}

// test
#define TEST
#ifdef TEST
#include<iostream>
int main(){
    std::cout<<get_file_name("d:/sdfsdf/sdf/1.png")<<std::endl;
    std::cout<<get_file_name("d:/sdfsdf/sdf\\1.png")<<std::endl;
    std::cout<<get_file_name("d:/sdfsdf\\sdf/1.png")<<std::endl;
    std::cout<<get_file_name("1.png")<<std::endl;
    std::cout<<get_file_name("xxx")<<std::endl;
    std::cout<<get_file_name("")<<std::endl;
    
}
#endif