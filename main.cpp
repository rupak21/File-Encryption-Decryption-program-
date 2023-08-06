#include <iostream>
#include <fstream>
using namespace std;

// Function to encrypt or decrypt a file using Caesar cipher
void encryptDecryptFile(const string& inputFileName, const string& outputFileName, int key) {
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);
    char ch;

    if (!inputFile || !outputFile) {
        cerr << "Error opening files!" << endl;
        return;
    }

    while (!inputFile.eof()) {
        inputFile.get(ch);
        // Encrypt or Decrypt the character
        if (isalpha(ch)) {
            char shiftedChar = isupper(ch) ? 'A' + (ch - 'A' + key) % 26 : 'a' + (ch - 'a' + key) % 26;
            outputFile << shiftedChar;
        } else {
            outputFile << ch;
        }
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    string inputFileName, outputFileName;
    int key;

    cout << "Enter the input file name: ";
    cin >> inputFileName;

    cout << "Enter the output file name: ";
    cin >> outputFileName;

    cout << "Enter the encryption/decryption key (an integer between 1 and 25): ";
    cin >> key;

    if (key < 1 || key > 25) {
        cerr << "Invalid key! The key should be between 1 and 25." << endl;
        return 1;
    }

    // Encrypt the file
    encryptDecryptFile(inputFileName, outputFileName, key);
    cout << "File encrypted/decrypted successfully!" << endl;

    return 0;
}
