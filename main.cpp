#include<iostream>
#include<string>
#include<fstream>
#include"nlohmann/json.hpp"

int main(){
    nlohmann::json film = {
        {"Film name", "White Tiger (2012 film)"},
        {"Release date", "2023/10/08"},
        {"Country", "Russia"},
        {"Production companies", "Mosfilm"},
        {"Directed by", "Karen Shakhnazarov"},
        {"Screenplay by", "Aleksandr Borodyansky"},
        {"Actors", {
            {"Aleksey Vertkov", "Ivan Naydenov"},
            {"Vitali Kishchenko", "Major Fedotov"},
            {"Gerasim Arkhipov",  "Captain Sharipov"},
            {"Aleksandr Bakhov", "Kryuk"}
        }}

    };



    std::ofstream file("film.json");
    file << film;
    file.close();
 
}