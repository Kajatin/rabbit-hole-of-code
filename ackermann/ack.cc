#include <iostream>
#include <sstream>

static unsigned long long count = 0;

int ack(int m, int n)
{
    count++;
    if(m == 0)
        return n+1;
    else if(m > 0 && n == 0)
        return ack(m-1, 1);
    else
        return ack(m-1, ack(m, n-1));
}

int main(int argc, char const *argv[])
{
    std::istringstream ss(argv[1]);
    int m;
    ss >> m;
    std::istringstream sss(argv[2]);
    int n;
    sss >> n;
    std::cout << "ack(" << m << ", " << n << ") = " << ack(m, n) << std::endl;

    std::cout << "Number of ack() function calls: " << count << std::endl;
    return 0;
}
