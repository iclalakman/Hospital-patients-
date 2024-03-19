#include <stdio.h>
#define counterderma 2
#define counterheart 3
#define counterpedi 5
int main() {
    
    char type;
    int treatedpatient=0;
    int untreatedpatient=0;
    int derma=0;
    int heart=0;
    int pedi=0;

    printf("Type (d: dermatologist, h: heart surgeon, p: pediatrician, x: exit): ");
    scanf(" %c",&type);

    while ( type != 'x') {
        if (type == 'd') {
            if (derma < counterderma) {
                treatedpatient += 1;
                derma += 1;
                printf("Dermatologist %d treats patient %d\n",derma,treatedpatient);
            } else {
                treatedpatient += 1;
                untreatedpatient += 1;
                printf("Patient %d untreated!\n",treatedpatient);
            }
        } else if (type == 'h') {
            if ( heart < counterheart) {
                treatedpatient += 1;
                heart += 1;
                printf("Heart Surgeon %d treats patient %d\n",heart,treatedpatient);
            } else {
                treatedpatient += 1;
                untreatedpatient += 1;
                printf("Patient %d untreated!\n",treatedpatient);
            }
        } else if (type == 'p') {
            if ( pedi < counterpedi) {
                treatedpatient += 1;
                pedi += 1;
                printf("Pediatrician %d treats patient %d\n",pedi,treatedpatient);
            } else {
                treatedpatient += 1;
                untreatedpatient += 1;
                printf("Patient %d untreated!\n",treatedpatient);
            }
        }

        printf("Type (d: dermatologist, h: heart surgeon, p: pediatrician, x: exit): ");
        scanf(" %c", &type);
    }

    printf("\n%d patients treated, %d patient not treated!",treatedpatient-untreatedpatient,untreatedpatient);

    return 0;
}





