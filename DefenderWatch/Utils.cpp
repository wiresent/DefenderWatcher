#include "Utils.h"
#include <fstream>

namespace Utils {
    std::vector<unsigned char> ReadFileBytes(const std::string& path) {
        std::ifstream file(path, std::ios::binary);
        std::vector<unsigned char> data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        return data;
    }

    void WriteFileBytes(const std::string& path, const std::vector<unsigned char>& data) {
        std::ofstream file(path, std::ios::binary);
        file.write(reinterpret_cast<const char*>(data.data()), data.size());
    }
}
