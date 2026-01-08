#ifndef SYSTEMCOMMANDMANAGER_H
#define SYSTEMCOMMANDMANAGER_H

#include <string>

class SystemCommandManager {
private:
    std::string notesFile = "notes.txt"; // The file Notepad opens

public:
    // Built-in Windows apps
    void openCalculator();
    void openBrowser();
    void openNotepad();
    void openCommandPrompt();
    void openPowerShell();
    void openFileExplorer();
    void openControlPanel();
    void openTaskManager();
    void openPaint();
    void openSettings();

    // Notes
    void addNoteToNotepad(const std::string& note);
    void showNotes();

    // Development tools
    void openVSCode();
    void openDevCpp();
    void openCursor();

    // Office apps
    void openWord();
    void openPowerPoint();
    void openExcel();

    // Other apps
    void openLinkedIn();
    void openSpotify();
    void openChatGPT();
};

#endif
