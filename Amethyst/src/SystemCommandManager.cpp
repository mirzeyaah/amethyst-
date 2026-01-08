#include "SystemCommandManager.h"
#include <cstdlib>
#include <fstream>

using namespace std;

// ---------------- Built-in Windows apps ----------------

void SystemCommandManager::openCalculator() { system("calc"); }
void SystemCommandManager::openBrowser() { system("start https://www.google.com"); }
void SystemCommandManager::openNotepad() { system("notepad"); }
void SystemCommandManager::openCommandPrompt() { system("cmd"); }
void SystemCommandManager::openPowerShell() { system("powershell"); }
void SystemCommandManager::openFileExplorer() { system("explorer"); }
void SystemCommandManager::openControlPanel() { system("control"); }
void SystemCommandManager::openTaskManager() { system("taskmgr"); }
void SystemCommandManager::openPaint() { system("mspaint"); }
void SystemCommandManager::openSettings() { system("start ms-settings:"); }

// ---------------- Notes ----------------

// Adds a note directly into notes.txt and opens Notepad
void SystemCommandManager::addNoteToNotepad(const string& note) {
    ofstream fout(notesFile, ios::app); // Append to file
    if (fout.is_open()) {
        fout << note << endl;
        fout.close();
        // Open Notepad to show the file after saving
        string cmd = "notepad " + notesFile;
        system(cmd.c_str());
    }
}

// Opens the Notepad with all existing notes
void SystemCommandManager::showNotes() {
    string cmd = "notepad " + notesFile;
    system(cmd.c_str());
}

// ---------------- Development tools ----------------

void SystemCommandManager::openVSCode() { system("\"C:\\Users\\smtur\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe\""); }
void SystemCommandManager::openDevCpp() { system("\"C:\\Dev-Cpp\\devcpp.exe\""); }
void SystemCommandManager::openCursor() { system("\"C:\\Program Files\\cursor\\cursor.exe\""); }

// ---------------- Office apps ----------------

void SystemCommandManager::openWord() { system("\"C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE\""); }
void SystemCommandManager::openPowerPoint() { system("\"C:\\Program Files\\Microsoft Office\\root\\Office16\\POWERPNT.EXE\""); }
void SystemCommandManager::openExcel() { system("\"C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE\""); }

// ---------------- Other apps ----------------

void SystemCommandManager::openLinkedIn() { system("start shell:AppsFolder\\7EE7776C.LinkedInforWindows_w1wdnht996qgy!App"); }
void SystemCommandManager::openSpotify() { system("start shell:AppsFolder\\SpotifyAB.SpotifyMusic_zpdnekdrzrea0!Spotify"); }
void SystemCommandManager::openChatGPT() { system("\"C:\\Program Files\\WindowsApps\\OpenAI.ChatGPT-Desktop_1.2025.328.0_x64__2p2nqsd0c76g0\\app\\ChatGPT.exe\""); }
