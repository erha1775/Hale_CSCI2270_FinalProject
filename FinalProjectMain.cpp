#include <iostream>
#include "FinalProjectFunctions.hpp"

using namespace std;


int main(){
    FinalProject ProjectClass;

    while(!ProjectClass.endStatus){

        cout << "======Main Menu======" << endl;
        cout << "1. Print all Possible Destinations" << endl;
        cout << "2. Search by Attractions" << endl;
        cout << "3. Pick a Destination" << endl;
        cout << "4. Add a City" << endl;
        cout << "5. Delete a City" << endl;
        cout << "6. Change the Starting City" << endl;
        cout << "7. Add a Hotel" << endl;
        cout << "8. Quit" << endl;

        string input;
        getline(cin,input);
        int inNum = stoi(input);
        switch(inNum){
        case 1:
            {
                ProjectClass.printGraph();
                break;
            }
        case 2:
            {
                string inAttract;
                ProjectClass.printAttract();
                cout<<"Please enter the attraction you would like to search for: ";
                getline(cin,inAttract);
                ProjectClass.searchAttract(inAttract);
                break;
            }
        case 3:
            {
                cout<<"Where would you like to go?"<<endl;
                string destination;
                getline(cin,destination);
                ProjectClass.travelFunc(destination);
                break;
            }
        case 4:
            {
                ProjectClass.userCreate();
                break;
            }
        case 5:
            {
                cout<<"Please enter the name of the city you would like to remove:"<<endl;
                string cityName;
                getline(cin,cityName);
                ProjectClass.deleteCity(cityName);
                break;
            }
        case 6:
            {
                string newStart;
                cout<<"What would you like the new starting city to be?"<<endl;
                getline(cin,newStart);
                ProjectClass.changeStart(newStart);
                break;
            }
        case 7:
            {
                string city;
                cout<<"Please enter the name of the city you would like to add a hotel to:"<<endl;
                getline(cin,city);
                ProjectClass.addHotel(city);
                break;
            }
        case 8:
            {
                ProjectClass.endStatus = true;
                cout<<"Goodbye!"<<endl;
                break;
            }
        default:
            {
                cout<<"Please enter one of the numbers displayed"<<endl;
                break;
            }
        }
    }



    return 0;
}
