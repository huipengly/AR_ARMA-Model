cmake_minimum_required(VERSION 3.5)
project(AR_ARMA_Model)

set(CMAKE_CXX_STANDARD 11)

add_executable(AR_ARMA_Model ARMA_Plus.cpp head.h mat.cpp source.cpp source.h mat.h)