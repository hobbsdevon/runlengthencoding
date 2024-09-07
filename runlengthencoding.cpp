#include <iostream>
#include <string>
#include <typeinfo>

std::string encode(std::string);
std::string decode(std::string);


int main(){
    std::string testString = "aabbccdd";
    std::cout << "Test String: " << testString << std::endl;
    std::string encoded = encode(testString);
    std::cout << "encoded: " << encoded << std::endl;
    std::string decoded = decode(encoded);
    std::cout << "decoded: " << decoded << std::endl;
    //test

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
    int i = 0;
    while(i < encoded.length()){
        char currentChar = encoded[i];
        int currentNum = int(encoded[i+1]-48);
        //std::cout << currentNum << std::endl;
        //std::cout << typeid(currentNum).name() << std::endl;
        for(int j = 0; j < currentNum; j++){
            decoded += currentChar;
        }
        i += 2;
        //i += (currentNum/10) + 1;
    }

    return decoded;
}
