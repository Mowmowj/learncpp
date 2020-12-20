//
//  struct.cpp
//  learnCpp
//
//  Created by Shelton Cheung on 2020/12/20.
//  Copyright © 2020 xiaoetong. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
//创建程序员数据类型
//结构体相当于自己造数据类型
//结构体
struct Developer {
    int age;
    int money;
    string name;
};
int main(){
    struct Developer shelton;
    shelton.age = 18;
    shelton.money = 1000;
    shelton.name = "shelton";
    cout<<shelton.name+" "<<shelton.age<<" "<<shelton.money<<endl;

//创建结构体的时候顺便建个变量
struct Dancer {
    int age;
    int money;
    string name;
};
    //结构体数组
    struct Dancer james_fan = {
        11,1222,"sh",
    };
    //指针访问结构体
    struct Dancer * p = &james_fan;
    std::cout<< p->age << p->money << p->name <<std::endl;
    return 0;
}

