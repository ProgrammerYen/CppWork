#include <iostream>
using namespace std;

namespace first {
    int age = 13;
}

namespace second {
    int age = 14;
}

int main()
{
    using namespace second;

    cout << first::age << "\n";
    cout << age;
    return 0;
}