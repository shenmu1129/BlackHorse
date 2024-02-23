
#include <iostream>

int main()
{
    void* p = NULL;
    int* i = NULL;
    char* c = NULL;
    c = (char*)i;//不同类型需要强转
    c = (char*)p;
     
    std::cout << "Hello World!\n";
}
