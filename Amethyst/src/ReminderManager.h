#ifndef REMINDERMANAGER_H
#define REMINDERMANAGER_H

#include <vector>
#include <string>

class ReminderManager {
private:
    std::vector<std::string> reminders;
    std::string filePath;

    void loadFromFile();
    void saveToFile();

public:
    ReminderManager(const std::string& path);

    void addReminder(const std::string& reminder);
    void showReminders() const;
    void deleteReminder(int index);
    void editReminder(int index, const std::string& newText);
};

#endif
