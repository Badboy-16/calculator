/**
 * @file eval.c
 * @author Yang Yunyi (yunyiyang@ln.hk)
 * @brief Functions related to calculation expression evaluation
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022 Yang Yunyi
 *
 * @section LICENSE
 *
 * This file is part of Calculator. 
 * 
 * Calculator is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * Calculator is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * Calculator. If not, see <https://www.gnu.org/licenses/>. 
 * 
 */

 #include <ctype.h>
 #include <string.h>
 #include <stddef.h>
 #include <stdlib.h>

 #include "eval.h"

/**
 * @brief Evaluate array of operands/operators
 * 
 * @param parsed array of operands/operators strings
 * @return double Result of calculation
 */
double eval(char *parsed[]) {
    double result = atof(parsed[0]);

    for (int i = 1; parsed[i]; i += 2) {
        result = operate(result, atof(parsed[i+1]), *parsed[i]);
    }

    return result;
}

/**
 * @brief Do calculation on given two operands and one operator
 * 
 * @param op1 First operand
 * @param op2 Second operand
 * @param operator One of four basic math operators ('+', '-', '*', '/')
 * @return double The result of calculation
 */
double operate(double op1, double op2, char operator) {
    switch (operator) {
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
    }
}

/**
 * @brief Parse calculation expression and store in array of pointers parsed
 * 
 * @param parsed array of strings of operands/operators/parenthese
 * @param inputstr Calculation expression in string
 * @return void
 */
void parse(char *parsed[], char *inputstr) {
    char op[MAXLEN];
    int parsedindex = 0;
    int opindex = 0;

    while (1) {
        if (isoperator(*inputstr) || *inputstr == '\0') {
            if (opindex > 0) {
                op[opindex] = '\0';
                parsed[parsedindex] = (char *) malloc(strlen(op)+1);
                strcpy(parsed[parsedindex], op);
                parsedindex++;
                opindex = 0;
            }
            if (*inputstr == '\0') {
                break;
            }
            op[0] = *inputstr;
            op[1] = '\0';
            parsed[parsedindex] = (char *) malloc(strlen(op)+1);
            strcpy(parsed[parsedindex], op);
            parsedindex++;
            inputstr++;
        } else if (*inputstr == '.' || isdigit(*inputstr)) {
            op[opindex++] = *inputstr++;
        }
    }
    parsed[parsedindex] = NULL;
}

/**
 * @brief Test if character c is an operator
 * 
 * @param c character to be tested
 * @return int 1 if c is an operator, otherwise 0
 */
int isoperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
