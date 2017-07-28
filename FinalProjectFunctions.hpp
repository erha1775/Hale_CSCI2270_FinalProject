#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <limits>
#include "FinalProjectHeader.hpp"

using namespace std;


FinalProject::FinalProject(){
    // hard coding the graph because it would be more difficult to create a
    // specially formatted text file

    endStatus = false;
    //Denver
    string cityName = "Denver";
    string attractions = {"food"};

    vertex *Denver = insertVertex(cityName, attractions, defaultH);
    startCity = Denver;
    //LA
    cityName = "Los Angeles";
    string LAattractions = {"beaches,family"};

        hotelList *LAhotels = new hotelList(150, 2, 3);
        LAhotels->prev = nullptr;

        hotelList *LAhotel2 = new hotelList(250,3,2.5);
        LAhotel2->prev = LAhotels;
        LAhotels->next = LAhotel2;

        hotelList *LAhotel3 = new hotelList(300,4,3);
        LAhotel3->prev = LAhotel2;
        LAhotel2->next = LAhotel3;

        hotelList *LAhotel4 = new hotelList(100,1,2);
        LAhotel4->prev = LAhotel3;
        LAhotel3->next = LAhotel4;

        hotelList *LAhotel5 = new hotelList(300,2,5);
        LAhotel5->prev = LAhotel4;
        LAhotel4->next = LAhotel5;


    vertex *LA = insertVertex(cityName, LAattractions, LAhotels);
    //Miami
    cityName = "Miami";
    string MIattractions = {"beaches,night life"};

        hotelList *MIhotels = new hotelList(200,2,3);

        hotelList *MIhotel2 = new hotelList(275,3,2.5);
        MIhotel2->prev = MIhotels;
        MIhotels->next = MIhotel2;

        hotelList *MIhotel3 = new hotelList(350,4,4);
        MIhotel3->prev = MIhotel2;
        MIhotel2->next = MIhotel3;

        hotelList *MIhotel4 = new hotelList(100,1,2);
        MIhotel4->prev = MIhotel3;
        MIhotel3->next = MIhotel4;

        hotelList *MIhotel5 = new hotelList(375,2,5);
        MIhotel5->prev = MIhotel4;
        MIhotel4->next = MIhotel5;

        hotelList *MIhotel6 = new hotelList(500,3,5);
        MIhotel6->prev = MIhotel5;


    vertex *Miami = insertVertex(cityName, MIattractions, MIhotels);
    //London
    cityName = "London";
    string LOattractions = {"exotic,night life"};

        hotelList *LOhotels = new hotelList(175,2,3);

        hotelList *LOhotel2 = new hotelList(225,3,2);
        LOhotel2->prev = LOhotels;
        LOhotels->next = LOhotel2;

        hotelList *LOhotel3 = new hotelList(275,4,4);
        LOhotel3->prev = LOhotel2;
        LOhotel2->next = LOhotel3;

        hotelList *LOhotel4 = new hotelList(60,1,1.5);
        LOhotel4->prev = LOhotel3;
        LOhotel3->next = LOhotel4;

        hotelList *LOhotel5 = new hotelList(300,2,4.5);
        LOhotel5->prev = LOhotel4;
        LOhotel4->next = LOhotel5;

        hotelList *LOhotel6 = new hotelList(400,3,5);
        LOhotel6->prev = LOhotel5;


    vertex *London = insertVertex(cityName, LOattractions, LOhotels);
    //Paris
    cityName = "Paris";
    string PAattractions = {"exotic,family,food"};

        hotelList *PAhotels = new hotelList(80,2,1);

        hotelList *PAhotel2 = new hotelList(225,3,2.5);
        PAhotel2->prev = PAhotels;
        PAhotels->next = PAhotel2;

        hotelList *PAhotel3 = new hotelList(300,4,4.5);
        PAhotel3->prev = PAhotel2;
        PAhotel2->next = PAhotel3;

        hotelList *PAhotel4 = new hotelList(70,1,2);
        PAhotel4->prev = PAhotel3;
        PAhotel3->next = PAhotel4;

        hotelList *PAhotel5 = new hotelList(250,2,3.5);
        PAhotel5->prev = PAhotel4;
        PAhotel4->next = PAhotel5;

        hotelList *PAhotel6 = new hotelList(350,3,5);
        PAhotel6->prev = PAhotel5;


    vertex *Paris = insertVertex(cityName, PAattractions, PAhotels);
    //Salt Lake City
    cityName = "Salt Lake City";
    string SLattractions = {"outdoors,family"};

        hotelList *SLhotels = new hotelList(200,2,3.5);

        hotelList *SLhotel2 = new hotelList(250,3,4);
        SLhotel2->prev = SLhotels;
        SLhotels->next = SLhotel2;

        hotelList *SLhotel3 = new hotelList(275,4,3);
        SLhotel3->prev = SLhotel2;
        SLhotel2->next = SLhotel3;

        hotelList *SLhotel4 = new hotelList(125,1,3);
        SLhotel4->prev = SLhotel3;
        SLhotel3->next = SLhotel4;

        hotelList *SLhotel5 = new hotelList(325,2,4.5);
        SLhotel5->prev = SLhotel4;
        SLhotel4->next = SLhotel5;

        hotelList *SLhotel6 = new hotelList(350,3,5);
        SLhotel6->prev = SLhotel5;


    vertex *SLC = insertVertex(cityName, SLattractions, SLhotels);
    //New Orleans
    cityName = "New Orleans";
    string NOattractions = {"night life,food"};

        hotelList *NOhotels = new hotelList(100,2,1.5);

        hotelList *NOhotel2 = new hotelList(150,3,2.5);
        NOhotel2->prev = NOhotels;
        NOhotels->next = NOhotel2;

        hotelList *NOhotel3 = new hotelList(275,4,3.5);
        NOhotel3->prev = NOhotel2;
        NOhotel2->next = NOhotel3;

        hotelList *NOhotel4 = new hotelList(100,1,3.5);
        NOhotel4->prev = NOhotel3;
        NOhotel3->next = NOhotel4;

        hotelList *NOhotel5 = new hotelList(250,2,4);
        NOhotel5->prev = NOhotel4;
        NOhotel4->next = NOhotel5;

        hotelList *NOhotel6 = new hotelList(300,3,5);
        NOhotel6->prev = NOhotel5;


    vertex *NOLA = insertVertex(cityName, NOattractions, NOhotels);
    //Seattle
    cityName = "Seattle";
    string SEattractions = {"outdoors,food"};

        hotelList *SEhotels = new hotelList(200,2,3);

        hotelList *SEhotel2 = new hotelList(250,3,3.5);
        SEhotel2->prev = SEhotels;
        SEhotels->next = SEhotel2;

        hotelList *SEhotel3 = new hotelList(300,4,3.5);
        SEhotel3->prev = SEhotel2;
        SEhotel2->next = SEhotel3;

        hotelList *SEhotel4 = new hotelList(100,1,4);
        SEhotel4->prev = SEhotel3;
        SEhotel3->next = SEhotel4;

        hotelList *SEhotel5 = new hotelList(225,2,4);
        SEhotel5->prev = SEhotel4;
        SEhotel4->next = SEhotel5;

        hotelList *SEhotel6 = new hotelList(275,3,4.5);
        SEhotel6->prev = SEhotel5;


    vertex *Seattle = insertVertex(cityName, SEattractions, SEhotels);

    //New York
    cityName = "New York";
    string NYattractions = {"night life,food,family"};

        hotelList *NYhotels = new hotelList(300,2,3.5);

        hotelList *NYhotel2 = new hotelList(375,3,4);
        NYhotel2->prev = NYhotels;
        NYhotels->next = NYhotel2;

        hotelList *NYhotel3 = new hotelList(400,4,4);
        NYhotel3->prev = NYhotel2;
        NYhotel2->next = NYhotel3;

        hotelList *NYhotel4 = new hotelList(100,1,2);
        NYhotel4->prev = NYhotel3;
        NYhotel3->next = NYhotel4;

        hotelList *NYhotel5 = new hotelList(400,2,5);
        NYhotel5->prev = NYhotel4;
        NYhotel4->next = NYhotel5;

        hotelList *NYhotel6 = new hotelList(300,3,3);
        NYhotel6->prev = NYhotel5;


    vertex *NY = insertVertex(cityName, NYattractions, NYhotels);

    //creating the attractions vector
    /*attractVec.push_back("family");
    attractVec.push_back("food");
    attractVec.push_back("night life");
    attractVec.push_back("exotic");
    attractVec.push_back("outdoors");*/


    // creating edges
    insertEdge(LA,Denver,831);
    insertEdge(LA,NOLA,1672);
    insertEdge(LA,SLC,579);
    insertEdge(LA,Seattle,960);
    insertEdge(Miami,NOLA,669);
    insertEdge(Miami,NY,1089);
    insertEdge(London,NY,3470);
    insertEdge(London,Paris,214);
    insertEdge(Paris,NY,3636);
    insertEdge(SLC,Denver,371);
    insertEdge(SLC,NOLA,1434);
    insertEdge(SLC,Seattle,701);
    insertEdge(NOLA,Denver,1063);
    insertEdge(Seattle,Denver,1021);
    insertEdge(NY,NOLA,1169);
    insertEdge(NY,Denver,1631);

}

