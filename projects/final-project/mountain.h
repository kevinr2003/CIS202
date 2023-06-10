#ifndef mountain_h
#define mountain_h
#include <iostream>
#include <iomanip>
using namespace std;

class Mountain {
    public: Mountain();
    Mountain(string name, string country, int elevation);
    void SetName(string name);
    void SetCountry(string country);
    void SetElevation(int elevation);
    string GetName();
    string GetCountry();
    int GetElevation();
    double toMeters(double elevationfromfeet);

    private: 
    string name;
    string country;
    int elevation;
}

; int minElevation(Mountain mountains[]);
#endif