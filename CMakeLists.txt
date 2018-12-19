cmake_minimum_required(VERSION 3.13)
project(FlightSimulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(FlightSimulator main.cpp Lexer/Lexer.cpp Lexer/Lexer.h Lexer/CodeRow.cpp Lexer/CodeRow.h Parser/Parser.cpp Parser/Parser.h Commands/Command.h Commands/DefineVar.cpp Commands/DefineVar.h Commands/OpenServer.cpp Commands/OpenServer.h Commands/Connect.cpp Commands/Connect.h Commands/Condition.cpp Commands/Condition.h Commands/If.cpp Commands/If.h Commands/While.cpp Commands/While.h Interpreter/Interpreter.cpp Interpreter/Interpreter.h Interpreter/Symbol.cpp Interpreter/Symbol.h Commands/PutBind.h Interpreter/SymbolMap.h Commands/PutVar.cpp Commands/PutVar.h Interpreter/SymbolMap.cpp Client/Client.cpp Client/Client.h Server/Server.cpp Server/Server.h)