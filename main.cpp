//
//  main.cpp
//  链表
//
//  Created by s20151104699 on 2016/12/23.
//  Copyright © 2016年 s20151104699. All rights reserved.
//

#include <iostream>
#define N 5
struct Node
{
    char name[40];
    int age;
    struct Node *next;
};
int main()
{
    struct Node *head,*p,*q;
    int i;
    head=new Node;
    head->next=0;
    q=head;
    scanf("%s",head->name);
    scanf("%d",&head->age);
    for(i=0;i<N;i++)
    {
        p=new Node;
        scanf("%s",p->name);
        scanf("%d",&p->age);
        p->next=0;
        q->next=p;
        q=p;
    }
    p=head;
    while(p)
    {
        printf("%s   %d  \n",p->name,p->age);
        p=p->next;
    }
    return 0;
}
