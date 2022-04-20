/**
 * @file main.c
 * @author Yang Yunyi (yunyiyang@ln.hk)
 * @brief Main file for Calculator
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
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

#include <stdio.h>

#include "eval.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: calculate expression");
        return 1;
    }

    char *parsed[MAXOPS];
    double result;

    parse(parsed, argv[1]);
    result = eval(parsed);
    printf("%g\n", result);
    return 0;
}
