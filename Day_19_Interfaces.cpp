#include <iostream>

using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic
    {
    public:
    int sum = 0;
    int divisorSum(int n)
        {
        for(int i = 1; i <= n; i++)
            if(n % i == 0)
                sum += i;

        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
