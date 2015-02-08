#ifndef __COMMON__H__
#define __COMMON__H__

/**
 *@ brief list head define
 */
typedef struct list_head
{
	list_head * last;
	list_head * next;
} list_head_t;

#endif