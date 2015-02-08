#ifndef __SINGLE_LIST_H__
#define __SINGLE_LIST_H__
#inlude "common.h"
typedef struct single_list_head
{
	single_list_head * next;
} single_list_head_t;

#define SINGLELISTINIT(name) {list_head_t name;\
	name.last = NULL;\
	name.next = NULL;\
	}
static inline bool isEmpty(list_head_t listname)
{
	return (listname.next == NULL);
}

static inline void addTail(list_head_t listname, single_list_head_t * element)
{
	((single_list_head_t *)listname.last)->next = element;
	listname.last = element;
}
static inline single_list_head_t * getHead(list_head_t listname)
{
	return listname.next;
}

static inline single_list_head_t* getTail(list_head_t listname)
{
	return listname.last;
}

single_list_head_t * removeHead(list_head_t listname)
{
	single_list_head_t * temp;
	temp = (single_list_head_t *)listname.next;
	listname.next = temp.next;
	return temp;
}
#endif

