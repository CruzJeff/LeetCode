<<<<<<< HEAD
import struct, binascii
findRMD = "F000F0F002".decode("hex")
tmx_number = 0
rmdStart = 0
rmd_number = 0
firstLocation = 0
epl_data = open(raw_input("What EPL do you want to extract from? "), "rb").read()
epl_entries = int(epl_data[128:129].encode("hex"))
tmx_count = epl_data.count("TMX0")
rmd_count = epl_data.count(findRMD)

if tmx_count > 0:
    while tmx_count > tmx_number:
        tmx_number = tmx_number + 1
        firstLocation = epl_data.find("TMX0", firstLocation + 1)
        read_size = firstLocation - 4
        read_size = epl_data[read_size : read_size + 4].encode("hex")
        read_size = int(read_size, 16)
        read_size = int(struct.pack('<I', read_size).encode("hex"), 16)
        tmx_data = firstLocation - 8
        tmx_data = epl_data[tmx_data:tmx_data + read_size]
        tmxWriter = open(str(tmx_number) + ".tmx", "wb")
        tmxWriter.write(tmx_data)
        tmxWriter.close()

if rmd_count > 0:
    while rmd_count > rmd_number:
        rmd_number = rmd_number + 1
        rmdStart = epl_data.find(findRMD, rmdStart + 1)
        rmdSize = rmdStart - 172
        rmdSize = epl_data[rmdSize : rmdSize + 4].encode("hex")
        rmdSize = int(rmdSize, 16)
        rmdSize = int(struct.pack('<I', rmdSize).encode("hex"), 16)
        rmdWriter = open(str(rmd_number) + ".RMD", "wb")
        rmdWriter.write(epl_data[rmdStart:rmdStart+rmdSize])
        rmdWriter.close()
        
raw_input("Done extracting, press enter to close. ")
exit(0)
        
=======
#include <cmath>
//CruzJeff 3/4/2018
/* Given an integer, write a function to determine if it is a power of three.

Follow up:
Could you do it without using any loop / recursion?
*/
class Solution {
    
public:
    bool is_integer(double k) {
    return ((std::ceil(k) - k) < 1.0e-10);
}
    
public:
    bool isPowerOfThree(int n) {
        
        if (n <= 0) 
            return false;
        
        else {
            long double log3 = log(n)/log(3);
            return is_integer(log3); }
    }
};

int main() {

	return 0;
}



>>>>>>> 81c1eb7770902652de78b7c93f0c81113d4a34e6
