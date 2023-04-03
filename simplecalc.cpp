#include <iostream>
//example program for a potential job interview

class Calculator {
public:
    double executeOperations(char operation, double a, double b){
        switch(operation){
            case '+':
                return a + b;
                break;
            case '-':
                return a - b;
                break;
            case '*':
                return a * b;
                break;
            case '/':
                return a / b;
                break;
            default:
                std::cout << "Invalid operation" << "std::endl";
                return 0;
        }
    }
};

int main(){
    
    double x, y;
    char op;
    Calculator basic;
    std::cout << "Initializing calculator, input in infix notation" <<  std::endl;

    while(true){
        std::cin >> x >> op >> y;
        if (std::cin.fail()){
            std::cout << "How did you screw this up dingus, like 2 + 2\n";
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            
        }
        else{
            std::cout <<  basic.executeOperations(op,x,y);// << std::endl;
        }
    }
    return 0;
}