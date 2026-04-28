#include <iostream>
#include <vector>

using namespace std;

int main()
{
   cout << "Hello world!!!" << endl;
   
   vector<std::string> vec{"one", "two"};
   for(const auto& item : vec)
   {
      cout << item << endl;
   }
   
   return 0;
}
