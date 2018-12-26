all:
	g++ Client/*.cpp Client/*.h Commands/*.cpp Commands/*.h Expressions/*.cpp Expressions/*.h Lexer/*.cpp Lexer/*.h Parser/*.cpp Parser/*.h Server/*.cpp Server/*.h Threads/*.cpp Threads/*.h Interpreter/*.cpp Interpreter/*.h main.cpp -std=c++14 -Wall -pthread
	