#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    //open file
    ifstream myFile;
    myFile.open("data.txt");
    
    //store all the stuff
    int id;
    string name, department;
    double salary;

    double total = 0.0;
    int i = 0;
    while(myFile >> id >> name >> department >> salary){
        //print
        cout << id << " " << name << " " << department << " " << salary << endl;
        //data
        total += salary;
        ++i;
    }
    double average = total / i;

    cout << "total: " << total << " average: " << average << endl;


}