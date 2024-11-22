#include<iostream>
#include "logger.hpp"

#include<thread>
using namespace std ;

void user1Logs(){
  Logger * logger1 = Logger :: getInstances() ;
  logger1 -> log("User 1 logs in") ;
}

void user2Logs(){
  Logger * logger2 = Logger :: getInstances() ;
  logger2 -> log("User 2 logs in") ;
}

int main() {
  thread t1(user1Logs) ;
  thread t2 (user2Logs) ;
  t1.join() ;
  t2.join() ;

  
  
  
  return 0;
}

// g++ -o singleton *.cpp

// ./singleton