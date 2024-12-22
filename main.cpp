#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::string filePath ;
    std::cout << "Enter the path to the text file :";
    std::getline(std::cin, filePath);

    std::ifstream file(filePath, std::ios::binary);

    if(!file.is_open()){
        std::cout << "Failed to open the file. Please check the path and try again." << std::endl;
        return 1;
    }
    int bufferSize = 1024;
    char buffer[bufferSize];

    while(file.read(buffer, bufferSize), file.gcount() > 0){
        for(int i = 0; i < file.gcount(); ++i){
            std::cout << buffer[i] ; 
        } 
   }
       file.close();

    std::cout << "\nFile successfully read." << std::endl;
    return 0;
}