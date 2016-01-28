cmake_minimum_required(VERSION 3.3)
project(Banking_System)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    BankingSystem/BankingSystem/Account.cpp
    BankingSystem/BankingSystem/Account.h
    BankingSystem/BankingSystem/AccountHandler.cpp
    BankingSystem/BankingSystem/AccountHandler.h
    BankingSystem/BankingSystem/BankingSystem.cpp
    BankingSystem/BankingSystem/Define.h
    BankingSystem/BankingSystem/Exception.h
    BankingSystem/BankingSystem/HighCreditAccount.h
    BankingSystem/BankingSystem/NomalAccount.h
    BankingSystem/BankingSystem/String.cpp
    BankingSystem/BankingSystem/String.h)

add_executable(Banking_System ${SOURCE_FILES})