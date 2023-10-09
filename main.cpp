#include<iostream>
#include<string>
#include<fstream>
#include"nlohmann/json.hpp"

int main(){
    std::ifstream file("films.json");

    nlohmann::json films;
    file >> films;
    file.close();

    std::cout << films["Deadpool"]["Actors"]["Ed Skrein"];
 
}