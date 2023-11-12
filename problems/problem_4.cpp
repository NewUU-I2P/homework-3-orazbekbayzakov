#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    std::string firstOctet = macAddress.substr(0, 2);
    int firstOctetValue = stoi(firstOctet,nullptr, 16);

    if (firstOctetValue % 2 == 0) {
        result = "Unicast";
    }
    else if (firstOctetValue % 2 != 0) {
        result = "Multicast";
    }
    if (macAddress == "FF:FF:FF:FF:FF:FF") {
        result = "Boardcast";
    }
    return result;
    // make use of control flow statements
    // return result;
}
