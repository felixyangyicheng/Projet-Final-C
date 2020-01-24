#include <stdio.h>
#include <stdlib.h>

#define x 7
#define y 6


void afficherScore() {


	Printf();
}

char TableauJeu[y][x] = { 0 }; /* chaine de caract�re a deux dimensions y et x */

void displayTableuJeu() {   /* cr�er un tableux pour mettre les pi�ces, par d�faut c'est ' ' */

	for (int row = 0; row < y; row++) {
		for (int col = 0; col < x; col++) {
			TableauJeu[row][col] = ' ';
		}

	}

}

int resultat() {/* s'il y a gagnant, il y a un r�sultat, elle return 1 */
	if ( /**/) {
		return 0;
	}

	return 1;
}

int rempli() {/* il y a un tab, il faut le parcourir, parcourir le d'abord en y, apres en x, v�rifie si toutes les cases sont remplies, si oui return 1*/
	for (int row = 0; row < y; row++) {
		for (int col = 0; col < x; col++) {
			if (TableauJeu[row][col] = ' ') {
				return 0;
			}
		}

	}
	return 1;

} /* on applique la fonction rempli si la fonction juge */

void afficherJeux() {
	printf("|%c|%c|%c|\n", );

}



int main() {

	





	return 0;
}