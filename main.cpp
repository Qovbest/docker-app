#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "==================================" << endl;
    cout << "Hello from C++ Docker Container!" << endl;
    cout << "==================================" << endl;
    cout << "This is a simple C++ application deployed with Docker." << endl;
    cout << "Container hostname: " << endl;
    
    // 模拟一些计算
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;
    
    cout << "Calculating sum of numbers: ";
    for (int num : numbers) {
        cout << num << " ";
        sum += num;
    }
    cout << endl;
    
    cout << "Sum result: " << sum << endl;
    cout << "Average: " << (double)sum / numbers.size() << endl;
    cout << "==================================" << endl;
    
    return 0;
}
