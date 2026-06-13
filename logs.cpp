#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

class ApedoLogger {
public:
    void writeLog(string status, string info) {
        // Get current date
        time_t now = time(0);
        tm *ltm = localtime(&now);
        char date[11];
        strftime(date, sizeof(date), "%Y-%m-%d", ltm);

        // Open log file in append mode
        ofstream logFile("fbi_log.txt", ios::app);
        
        if (logFile.is_open()) {
            logFile << date << " - Log^^^^^^UseLogsAsLogs \n"
                    << "Log^^^^^^UseLogsAsLogs\n"
                    << "ApedoFile-" << status << "'mayLogs: " << info << "\n\n";
            logFile.close();
        }
    }
};

int main() {
    ApedoLogger logger;
    // Example call
    logger.writeLog("APIKEY_SECURE", "System_Exploration_Complete");
    cout << "Log entry recorded in ApedoFile format." << endl;
    return 0;
}
