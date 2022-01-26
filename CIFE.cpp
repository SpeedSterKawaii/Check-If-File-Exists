#include<iostream>
#include <sys/stat.h>
bool FileExists(const std::string& name) {
  struct stat buffer;
  return (stat (name.c_str(), &buffer) == 0);
}

int main() {
   std::string filename = "C:/file_name.txt";//to find something in downloads get your PC's name
   std::cout << "Does file_name.txt Exists ? " << FileExists(filename) << std::endl;//1 == exist, 0 == nah
   return 0;
}
