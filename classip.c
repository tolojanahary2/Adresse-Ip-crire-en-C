#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void entre_ip (char *nom)
{ 
	int premierePartie;
	 char *get ;
	 get=getenv("QUERY_STRING");
        sscanf(get, "nom=%99[^&]", nom);
   	
		sscanf(get,"nom=%d",&premierePartie);
		
		printf("Content-Type: text/html\n\n");
		    printf("<!DOCTYPE html>\n<html><head>\n<title>Ipadresse</title>");
		    printf("</head><body>");

		if(premierePartie>=0  && premierePartie<=127)
		{
		printf("<h3>IP inclure au classe A</h3></body></html>");
		}
		else if ( premierePartie>=128 && premierePartie<=191)
		{
		printf("<h3>IP inclure  au classe B</h3></body></html>");
		
			}
			else if ( premierePartie>=192 && premierePartie<=223)
			{
			printf("<html><body><h3>IP inclure au classe C</h3></body></html>");
				}
				else if ( premierePartie>=224 && premierePartie<=240)
			{
			printf("<html><body><h3>IP inclure au classe D</h3></body></html>");
				}
				else if ( premierePartie>=240&& premierePartie<=255)
			{
			printf("<html><body><h3>IP inclure au classe E</h3></body></html>");
				}
			else {
			printf("<html><body><h3>Adresse IP introuvable</h3></body></html>");
				}
		        printf("<br><a href=\"affiche.html\">Tester d'autre IP </a></td>");		
	}
int main()
{
	char nom[16];
	
	fgets(nom,sizeof(nom),stdin);
	
	nom[strcspn(nom,"\n")] = '\0';
		
	entre_ip (nom);

	return 0;
	}
	
	
	/// utlisation:executer d'abord cette programmeet chanchger le fichier objetr par l'extention avec (.CGI) puis ouvrir le  fichier.html et utilisez ce progamme.
	///en suivant ces etapes ,vous pouvez utiliser cette petit programme pour identifier la classe de l'IP
	
