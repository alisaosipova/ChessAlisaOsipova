cmake_minimum_required(VERSION 3.22)
project(chess)
set(CMAKE_CXX_STANDARD 20)
add_executable(chess
        main.cpp

        body/Bitboard.hpp
        body/Pieces.hpp body/Pieces.cpp
        body/ZobristHashConstants.hpp
        body/ZobristHash.hpp body/ZobristHash.cpp
        body/RepetitionHistory.hpp body/RepetitionHistory.cpp
        body/Move.hpp body/Move.cpp
        body/Position.hpp body/Position.cpp

        body/KnightMasks.hpp
        body/KingMasks.hpp
        body/SlidersMasks.hpp
        body/PsLegalMoveMaskGen.hpp body/PsLegalMoveMaskGen.cpp
        body/MoveList.hpp body/MoveList.cpp
        body/LegalMoveGen.hpp body/LegalMoveGen.cpp
        body/LegalMoveGenTester.hpp body/LegalMoveGenTester.cpp

        body/PassedPawnMasks.hpp
        body/StaticEvaluator.hpp body/StaticEvaluator.cpp
        body/MoveSorter.hpp body/MoveSorter.cpp
        body/TranspositionTable.hpp body/TranspositionTable.cpp
        body/SearchInterrupter.hpp body/SearchInterrupter.cpp
        body/AI.hpp body/AI.cpp

        body/Storage.hpp body/Storage.cpp
        body/UI.hpp body/UI.cpp)
include(FindPkgConfig)
add_definitions(-Werror)
add_definitions(-O3)
add_definitions(-flto)


find_package(Threads REQUIRED)
target_link_libraries(chess Threads::Threads)


target_link_libraries(chess sfml-system sfml-window sfml-graphics sfml-audio)