#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

    ofstream myFile ("week2.txt");

    if (myFile.is_open()){
        string letter = "";
        for (int a=1; a<=15; a++){
            letter += "a";
            myFile << letter << "\n";
        }

            cout << "File was created successfully!";
        myFile.close();
    } else cout << "File was not created!";
    return 0;
}