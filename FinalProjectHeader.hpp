using namespace std;
#include <vector>

struct hotelList{
    int price;
    int numberOfPeople;
    int rating;
    hotelList *next;
    hotelList *prev;
    hotelList(int price1, int numberOfPeople1, int rating1){
        price = price1;
        numberOfPeople = numberOfPeople1;
        rating = rating1;
        prev = nullptr;
        next = nullptr;
    }
};

struct vertex;

struct adjVert{
    vertex *vert;
    int distance;
    adjVert(vertex *v, int dist){
        vert = v;
        distance = dist;
    }
};

struct vertex{
    string name;
    string attractions;
    hotelList *hotelListStart;
    vector <adjVert*> adjacent;
    bool solved;
    int dijDistance;
    vertex *parent;
    vertex(){
        solved = false;
        parent = nullptr;
    }
};


class FinalProject{
private:
    vertex *startCity; // this is the starting point of the graph
    vector <vertex*> vertices;// vector of pointers pointing to the different cities
    vector <string> attractVec;
    hotelList *defaultH = new hotelList(0,0,0);

public:
    FinalProject();
    ~FinalProject();
    bool endStatus;
    vertex *insertVertex(string name, string atract, hotelList *hotel1);//adds a vertex to the graph
    void deleteCity(string name);//deletes the city
    void deleteEdges(vertex *vert);//deletes edges connected to a city (used in the deleteCity function)
    int edgeIndexSearch(vertex *vert1,vertex *delVert);//returns the index of the second input city in the adjacent vertex of the first input city
    void deleteHotels(hotelList *beginHotel);//deletes the linked list of hotels with the input hotel as the head
    void insertEdge(vertex *city1, vertex *city2, int distance);//adds an edge to the graph
    void searchAttract(string attraction);
    void printGraph();//prints the graph
    void changeStart(string name);// changes the starting city
    vertex *vertexSearch(string cityName);//breadth first search
    vertex *DijkstraSearch(string cityName);//finds shortest path to the city
    void printAttract();
    void userCreate();
    hotelList *createHotel();
    void travelFunc(string cityName);
    void dijkstraCleanup();
    void addHotel(string city);
};
