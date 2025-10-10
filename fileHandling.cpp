#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("data.txt");  // create & open a file

    if (!outfile) {
        cout << "File could not be created!" << endl;
        return 1;
    }

    outfile << "Hello, this is a sample file.\n";
    outfile << "Learning File Handling in C++." << endl;

    outfile.close();  // always close the file
    cout << "Data written successfully!" << endl;

    ifstream infile("data.txt");  // open file for reading
    
    string line;
    while (getline(infile, line)) {   // read line by line
        cout << line << endl;
    }

    infile.close();
    return 0;
    
}
