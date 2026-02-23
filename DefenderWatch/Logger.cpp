#include <fstream>
#include <ctime>
#include <string>

namespace Logger {
    void Log(const std::string& msg) {
        std::ofstream ofs("C:\\DefenderWatch.log", std::ios::app);
        std::time_t t = std::time(nullptr);
        ofs << std::ctime(&t) << ": " << msg << std::endl;
    }
}
