// Singleton class
// Private constructor prevents direct instantiation
// Static member variable to store a single instance of the class
// Static method to provide access to the single instance
// Thread-safe using a mutex


#ifndef logger_h
#define logger_h

#include <iostream>
#include <mutex>

using namespace std ;
class Logger{
private:
  static int cnt ;
  static Logger *loggerInstance ;
  static mutex mtx ;

  Logger() ;
  Logger(const Logger &) ;
  Logger operator=(const Logger &) ;


public:
  static Logger *getInstances();
  void log(string msg) ;

} ;



#endif