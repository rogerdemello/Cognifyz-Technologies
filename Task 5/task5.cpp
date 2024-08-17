#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string sourceFileName, destinationFileName;
    cout << "Enter the name of the source file: ";
    cin >> sourceFileName;
    cout << "Enter the name of the destination file: ";
    cin >> destinationFileName;

    ifstream sourceFile(sourceFileName);
    ofstream destinationFile(destinationFileName);

    if (!sourceFile) {
        cerr << "Error: Could not open the source file '" << sourceFileName << "'." << endl;
        return 1;
    }

    if (!destinationFile) {
        cerr << "Error: Could not open the destination file '" << destinationFileName << "'." << endl;
        return 1;
    }

    string line;
    while (getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    cout << "Contents of '" << sourceFileName << "' have been successfully copied to '" << destinationFileName << "'." << endl;

    sourceFile.close();
    destinationFile.close();

    return 0;
}
