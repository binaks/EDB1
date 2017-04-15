RM = rm -rf

CC=g++

LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

CFLAGS = 

.PHONY: all clean debug

all: analise 

debug: CFLAGS += -g -O0
debug: analise

analise: $(OBJ_DIR)/binarysearch.o $(OBJ_DIR)/i_binarysearch.o $(OBJ_DIR)/linearsearch.o $(OBJ_DIR)/i_linearsearch.o $(OBJ_DIR)/quicksort.o  $(OBJ_DIR)/main.o
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

$(OBJ_DIR)/binarysearch.o: $(SRC_DIR)/binarysearch.cpp $(INC_DIR)/funcoes.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/i_binarysearch.o: $(SRC_DIR)/i_binarysearch.cpp $(INC_DIR)/funcoes.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/linearsearch.o: $(SRC_DIR)/linearsearch.cpp $(INC_DIR)/funcoes.h 
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/i_linearsearch.o: $(SRC_DIR)/i_linearsearch.cpp $(INC_DIR)/funcoes.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/quicksort.o: $(SRC_DIR)/quicksort.cpp $(INC_DIR)/funcoes.h
	$(CC) -c $(CFLAGS) -o $@ $<


$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/* 
