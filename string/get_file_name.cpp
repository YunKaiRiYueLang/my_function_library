
#include<string>
const char dir_separators[] = "/\\";
const char ext_separators[] = ".";
// get file name(include extension name if have)
std::string get_file_name(const std::string path){
    size_t position=path.find_last_of(dir_separators);
    if(position==std::string::npos){
        return path;
    }
    return path.substr(position+1);
}
// get file name(without extension name)
std::string get_file_name_no_ext(const std::string path){
    std::string ret=get_file_name(path);
    size_t position=ret.find_last_of(ext_separators);
    if(position==std::string::npos){
        return ret;
    }
    return ret.substr(0,position);
}

// test
#define TEST
#ifdef TEST
#include<iostream>
int main(){
    std::cout<<"*****get file name with extension name"<<std::endl;
    std::cout<<get_file_name("d:/sdfsdf/sdf/1.png")<<std::endl;
    std::cout<<get_file_name("d:/sdfsdf/sdf\\1.png")<<std::endl;
    std::cout<<get_file_name("d:/sdfsdf\\sdf/1.png")<<std::endl;
    std::cout<<get_file_name("1.png")<<std::endl;
    std::cout<<get_file_name("xxx")<<std::endl;
    std::cout<<get_file_name("")<<std::endl;
    std::cout<<"*****get file name without extension name"<<std::endl;
    std::cout<<get_file_name_no_ext("d:/sdfsdf/sdf/1.png")<<std::endl;
    std::cout<<get_file_name_no_ext("d:/sdfsdf/sdf\\1.png")<<std::endl;
    std::cout<<get_file_name_no_ext("d:/sdfsdf\\sdf/1.png")<<std::endl;
    std::cout<<get_file_name_no_ext("1.png")<<std::endl;
    std::cout<<get_file_name_no_ext("xxx")<<std::endl;
    std::cout<<get_file_name_no_ext("")<<std::endl;
    return 0;
}
#endif