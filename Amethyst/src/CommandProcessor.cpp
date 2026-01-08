#include "CommandProcessor.h"
#include <iostream>
#include <algorithm>

using namespace std;

CommandProcessor::CommandProcessor()
    : notesManager("../data/notes.txt"),
      reminderManager("../data/reminders.txt") {
}

void CommandProcessor::process(const string& input) {
    if (input.empty()) return;

    string cmd = input;
    // Convert to lowercase for easier command matching
    transform(cmd.begin(), cmd.end(), cmd.begin(), ::tolower);

    // ---------------- Notes ----------------
    if (cmd.rfind("add note ", 0) == 0) {
        std::string note = input.substr(9); // get the note text
        systemCommandManager.addNoteToNotepad(note); // save directly in notepad file
        std::cout << "Note added successfully!\n";
    }
    else if (cmd.rfind("show my notes", 0) == 0) { // check if starts with "show my notes"
        systemCommandManager.showNotes(); // opens the notes file in notepad
    }
    

    // ---------------- Reminders ----------------
    else if (cmd.rfind("add reminder ", 0) == 0) {
        string reminder = input.substr(13);
        reminderManager.addReminder(reminder);
        cout << "Reminder added successfully!\n";
    }
    else if (cmd == "show reminders") {
        reminderManager.showReminders();
    }

    // ---------------- System apps ----------------
    else if (cmd == "open calculator") systemCommandManager.openCalculator();
    else if (cmd == "open browser") systemCommandManager.openBrowser();
    else if (cmd == "open notepad") systemCommandManager.openNotepad();
    else if (cmd == "open command prompt") systemCommandManager.openCommandPrompt();
    else if (cmd == "open powershell") systemCommandManager.openPowerShell();
    else if (cmd == "open file explorer") systemCommandManager.openFileExplorer();
    else if (cmd == "open control panel") systemCommandManager.openControlPanel();
    else if (cmd == "open task manager") systemCommandManager.openTaskManager();
    else if (cmd == "open paint") systemCommandManager.openPaint();
    else if (cmd == "open settings") systemCommandManager.openSettings();
    else if (cmd == "open vscode") systemCommandManager.openVSCode();
    else if (cmd == "open devcpp") systemCommandManager.openDevCpp();
    else if (cmd == "open cursor") systemCommandManager.openCursor();
    else if (cmd == "open word") systemCommandManager.openWord();
    else if (cmd == "open powerpoint") systemCommandManager.openPowerPoint();
    else if (cmd == "open excel") systemCommandManager.openExcel();
    else if (cmd == "open linkedin") systemCommandManager.openLinkedIn();
    else if (cmd == "open spotify") systemCommandManager.openSpotify();
    else if (cmd == "open chatgpt") systemCommandManager.openChatGPT();

    // ---------------- AI fallback ----------------
    else {
        string reply = aiManager.askAI(input);
        cout << "AI: " << reply << endl;
    }
}
