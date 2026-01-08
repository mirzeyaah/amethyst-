#ifndef NOTESMANAGER_H
#define NOTESMANAGER_H

#include <string>

class NotesManager {
private:
    std::string filePath;

public:
    NotesManager(const std::string& path);

    // Add note to file
    void addNote(const std::string& note);

    // Return file path (so CommandProcessor can open it)
    std::string getFilePath() const { return filePath; }
};

#endif
