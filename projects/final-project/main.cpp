#include <iostream>
#include <iomanip>
#include "mountain.cpp"
using namespace std;

int main() {
    Mountain mountains[7];
    mountains[0] = Mountain("Chimborazo", "Ecuador", 20549);
    mountains[1] = Mountain("Matterhorn", "Switzerland", 14692);
    mountains[2] = Mountain("Olympus", "Greece", 9573);
    mountains[3] = Mountain("Everest", "Nepal", 29029);
    mountains[4] = Mountain("Mount Marcy - Adirondacks", "United States", 5344);
    mountains[5] = Mountain("Mount Mitchell - Blue Ridge", "United States", 6684);
    mountains[6] = Mountain("Zugspitze", "Switzerland", 9719);
    
    cout << setw(30) << "Mountain" << setw(20) << "Country" << setw(25) << "Elevation (In Feet)" << setw(25) << "Elevation (In Meters)" << endl;
    for(Mountain mountain: mountains) {
        cout << setw(30) << mountain.GetName();
        cout << setw(20) << mountain.GetCountry();
        cout << setw(20) << mountain.GetElevation();
        cout << setw(24) << mountain.toMeters(mountain.GetElevation()) << endl;
    } 
    int smallest = minElevation(mountains);
    cout << setw(55) << "Mountain With The Smallest Elevation " << "Name " << mountains[smallest].GetName() << endl;
    cout << setw(48) << "Country " << "Name " << mountains[smallest].GetCountry() << endl;
    cout << setw(50) << "Elevation " << "Name " << mountains[smallest].GetElevation() << endl;
return 0;
}