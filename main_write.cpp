#include <iostream>
#include <fstream>
using namespace std;

void writeFile(int, string, string, double);

int main(){
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
        writeIt(id, name, department, salary);
    }
    return i;
}

void writeIt(int id, string name, string department, double salary){
    ofstream myFile;
    myFile.open("data.txt");

    //prints everything
    myFile << id << " " << name << " " << department << " " << salary << endl;

    myFile.close();
}