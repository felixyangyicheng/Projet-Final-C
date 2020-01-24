#include <stdio.h>
#include <stdlib.h>

#define x 7
#define y 6


void afficherScore() {


	Printf();
}

char TableauJeu[y][x] = { 0 }; /* chaine de caractère a deux dimensions y et x */

void displayTableuJeu() {   /* créer un tableux pour mettre les pièces, par défaut c'est ' ' */

	for (int row = 0; row < y; row++) {
		for (int col = 0; col < x; col++) {
			TableauJeu[row][col] = ' ';
		}

	}

}

int resultat() {/* s'il y a gagnant, il y a un résultat, elle return 1 */
	if ( /**/) {
		return 0;
	}

	return 1;
}

int rempli() {/* il y a un tab, il faut le parcourir, parcourir le d'abord en y, apres en x, vérifie si toutes les cases sont remplies, si oui return 1*/
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
	for (int row = 0;  row<= y; row++){
		printf("|%c|%c|%c|%c|%c|%c|%c|\n", TableauJeu[row][0], TableauJeu[row][1], TableauJeu[row][2], TableauJeu[row][3], TableauJeu[row][4], TableauJeu[row][5], TableauJeu[row][6]);
		if (row == y) {
			printf("|--|--|--|--|--|--|--|\n");
		}
	}

}

//ModeJeu

void Move() {
	

}




int main() {

	





	return 0;
}