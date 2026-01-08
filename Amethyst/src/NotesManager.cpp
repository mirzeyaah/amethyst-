#include "NotesManager.h"
#include <fstream>

using namespace std;

NotesManager::NotesManager(const string& path) {
    filePath = path;
}

void NotesManager::addNote(const string& note) {
    ofstream fout(filePath, ios::app); // append to file
    if (fout.is_open()) {
        fout << note << endl;
        fout.close();
    }
}
