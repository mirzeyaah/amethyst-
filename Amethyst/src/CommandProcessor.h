#ifndef COMMANDPROCESSOR_H
#define COMMANDPROCESSOR_H

#include <string>
#include "NotesManager.h"
#include "ReminderManager.h"
#include "AIManager.h"
#include "SystemCommandManager.h"

class CommandProcessor {
private:
    NotesManager notesManager;
    ReminderManager reminderManager;
    AIManager aiManager;
    SystemCommandManager systemCommandManager; // <-- needed for system commands

public:
    CommandProcessor();
    void process(const std::string& input);
};

#endif
