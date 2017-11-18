#ifndef A_HEAD_H_INCLUDED
#define A_HEAD_H_INCLUDED


typedef struct CirNode {
    int data;
    int number;
    struct CirNode *next;
}CirNode, *CirList;

void createCirList(CirList *L, int n);
void JosephCircle(CirList *L, int m,int n);

#endif // A_HEAD_H_INCLUDED
