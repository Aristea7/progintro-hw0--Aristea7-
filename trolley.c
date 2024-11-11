#include <stdio.h>
#include <stdlib.h>
int main() {
    long int left_cost, right_cost;

    while (1) {
        // Ζητάμε από τον χρήστη το κόστος για την αριστερή επιλογή
        printf("Please enter the cost of going left: ");
        if (scanf("%lld", &left_cost) != 1) {
            // Αν δεν διαβάσουμε έγκυρο αριθμό, τερματίζουμε με κωδικό εξόδου 1
            return 1;
        }

        // Ζητάμε από τον χρήστη το κόστος για την δεξιά επιλογή
        printf("Please enter the cost of going right: ");
        if (scanf("%lld", &right_cost) != 1) {
            // Αν δεν διαβάσουμε έγκυρο αριθμό, τερματίζουμε με κωδικό εξόδου 1
            return 1;
        }

        // Επιλογή της καλύτερης κατεύθυνσης
        if (left_cost <= right_cost) {
            printf("Go left.\n");
        } else {
            printf("Go right \n");
        }
    }
    return 0;
}