FinalProject::~FinalProject(){
    vertex *delCity;
    while(vertices.size() > 0){
        delCity = vertices.back();
        deleteCity(delCity->name);
    }
}


vertex *FinalProject::insertVertex(string name, string attract, hotelList *hotel1){

    vertex *newVert = new vertex;
    newVert->name = name;
    newVert->attractions = attract;
    newVert->hotelListStart = hotel1;

    stringstream iss;
    iss<<attract;
    string tempAttract;
    bool isFound;
    while(getline(iss,tempAttract,',')){
        isFound = false;
        for(int i = 0;i<attractVec.size();i++){
            if(attractVec[i] == tempAttract){
                isFound = true;
            }
        }
        if(!isFound){
            attractVec.push_back(tempAttract);
        }

    }
    vertices.push_back(newVert);

    return newVert;
}

vertex *FinalProject::vertexSearch(string cityName){
    for(int i = 0;i<vertices.size();i++){
        if(vertices[i]->name == cityName){
            vertex *tempcity = vertices[i];
            return vertices[i];
        }
    }
    cout<<"City does not exist."<<endl;
    return nullptr;
}

void FinalProject::insertEdge(vertex *city1, vertex *city2, int distance){
    adjVert *city1Adj = new adjVert(city1,distance);
    adjVert *city2Adj = new adjVert(city2,distance);
    city1->adjacent.push_back(city2Adj);
    city2->adjacent.push_back(city1Adj);
}

