#include "mountain.h"
using namespace std;

Mountain::Mountain() {
}

Mountain::Mountain(string name, string country, int elevation) {
    this-> name = name;
    this-> country = country;
    this-> elevation = elevation;
}

    void Mountain::SetName(string name){
        this-> name = name;
    }
    void Mountain::SetCountry(string country){
        this-> country = country;
    }
    void Mountain::SetElevation(int elevation){
        this-> elevation = elevation;
    }
    string Mountain::GetName(){
        return name;
    }
    string Mountain::GetCountry(){
        return country;
    }
    int Mountain::GetElevation(){
        return elevation;
    }
    double Mountain::toMeters(double elevationfromfeet){
        double feettometer = 1/3.2808;
        return elevationfromfeet * feettometer;
    }

    int minElevation(Mountain mountains[]){
        int minIndex = 0;
        int i;
        for(i = 0; i < 7; ++i){
            if(mountains[i].GetElevation() < mountains[minIndex].GetElevation()){
                minIndex = i;
            }
        }
        return minIndex;
    }