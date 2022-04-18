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
