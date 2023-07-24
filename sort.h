#ifndef SORT_H_
#define SORT_H_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print functions */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* sorting functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
/**
 * swap - swap two vars in array
 * @A: array
 * @a: 1st num
 * @b: 2nd num
 * @size: size of array
 */
void swap(int *A, int a, int b, size_t size);
/**
 * swim - routine to build heap
 * @A: int* array being sorted
 * @i: index to swim
 * @size: size of the array
 */
void swim(int *A, int i, size_t size);
/**
 * sink - routine to place items into place in heap
 * @A: int *array being sorted
 * @i: index to sink
 * @N: size of array
 * @size: size of the full array
 */
void sink(int *A, int i, int N, size_t size);
/**
 * heap_sort - heapsort with sinkdown method
 * @array: int* array to sort
 * @size: size of the array
 */
void heap_sort(int *array, size_t size);
/**
 * radix_sort - sort array with radix method
 * @array: array to sort
 * @size: size of the array
 *
 * Return: nothing
*/

void radix_sort(int *array, size_t size);
/**
 * getCantRep - Returns the number of digits of the largest number in the array
 * @num: The largest number
 *
 * Return: Number of digits of the num
*/

int getCantRep(int num);
/**
 * swaps - swaps both
 * @p: first node to swap
 * @c: second node to swap
 * @list: list to set null or not
 */
void swaps(listint_t *p, listint_t *c, listint_t **list);
#endif
