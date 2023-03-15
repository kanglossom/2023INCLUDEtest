#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";               - 어떤 기호로 계산을 할지 고르라고 썼습니다
    cin >> op;

    cout << "Enter first number: ";                        - 숫자를 입력하라는 코드 입니다.
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    if(op == '+'){
        result = num1 + num2;                               -만약 더하면 더하고,빼면 빼고, 곱하면 곱하고,나
    } else if(op == '-'){                                              누면 나누라는 코드 입니다
        result = num1 - num2;
    } else if(op == '*'){
        result = num1 * num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else{
        cout << "Invalid operator\n";                 --------- 이 코드는 코드를 잘못 입력했으니 다시 입력
        return 0;                                                           하라는 코드 입니다.
    }

    cout << num1 << " " << op << " " << num2 << " = " << result;

    return 0;
}


이 코드는 2가지 숫자를 계산 할 수 있는 계산기로 코드를 짰습니다. 이 코드는 2개의 숫자를 더하거나 빼거나, 곱하거나 나눌 수 있는 코드 입니다. 
