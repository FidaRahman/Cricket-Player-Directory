cmake_minimum_required(VERSION 3.19)
project(fidaPlayerDirectory)

set(CMAKE_CXX_STANDARD 14)

add_executable(fidaPlayerDirectory main.cpp Batsman.cpp Batsman.h Bowler.cpp Bowler.h Wicketkeeper.cpp Wicketkeeper.h Club.cpp Club.h Player.cpp Player.h)