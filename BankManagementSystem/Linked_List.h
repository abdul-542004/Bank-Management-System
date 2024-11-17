#pragma once

using namespace System;

ref struct Log {
    String^ logMessage;
    Log^ down;

    Log(String^ message) {
        logMessage = message;
        down = nullptr;
    }
};

ref struct LogHandler {
    int accountNumber;
    LogHandler^ next;
    Log^ down;

    LogHandler(int accountNum) {
        accountNumber = accountNum;
        next = nullptr;
        down = nullptr;
    }
};

ref class LogManager {
private:
    LogHandler^ head;

public:
    LogManager() {
        head = nullptr;
    }

    void AddAccount(int accountNumber) {
        if (head == nullptr) {
            head = gcnew LogHandler(accountNumber);
        }
        else {
            LogHandler^ temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = gcnew LogHandler(accountNumber);
        }
    }

    void AddLog(int accountNumber, String^ logMessage) {
        LogHandler^ temp = head;
        while (temp != nullptr) {
            if (temp->accountNumber == accountNumber) {
                Log^ newLog = gcnew Log(logMessage);
                if (temp->down == nullptr) {
                    temp->down = newLog;
                }
                else {
                    Log^ current = temp->down;
                    while (current->down != nullptr) {
                        current = current->down;
                    }
                    current->down = newLog;
                }
                return;
            }
            temp = temp->next;
        }
    }

    String^ DisplayLogs(int accountNumber) {
        LogHandler^ temp = head;
        String^ logs = "";
        while (temp != nullptr) {
            if (temp->accountNumber == accountNumber) {
                Log^ current = temp->down;
                while (current != nullptr) {
                    logs += "-> " + current->logMessage + "\n";
                    current = current->down;
                }
                break;
            }
            temp = temp->next;
        }
        return logs;
    }
};