void FinalProject::printGraph(){
    for(int i = 0;i < vertices.size();i++){
        cout<<vertices[i]->name<<endl;
    }
    return;
}

void FinalProject::deleteHotels(hotelList *beginHotel){
    hotelList *tempHotel = beginHotel;
    hotelList *delHotel;
    while(tempHotel != nullptr){
        delHotel = tempHotel;
        tempHotel = tempHotel->next;
        delete delHotel;
    }
    return;
}

int FinalProject::edgeIndexSearch(vertex *vert1, vertex *delVert){
    for(int i = 0;i<vert1->adjacent.size();i++){
        if(vert1->adjacent[i]->vert->name == delVert->name){
            return i;
        }
    }
    cout<<"you messed up an edge"<<endl;
    return 0;
}

void FinalProject::deleteEdges(vertex *vert){
    adjVert *delEdge;
    int vertSize = vert->adjacent.size();
    for(int i = 0;i < vertSize;i++){
        delEdge = vert->adjacent.back();
        vert->adjacent.pop_back();
        int delInd = edgeIndexSearch(delEdge->vert,vert);
        delEdge->vert->adjacent.erase(delEdge->vert->adjacent.begin()+delInd);
        delete delEdge;
    }
}

void FinalProject::deleteCity(string name){
    if(name == "Denver" && vertices.size() > 1){
        cout<<"What do you want the new starting city to be?"<<endl;
        string newName;
        getline(cin,newName);
        changeStart(newName);
    }
    vertex *delCity = vertexSearch(name);
    if(delCity == nullptr){
        return;
    }
    int index = 0;
    while(index<vertices.size()){
        if(vertices[index]->name == name){
            break;
        }
        index++;
    }
    vertices.erase(vertices.begin()+index);
    deleteHotels(delCity->hotelListStart);
    deleteEdges(delCity);
    delete delCity;

}

void FinalProject::changeStart(string name){
    vertex *tempVert = vertexSearch(name);
    if(tempVert == nullptr){
        return;
    }
    startCity = tempVert;
}

