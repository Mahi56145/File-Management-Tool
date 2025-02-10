#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeFile(const string& filename) {
    ofstream file(filename.c_str(), ios::out);
    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    string data;
    cout << "Enter text to write to the file: ";
    cin.ignore(); 
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data written successfully!" << endl;
}

void readFile(const string& filename) {
    ifstream file(filename.c_str(), ios::in); 
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return;
    }
    string line;
    cout << "File contents:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void appendFile(const string& filename) {
    ofstream file(filename.c_str(), ios::app);
    if (!file) {
        cout << "Error opening file for appending!" << endl;
        return;
    }
    string data;
    cout << "Enter text to append to the file: ";
    cin.ignore();
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data appended successfully!" << endl;
}

int main() {
    string filename;
    int choice;

    cout << "Enter the file name: ";
    cin >> filename;

    do {
        cout << "\nFile Management Menu\n";
        cout << "1. Write to File\n";
        cout << "2. Read from File\n";
        cout << "3. Append to File\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeFile(filename);
                break;
            case 2:
                readFile(filename);
                break;
            case 3:
                appendFile(filename);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}