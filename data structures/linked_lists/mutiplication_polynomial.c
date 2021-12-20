#include<stdio.h>
#include<stdlib.h>
struct pol{
        int quot;
        int deg;
        struct pol* next;
}*newnode,*temp1,*temp2;
struct pol* head1=NULL;
struct pol* tail1=NULL;
struct pol* head2=NULL;
struct pol* tail2=NULL;
struct pol* head3=NULL;
struct pol* tail3=NULL;
struct pol* head4=NULL;
struct pol* tail4=NULL;
void create_1(int n){
        int q,d,i=0;
        while (i<n){
        newnode=(struct pol*)malloc(sizeof(struct pol));
        scanf("%d%d",&q,&d);
        newnode->quot=q;
        newnode->deg=d;
        newnode->next=NULL;
        if (head1==NULL)
        {
                head1=newnode;
                tail1=newnode;
        }
        else
        {
                tail1->next=newnode;
                tail1=newnode;
        }
        i++;
        }

}

void create_2(int n)
{
        int q,d,i=0,n1;
        printf("enter the no of terms fo pol-2");
        scanf("%d",&n1);
        while (i<n1)
        {
                newnode=(struct pol*)malloc(sizeof(struct pol));
                scanf("%d%d",&q,&d);
                newnode->quot=q;
                newnode->deg=d;
                newnode->next=NULL;
                if (head2==NULL)
                {
                        head2=newnode;
                        tail2=newnode;
                }
                else
                {
                        tail2->next=newnode;
                        tail2=newnode;
                }
                i++;
        }
}

void disp(){
        temp1=head1;
        temp2=head2;
        while (temp1!=NULL)
        {
                printf("%dX^%d+",temp1->quot,temp1->deg);
                temp1=temp1->next;
        }
        printf("\n \n");
        while(temp2!=NULL)
        {
                printf("%dX^%d+",temp2->quot,temp2->deg);
                temp2=temp2->next;
        }
}


void mul(int n)
{
        temp1=head1;
        temp2=head2;
        /*while(temp1&&temp2)
        {
                for (int i=0;i<n;i++)
                {
                        printf("%d x ^ %d",temp1->quot*temp2->quot,temp1->deg+temp2-deg);
                        temp1=temp1->next;
                }
                temp2=temp2->next;
        }*/
         do
        {
                temp2=head2;
                while (temp2!=NULL)
                {
                    int q,d;
                        newnode=(struct pol*)malloc(sizeof(struct pol));
                        //printf("(%d X ^ %d)+",(temp1->quot)*(temp2->quot),(temp1->deg)+(temp2->deg));
                        q=temp1->quot*temp2->quot;
                        d=temp1->deg+temp2->deg;
                        newnode->quot=q;
                        newnode->deg=d;
                        newnode->next=NULL;
                        if (head3==NULL)
                        {
                                head3=newnode;
                                tail3=newnode;
                        }
                        else{
                                tail3->next=newnode;
                                tail3=newnode;
                        }
                        temp2=temp2->next;
                }
                temp1=temp1->next;
        }while(temp1!=NULL);
        
        int tum=-1;
        
        temp1=head3;

        while (temp1!=NULL)
        {
                temp2=head3;
                while(temp2!=NULL)
                {
                        if (temp1->deg==temp2->deg && temp1!=tum)
                        {
                                tum=temp1->deg;
                                temp1->quot=temp1->quot+temp2->quot;
                        }
                        temp2=temp2->next;
                        

                }
                //printf("(%d X ^ %d)+",temp1->quot,temp1->deg);
                temp1=temp1->next;
                newnode=(struct pol*)malloc(sizeof(struct pol));
                newnode->quot=temp1->quot;
                newnode->deg=temp1->deg;
                if (head4==NULL)
                {
                        head4=newnode;
                        tail4=newnode;
                }
                else
                {
                        tail4->next=newnode;
                        tail4=newnode;
                }

        }

}

void disp_w()
{
        temp1=head4;
        while(temp1!=NULL)
        {
                printf("%d X ^ %d",temp1->quot,temp1->deg);
                temp1=temp1->next;
        }
}

void main()
{
        int n;
        printf("enter the n:");
        scanf("%d",&n);
        create_1(n);
        create_2(n);
        disp();
        mul(n);
        disp_w();
}