void FinalProject::searchAttract(string attraction){
    cout<<"Your vacation choices are: "<<endl;
    int numAt = 0;
    for(int i = 0;i<vertices.size();i++){
        stringstream iss;
        iss<<vertices[i]->attractions;
        string tempAttract;
        while(getline(iss,tempAttract,',')){
            if(tempAttract == attraction){
                cout<<vertices[i]->name<<endl;
                numAt++;
            }
        }
    }
    if(numAt == 0){
        cout<<"No cities match the attraction you searched for."<<endl;
    }
}

void FinalProject::printAttract(){
    cout<<"The possible attractions are: "<<endl;
    for(int i = 0; i<attractVec.size();i++){
        cout<<attractVec[i]<<endl;
    }
}

void FinalProject::userCreate(){
    cout<<"What is the name of the city you would like to add?"<<endl;
    string newName;
    getline(cin,newName);
    cout<<endl;

    cout<<"What attractions does this city have?"<<endl<<"(enter as a comma separated list, preferably with no spaces)"<<endl;
    string newAttract;
    getline(cin,newAttract); cout<<endl;

    cout<<"Would you like to make any hotels for this city?(y/n)"<<endl;
    bool makeHotel;
    string boolIn;
    getline(cin,boolIn);
    if(boolIn == "y" || boolIn == "Y"){
        makeHotel = true;
    }else if(boolIn == "n" || boolIn == "N"){
        makeHotel = false;
    }else{
        cout<<"Please enter 'y' or 'n'"<<endl;
    }
    bool first = true;
    hotelList *temp;
    hotelList *lastOne;
    hotelList *hotelFirst = defaultH;
    while(makeHotel){
        temp = createHotel();
        if(first){
            hotelFirst = temp;
            first = false;
        }else{
            lastOne->next = temp;
            temp->prev = lastOne;
            lastOne = temp;
        }
        cout<<"Would you like to make another hotel?(y/n)"<<endl;
        getline(cin,boolIn);
        if(boolIn == "y" || boolIn == "Y"){
            makeHotel = true;
        }else if(boolIn == "n" || boolIn == "N"){
            makeHotel = false;
        }else{
            cout<<"Please enter 'y' or 'n'"<<endl;
        }
    }

    vertex *newCity = insertVertex(newName,newAttract,hotelFirst);

    cout<<"Would you like to add any connections to another city?(y/n)"<<endl;
    bool makeEdge;
    getline(cin,boolIn);
    if(boolIn == "y" || boolIn == "Y"){
        makeEdge = true;
    }else if(boolIn == "n" || boolIn == "N"){
        makeEdge = false;
    }else{
        cout<<"Please enter 'y' or 'n'"<<endl;
    }
    string connectCity;
    string dist1;
    int dist;
    stringstream iss;
    vertex *tempCity;
    while(makeEdge){
        cout<<"What city would you like to connect to?"<<endl;
        getline(cin,connectCity);
        tempCity = vertexSearch(connectCity);

        cout<<"What is the distance between these cities in miles?"<<endl;
        getline(cin,dist1);
        dist = stoi(dist1);

        insertEdge(newCity,tempCity,dist);

        cout<<"Would you like to add any connections to another city?(y/n)"<<endl;
        getline(cin,boolIn);
        if(boolIn == "y" || boolIn == "Y"){
            makeEdge = true;
        }else if(boolIn == "n" || boolIn == "N"){
            makeEdge = false;
        }else{
            cout<<"Please enter 'y' or 'n'"<<endl;
        }
    }

}

hotelList *FinalProject::createHotel(){
    cout<<"How many people can stay in this room?"<<endl;
    string numppl;
    getline(cin,numppl);
    int numPPL = stoi(numppl);
    cout<<"How much does it cost per night? (in USD)"<<endl;
    string costWord;
    getline(cin,costWord);
    int cost = stoi(costWord);
    cout<<"What is its rating out of 5?"<<endl;
    string rateW;
    getline(cin,rateW);
    int rate = stoi(rateW);

    hotelList *newHot = new hotelList(cost,numPPL,rate);
    return newHot;
}

