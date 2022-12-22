/*
 * headers_operations.h
 *
 *  Created on: 14 dic 2022
 *      Author: sario
 */

#ifndef HEADERS_OPERATIONS_H_
#define HEADERS_OPERATIONS_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <ctype.h>

#define ECHOMAX 255
#define PROTOPORT 60001
#define NO_ERROR 0
#define DEFAULT_ADDRESS "127.0.0.1"

int add(int first_operand, int second_operand){
	return first_operand + second_operand;
}

int sub(int first_operand, int second_operand){
	return first_operand - second_operand;
}

int mult(int first_operand, int second_operand){
	return first_operand * second_operand;
}

double division(int first_operand, int second_operand){
	return first_operand / second_operand;
}


#endif /* HEADERS_OPERATIONS_H_ */
