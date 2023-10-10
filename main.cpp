#include<iostream>
#include<string>
#include<fstream>
#include"nlohmann/json.hpp"

int main(){
    std::string actor;
    std::cout << "Enter the actor's first and last name: ";
    std::getline(std::cin, actor);

    std::ifstream file("films.json");

    nlohmann::json films;
    file >> films;
    file.close();
    int findcount = 0;
    for(nlohmann::json::iterator it = films.begin(); it != films.end(); ++it){
        nlohmann::json film = *it;
        for(nlohmann::json::iterator itf = film.begin(); itf != film.end(); ++itf){
            nlohmann::json actors = *itf;
            if (actors.find(actor) != actors.end()) {
                ++findcount;
                std::cout << film["Film name"] << std:: endl;
                std::cout << actor << " as " << std::string(actors[actor]) << std::endl;
                std::cout << std::endl;
            }
        }
        
    }
    if(findcount == 0) std::cout << "Films not found!";
}