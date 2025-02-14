polynomial

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int expo;
    int coff;
    struct Node *next;
} Node;

Node *createPoly(Node **F, Node **R);
Node *addPoly(Node *p1, Node *p2);
void display(Node *p);

int main() {
    Node *p1 = NULL, *p2 = NULL, *p3 = NULL, *front_1 = NULL, *rear_1 = NULL, *front_2 = NULL, *rear_2 = NULL;

    printf("Enter polynomial 1:\n");
    p1 = createPoly(&front_1, &rear_1);
    printf("Enter polynomial 2:\n");
    p2 = createPoly(&front_2, &rear_2);

    p3 = addPoly(p1, p2);

    printf("Resultant Polynomial:\n");
    display(p3);

    return 0;
}

Node *createPoly(Node **F, Node **R) {
    Node *p = NULL;
    int expo, coff;

    printf("Enter the polynomial (exponent and coefficient) :\n (NOTE: enter 0 0 to end)\n");

    while (1) {
        scanf("%d%d", &expo, &coff);
        if (expo == 0 && coff == 0) {
            break;
        }

        p = (Node *)malloc(sizeof(Node));
        if (p == NULL) {
            printf("Error in memory allocation\n");
            exit(1);
        }

        p->expo = expo;
        p->coff = coff;
        p->next = NULL;

        if (*F == NULL && *R == NULL) {
            *F = *R = p;
        } else {
            (*R)->next = p;
            *R = p;
        }
    }

    return *F;
}

Node* addPoly(Node *p1, Node *p2) {
    Node *p = NULL, *temp = NULL, *start = NULL;

    while (p1 != NULL && p2 != NULL) {
        temp = (Node *)malloc(sizeof(Node));
        if (temp == NULL) {
            printf("Error in memory allocation\n");
            exit(1);
        }

        if (p1->expo == p2->expo) {
            temp->expo = p1->expo;
            temp->coff = p1->coff + p2->coff;
            p1 = p1->next;
            p2 = p2->next;
        } else if (p1->expo > p2->expo) {
            temp->expo = p1->expo;
            temp->coff = p1->coff;
            p1 = p1->next;
        } else {
            temp->expo = p2->expo;
            temp->coff = p2->coff;
            p2 = p2->next;
        }

        temp->next = NULL;

        if (p == NULL) {
            p = temp;
            start = p;
        } else {
            p->next = temp;
            p = p->next;
        }
    }

    while (p1 != NULL) {
        temp = (Node *)malloc(sizeof(Node));
        if (temp == NULL) {
            printf("Error in memory allocation\n");
            exit(1);
        }
        temp->expo = p1->expo;
        temp->coff = p1->coff;
        temp->next = NULL;
        p->next = temp;
        p = p->next;
        p1 = p1->next;
    }

    while (p2 != NULL) {
        temp = (Node *)malloc(sizeof(Node));
        if (temp == NULL) {
            printf("Error in memory allocation\n");
            exit(1);
        }
        temp->expo = p2->expo;
        temp->coff = p2->coff;
        temp->next = NULL;
        p->next = temp;
        p = p->next;
        p2 = p2->next;
    }

    return start;
}

void display(Node *p) {
    if (p == NULL) {
        printf("Empty Polynomial\n");
        return;
    }

    while (p != NULL) {
        printf("%dx^%d", p->coff, p->expo);
        p = p->next;
        if (p != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}