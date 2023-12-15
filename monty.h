#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stacked_t - This program shows
 * doubly linked list representation \
 * of a stack (or queue)
 * a: integer
 * @previous: points to the previous element of the stack (or queue)
 * @onto: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
/**stack_s*/ /**stack_t*/
typedef struct stacked_t
{
	int a;
	struct stacked_t *previous;
	struct stacked_t *onto;
} stacked_s;

/**
 * struct busted_s - variables -args, file, line content
 * @arguments: value
 * @filed: pointer to monty file
 * @entails: line content
 * @kiffy: flag change stack <-> queue
 * Description: carries values through the program
 */
/**bus_s*/ /**bus_t*/
typedef struct busted_s
{
	char *arguments; /*args**/
	FILE *filed; /**file*/
	char *entails; /**content*/
	int kiffy; /**lifi*/
}  busted_t;
extern busted_t bus;

/**
 * struct info_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct info_s
{
	char *opcode;
	void (*f)(stacked_s **stack, unsigned int lne_num); /***line_number*/
} info_t; /**instruction_t*/

char *_reallocated(char *ptr, unsigned int od_sz, unsigned int nw_sz);
ssize_t gt_stdin(char **lnptr, int filed);
char  *clean_ln(char *entails);
void f_push(stacked_s **head, unsigned int num);
void f_pall(stacked_s **head, unsigned int num);
void f_pint(stacked_s **head, unsigned int num);
int exec(char *entails, stacked_s **head, unsigned int count, FILE *filed);
void free_stack(stacked_s *head);
void f_pop(stacked_s **head, unsigned int count);
void f_swap(stacked_s **head, unsigned int count);
void f_add(stacked_s **head, unsigned int count);
void f_nop(stacked_s **head, unsigned int count);
void f_sub(stacked_s **head, unsigned int count);
void f_div(stacked_s **head, unsigned int count);
void f_mul(stacked_s **head, unsigned int count);
void f_mod(stacked_s **head, unsigned int count);
void f_pchar(stacked_s **head, unsigned int count);
void f_pstr(stacked_s **head, unsigned int count);
void f_rotl(stacked_s **head, unsigned int count);
void f_rotr(stacked_s **head, __attribute__((unused)) unsigned int count);
void addnode(stacked_s **head, int a);
void addqueue(stacked_s **head, int a);
void f_queue(stacked_s **head, unsigned int count);
void f_stack(stacked_s **head, unsigned int count);
#endif
