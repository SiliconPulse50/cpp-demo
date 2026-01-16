#include <iostream>
// 引入所有的“零件”头文件
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Power.h"  // <--- 加上这一行！
#include "Mod.h"


using namespace std;

int main(int argc, char** argv) {
    // 1. 准备工具：实例化四个运算类
    Addition add;
    Subtraction sub;
    Multiplication mul;
    Division div;
    Power pow_tool;
    Mod mod_tool;

    int choice;
    double num1, num2;

    while (true) {
        // 2. 打印菜单界面
        cout << "\n========================" << endl;

        cout << " === 正义的主线计算器 === " << endl;

        cout << "========================" << endl;
        cout << " 1. 加法 (+)" << endl;
        cout << " 2. 减法 (-)" << endl;
        cout << " 3. 乘法 (*)" << endl;
        cout << " 4. 除法 (/)" << endl;
        cout<<" 5.乘方（^)"<<endl;
        cout << " 6. 取模 (%)" << endl;
        cout << " 0. 退出程序" << endl;
        cout << "------------------------" << endl;
        cout << "请输入你的选择 (0-4): ";
        
        // 3. 获取用户输入
        cin >> choice;

        // 如果输入 0，就跳出循环，结束程序
        if (choice == 0) {
            cout << "感谢使用，再见！" << endl;
            break; 
        }

        cout << "请输入两个数字 (中间用空格隔开): ";
        cin >> num1 >> num2;

        // 4. 根据选择调用不同的工具
        switch (choice) {
            case 1:
                cout << ">>> 结果是: " << add.calculate(num1, num2) << endl;
                break;
            case 2:
                cout << ">>> 结果是: " << sub.calculate(num1, num2) << endl;
                break;
            case 3:
                cout << ">>> 结果是: " << mul.calculate(num1, num2) << endl;
                break;
            case 4:
                // 除法里通常有防止除以0的逻辑，这里直接调用
                cout << ">>> 结果是: " << div.calculate(num1, num2) << endl;
                break;
            case 5:
    			cout << ">>> 结果是: " << pow_tool.calculate(num1, num2) << endl;
    			break;
    		case 6:
            	cout << ">>> " << num1 << " 除以 " << num2 << " 的余数是: " << mod_tool.calculate(num1, num2) << endl;
            	break;
            default:
                cout << "!!! 这里的选项不对，请重新输入 !!!" << endl;
        }
        // 暂停一下，让用户看清结果
        // system("pause"); 
    }
    return 0;
}
