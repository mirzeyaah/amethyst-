#include "ReminderManager.h"
#include <fstream>
#include <iostream>

using namespace std;

ReminderManager::ReminderManager(const string& path)
    : filePath(path) {
    loadFromFile();
}

void ReminderManager::loadFromFile() {
    reminders.clear();
    ifstream fin(filePath);
    string line;

    while (getline(fin, line)) {
        reminders.push_back(line);
    }

    fin.close();
}

void ReminderManager::saveToFile() {
    ofstream fout(filePath);
    for (const auto& reminder : reminders) {
        fout << reminder << endl;
    }
    fout.close();
}

void ReminderManager::addReminder(const string& reminder) {
    reminders.push_back(reminder);
    saveToFile();
}

void ReminderManager::showReminders() const {
    if (reminders.empty()) {
        cout << "No reminders found." << endl;
        return;
    }

    for (size_t i = 0; i < reminders.size(); ++i) {
        cout << i + 1 << ". " << reminders[i] << endl;
    }
}

void ReminderManager::deleteReminder(int index) {
    if (index < 1 || index > reminders.size()) {
        cout << "Invalid reminder number." << endl;
        return;
    }

    reminders.erase(reminders.begin() + (index - 1));
    saveToFile();
    cout << "Reminder deleted successfully." << endl;
}

void ReminderManager::editReminder(int index, const string& newText) {
    if (index < 1 || index > reminders.size()) {
        cout << "Invalid reminder number." << endl;
        return;
    }

    reminders[index - 1] = newText;
    saveToFile();
    cout << "Reminder edited successfully." << endl;
}
