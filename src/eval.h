/**
 * @file eval.h
 * @author Yang Yunyi (yunyiyang@ln.hk)
 * @brief Header file for eval.c
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022 Yang Yunyi
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

#define MAXOPS 48
#define MAXLEN 16

double eval(char *[]);
double operate(double, double, char);
void parse(char *[], char *);
int isoperator(char);
