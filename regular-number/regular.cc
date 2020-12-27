#include <iostream>

int main()
{
    int N{};
    int num = 2;
    int counter = 0;
    std::cout << "Please Enter a Number: ";
    std::cin >> N;

    std::cout << std::endl
              << "Here are " << N << " regular numbers:"<<std::endl;

    while (counter < N)
    {
        //determine if after dividing by 2 then 3 and 5 get 1
        int n = num;
        while (n % 2 == 0)
        {
            n = n / 2;
        }

        while (n % 3 == 0)
        {
            n = n / 3;
        }

        while (n % 5 == 0)
        {
            n = n / 5;
        }

        if (n == 1)
        {
            counter++;
            std::cout << num << std::endl;
        }
        num++;
    }
}