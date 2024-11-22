#include<iostream>
#include "logger.hpp"
using namespace std ;

int Logger :: cnt = 0;
Logger* Logger :: loggerInstance = nullptr ;
mutex Logger :: mtx ;

Logger :: Logger(){
  cnt++ ;
  cout<<"New instances created. Num of instances : " << cnt << endl ;
}

void Logger :: log(string msg){
  cout << msg << endl ;
}


Logger* Logger :: getInstances(){
  if(loggerInstance == nullptr){
    mtx.lock() ;
    if(loggerInstance == nullptr){
      loggerInstance = new Logger() ;
    }
    mtx.unlock() ;
  }

  return loggerInstance ;
}

