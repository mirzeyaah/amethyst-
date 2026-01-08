#include <iostream>
#include <string>
#include "CommandProcessor.h"

using namespace std;

int main() {
    cout << "Amethyst is running...\n\n";

    CommandProcessor processor;

    string input;

    while (true) {
        cout << "You: ";
        getline(cin, input);

        if (input.empty()) continue;

        if (input == "exit" || input == "quit") {
            cout << "Exiting Amethyst...\n";
            break;
        }

        processor.process(input);
    }

    return 0;
}
