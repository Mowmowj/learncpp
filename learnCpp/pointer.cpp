////
////  pointer.cpp
////  learnCpp
////
////  Created by Shelton Cheung on 2020/12/20.
////  Copyright © 2020 xiaoetong. All rights reserved.
////
//
//#include "pointer.hpp"
//#include<iostream>
//using namespace std;
////*取值符
////&取址符
//
//int main(){
//    int a = 10;
//    int b = 20;
//    int * p = &a;
//    std::cout<<"指针p指向的值是:"<<* p<<std::endl;
//    //空指针
//    int * n = NULL;
//    std::cout<<"空指针p的值是:"<<* n<<std::endl;
//   //野指针
//    int * y = (int *)0x1134;
//    std::cout<<"指针y的值是:"<<* y<<std::endl;
//    
//    
//    //常量指针:
//    const int * c = &a;
//    //常量指针不允许更改 指针指向的值: *c = 20;
//    //常量指针可以允许更改 指针的指向: c = &b;
//    std::cout<<"指针c的值是:"<<* c<<std::endl;
//    //指针常量:
//    int * const C = &a;
//    //指针常量可以允许更改 指针指向的值: *c = 20;
//    //指针常量不可以允许更改 指针的指向: c = &b;
//    
//    //双休 都不让改
//    const int * const d = &a;
//    
//    
//    //指针访问数组
//    int arr[] = {12,3312,3,123,123,12,312,312,312,31,231,231,2};
//    int * array = arr;
//};
//
//
