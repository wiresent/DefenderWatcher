#pragma once
#include <string>
#include <vector>

namespace Utils {
    std::vector<unsigned char> ReadFileBytes(const std::string& path);
    void WriteFileBytes(const std::string& path, const std::vector<unsigned char>& data);
}
