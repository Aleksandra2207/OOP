#include <vector>
#include <iostream>
using namespace std;

void findFirstNPrimes(int n)
{
    vector<int> vectorWithPrimeNumbers;
    vectorWithPrimeNumbers.push_back(2);
    int number = 3;
    int ch = 0;
    while (vectorWithPrimeNumbers.size() < n)
    {
        for (int i = 0; i < vectorWithPrimeNumbers.size(); i++)
        {
            if (number % vectorWithPrimeNumbers[i] == 0)
            {
                break;
            }
            else
                ch++;
        }
        if (ch == vectorWithPrimeNumbers.size())
        {
            vectorWithPrimeNumbers.push_back(number);
        }
        number += 2;
        ch=0;
    }
    for (int primeNumber : vectorWithPrimeNumbers)
    {
        cout << primeNumber << " ";
    }
    cout << endl;
}
int main()
{
    int n = 0;
    cout << "Enter n" << endl;
    cin >> n;
    findFirstNPrimes(n);
    return 0;
}
