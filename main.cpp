//
//  main.cpp
//  LibraryMangement.cpp
//
//  Created by Apple on 18/08/21.
//  Copyright © 2021 samyak jain. All rights reserved.
//

#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    
std::string number;
};


int main()
{
    Person p1;
    
    cout << "Enter your full name: ";
    cin.get(p1.name, 100);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter your phone number: ";
    cin >> p1.number;
    
    std::cout << "\n";
    
    int num = 0;
    
    std::cout << "this is the book list\n1.c++ book\n2.python book\n3.java book\n4.java script book\n5.HTML book\n6.c# book\n7.ruby\n8.swift\n9.kotlin book\n10.Ethical hacking book\n";
    cout << "Enter book .no do you want to take: ";
    cin >> num;
    
    std::cout << "\n";
    
    
    if (num == 1) {
        
        std::cout << "you choose c++ book\n";
    } else if (num == 2) {
        
        std::cout << "you choose python book\n";
    } else if (num == 3) {
        
        std::cout << "you choose java book\n";
    } else if (num == 4) {
        
        std::cout << "you choose java script book\n";
    } else if (num == 5){
        
        std::cout << "you choose HTML book\n";
    } else if (num == 6){
        
        std::cout << "you choose c# book\n";
    } else if (num == 7){
        
        std::cout << "you choose ruby book\n";
    } else if (num == 8){
        
        std::cout << "you choose swift book\n";
    } else if (num == 9){
        
        std::cout << "you choose kotlin book\n";
    } else if (num == 10){
        
        std::cout << "you choose Ethical hacking book\n\n";
    }
    

    cout << "your information is saved" << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout <<"phone number: " << p1.number << endl;
    
    std::cout << "\n";
    
    std::cout << "you have to return this book after 7 days or you have to reissue the book then also you have to come after 7 days\n\n";
    
    std::cout << "              THANK YOU FOR COMING\n";
    
    
    
    
    
        
    return 0;
}

