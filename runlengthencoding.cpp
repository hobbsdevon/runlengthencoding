#include <iostream>
#include <string>

std::string encode(std::string);
std::string decode(std::string);


int main(){

    std::cout << encode("aaabbccccccccccddddddefg") << std::endl;

}

std::string encode(std::string input){
    if (input.empty()) return "Input string is empty, please try again";
    std::string encoded;
    int count = 1;
    for(int i = 0; i < input.length(); i++){
        char currentChar = input[i];
        char nextChar = input[i + 1];
        //std::cout << currentChar << " " << nextChar << std::endl;
        if(currentChar == nextChar){
            count++;
        } else {
            encoded += currentChar;
            encoded += std::to_string(count);
            //std::cout << count << std::endl;
            count = 1;
        }
    }
    return encoded;
}

std::string decode(std::string encoded){
    std::string decoded;

    return decoded;
}
