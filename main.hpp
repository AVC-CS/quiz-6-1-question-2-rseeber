#include <iostream>
#include <fstream>
using namespace std;

int readFile(string);
int writeFile(string);
void writeIt(int, string, string, double, string);



int readFile(string filename){
    
    //open file
    ifstream myFile;
    myFile.open(filename);
    
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

    return i;
}

int writeFile(string filename){
    int count;
    cin >> count;
    int i = 0;
    for (; i < count; ++i){
        int id;
        string name, department;
        double salary;

        //take input for all the values this iteration
        cin >> id >> name >> department >> salary;

        //store them
        writeIt(id, name, department, salary, filename);
    }
    return i;
}

void writeIt(int id, string name, string department, double salary, string filename){
    ofstream myFile;
    //open for appending
    myFile.open(filename, ios_base::app);

    //prints everything
    myFile << id << " " << name << " " << department << " " << salary << endl;

    myFile.close();
}