vertex *FinalProject::DijkstraSearch(string cityName){
    vertex *startV = startCity;
    vertex *endV = vertexSearch(cityName);
    if(endV == nullptr){
        return nullptr;
    }
    vertex *solvedV;
    startV->solved = true;
    startV->dijDistance = 0;
    vector<vertex*> solved;
    solved.push_back(startV);
    vertex *s;
    int tempDist;
    vertex *parent;

    int minDistance;
    while(!endV->solved){
        minDistance = numeric_limits<int>::max();
        solvedV = nullptr;
        for(int x = 0;x<solved.size();x++){
            s = solved[x];
            for(int y = 0;y < s->adjacent.size();y++){
                if(!s->adjacent[y]->vert->solved){
                    tempDist = s->dijDistance + s->adjacent[y]->distance;
                    if(tempDist < minDistance){
                        solvedV = s->adjacent[y]->vert;
                        minDistance = tempDist;
                        parent = s;
                    }
                }
            }
        }
        solvedV->dijDistance = minDistance;
        solvedV->parent = parent;
        solvedV->solved = true;
        solved.push_back(solvedV);
    }
    return endV;

}

void FinalProject::travelFunc(string cityName){
    vertex *destVert = DijkstraSearch(cityName);
    if(destVert == nullptr){
        return;
    }
    int numLayovers = 0;
    cout<<"The total miles you will be traveling by plane is "<<destVert->dijDistance<<endl;
    if(destVert->parent != startCity){
        cout<<"You will have a layover in the following city/cities:"<<endl;
        vertex *temp = destVert->parent;
        while(temp->parent != nullptr){
            cout<<temp->name<<endl;
            numLayovers++;
            temp = temp->parent;
        }
    }else{
        cout<<"You will have a direct flight"<<endl;
    }
    cout<<"Press any button to see your hotel options.";
    string any;
    getline(cin,any); cout<<endl;
    cout<<"Your hotel options are:"<<endl;
    hotelList *tempH = destVert->hotelListStart;
    int hotelNum = 0;
    if(tempH != defaultH){
        while(tempH != nullptr){
            hotelNum++;
            cout<<"Hotel "<<hotelNum<<":"<<endl;
            cout<<"Number of people: "<<tempH->numberOfPeople<<endl;
            cout<<"Price: "<<tempH->price<<endl;
            cout<<"Rating: "<<tempH->rating<<endl;
            cout<<"------------------"<<endl;
            tempH = tempH->next;
        }
    }else{
        cout<<"There are not hotel options for this city. Please add a hotel option"<<endl<<"or try a different city."<<endl;
        return;
    }

    cout<<"Please enter the number corresponding to the hotel you would like to stay at."<<endl;
    string hotelN;
    getline(cin,hotelN);
    int hotelIndex = stoi(hotelN);
    bool stop = false;
    tempH = destVert->hotelListStart;
    int tempHotelIndex = 0;
    while(tempH != nullptr){
        tempHotelIndex++;
        if(tempHotelIndex == hotelIndex){
            break;
        }
        tempH = tempH->next;
    }

    cout<<"Excellent! You are booked to fly to "<<destVert->name;
    if(numLayovers != 0){
        cout<<" with layovers at:";
        for(int i = 0; i < numLayovers;i++){
            cout<<" "<<destVert->parent->name;
        }
    }
    cout<<"."<<endl<<"You are staying at a hotel for "<<tempH->numberOfPeople<<" people, ";
    cout<<"with a rating of "<<tempH->rating<<" stars,"<<endl<<"and it will cost you "<<tempH->price<<" dollars"<<endl;

    dijkstraCleanup();

    string renew;
    cout<<"Would you like to plan another trip?(y/n)"<<endl;
    getline(cin,renew);
    bool whileStatus = false;
    bool renewB;
    while(!whileStatus){
        if(renew == "y" || renew == "Y"){
            renewB = true;
            whileStatus = true;
        }else if(renew == "n" || renew == "N"){
            renewB = false;
            whileStatus = true;
        }else{
            cout<<"Please enter 'y' or 'n'"<<endl;
        }
    }
    if(renewB){
        return;
    }else{
        cout<<"Goodbye!"<<endl;
        endStatus = true;
        return;
    }
}

void FinalProject::dijkstraCleanup(){
    for(int i = 0;i < vertices.size();i++){
        vertices[i]->solved = false;
        vertices[i]->dijDistance = 0;
        vertices[i]->parent = nullptr;
    }
}


void FinalProject::addHotel(string city){
    vertex *tempVert = vertexSearch(city);
    hotelList *newHotel = createHotel();
    hotelList *temp = tempVert->hotelListStart;
    if(temp == nullptr){
        tempVert->hotelListStart = temp;
    }else{
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newHotel;
        newHotel->prev = temp;
    }
}
