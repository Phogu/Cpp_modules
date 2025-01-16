#include "Contacts.hpp"
#include <iostream>

std::string Contacts::get_firstName()const{
    return (this->firstName);
}

std::string Contacts::get_lastName()const{
    return (this->lastName);
}

std::string Contacts::get_nickName()const{
    return (this->nickName);
}

std::string Contacts::get_phoneNumber()const{
    return (this->phoneNumber);
}

std::string Contacts::get_secret()const{
    return (this->secret);
}

void Contacts::set_firstName(std::string name){
    this->firstName = name;
}

void Contacts::set_lastName(std::string name){
    this->lastName = name;
}

void Contacts::set_nickName(std::string name){
    this->nickName = name;
}

void Contacts::set_phoneNumber(std::string num){
    this->phoneNumber = num;
}

void Contacts::set_secret(std::string secret){
    this->secret = secret;
}

Contacts::Contacts(){
}

Contacts::~Contacts(){
}
